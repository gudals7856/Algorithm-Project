#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <qdebug.h>
#include <QVector>
#include <algorithm>
#include <limits.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


QString dfsOutput;
static int rear = 0, front = 0; // 전단과 후단을 나타내는 변수
static int queue[6];    // BFS에서 정점을 큐에 넣어놓고 빠지는 순서대로 정점을 거쳐감
int a[6][6];   //정점의 개수가 6개이므로 정점 연결여부 확인을 위한 6*6 인접행렬 생성
int w[6][6];   //정점의 개수가 6개이므로 weight입력을 위한 6*6 인접행렬 생성
int searching[6];   // 정점과 정점이 연결되었는지 확인하는 배열

void MainWindow::BFS(int s)
{
    QString output;
    output += "V"+QString::number(s)+" ";


    searching[s] = 1;
    queue[rear++] = s;

    //큐에서 다 빼낼때까지
    while (front < rear){
        s = queue[front++];
        for(int i = 0; i <=5; i++){
            if(a[s][i] == 1 && searching[i] != 1){
                searching[i] = 1;
                output+="V"+QString::number(i)+" ";
                queue[rear++] = i;
            }
        }
    }
    ui->Result->setText(output);
}


void MainWindow::DFS(int v)
{
    dfsOutput += "V"+QString::number(v)+" ";
    //정점을 방문했다고 표시
    searching[v] = 1;
    for (int i = 0; i <= 5; i++) {
        //정점을 방문하지 않고 인접행렬이라면
        if (searching[i] != 1 && a[v][i] == 1 ) {
            DFS(i);
        }
    }
    ui->Result->setText(dfsOutput);
}



//getParent, unionParent, findParent => Kruskal을 수행하기위한 함수
int MainWindow::getParent(int parent[], int node)
{
    if(parent[node] == node) {
        return node;
    }
    return getParent(parent, parent[node]);
}
int MainWindow::unionParent(int parent[], int x, int y)
{
    x = getParent(parent, x);
    y = getParent(parent, y);
    if(x < y){
        parent[y] = x;
        return x;
    }
    else {
        parent[x] = y;
        return y;
    }
}
int MainWindow::findParent(int parent[], int x, int y)
{
    x = getParent(parent, x);
    y = getParent(parent, y);
    if(x == y){         // 같은 부모 노드
        return 1;
    }
    else{               // 다른 부모 노드
        return 0;
    }
}
class Edges{
    public:
    int node[2];
    int weight;
    Edges(){}
    Edges(int x, int y, int weight){
        this->node[0] = x;
        this->node[1] = y;
        this->weight = weight;
    }
    bool operator < (Edges &edge){
        return this->weight< edge.weight;
    }
};




bool MainWindow::ValidEdge(int u, int v, QVector<bool> InsertMST) { // u,v를 연결하는 edge가 유효하다면 true를 return한다.
   if (u == v)
       return false;
   if (InsertMST[u] == false && InsertMST[v] == false)
        return false;
   else if (InsertMST[u] == true && InsertMST[v] == true)
        return false;
   return true;
}

void MainWindow::Prim(int w[][6])
{
    QVector<bool> InsertMST(6, false);

    // 시작노드를 트리에 추가
    InsertMST[0] = true;

    int edgeCount = 0, mincost = 0;
    while (edgeCount <  5) {

        // 최소 가중치를 갖는 edge를 찾는다
        int min = INT_MAX;
        int a = -1;
        int b = -1;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (w[i][j] < min) {
                    if (ValidEdge(i, j, InsertMST)) {
                        min = w[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if (a != -1 && b != -1) {
            QString output;
            output = "Edge"+QString::number(edgeCount)+" : ("+QString::number(a)+", "+QString::number(b)+"), cost : "+QString::number(min)+"\n";
            ui->EdgeResult->setText(output);
            mincost = mincost + min;
            InsertMST[b] = InsertMST[a] = true;
        }
    }
    QString output2;
    output2 = "\n Minimum cost = "+mincost;
    ui->EdgeResult->setText(output2);

    return;
}


void MainWindow::on_CreateButton_clicked()
{
    //정점연결확인을 위해 입력한 0 or 1을 QString을 이용해 문자열로 받는다.
    QString str11=ui->V11->text();
    QString str12=ui->V12->text();
    QString str13=ui->V13->text();
    QString str14=ui->V14->text();
    QString str15=ui->V15->text();
    QString str16=ui->V16->text();
    QString str21=ui->V21->text();
    QString str22=ui->V22->text();
    QString str23=ui->V23->text();
    QString str24=ui->V24->text();
    QString str25=ui->V25->text();
    QString str26=ui->V26->text();
    QString str31=ui->V31->text();
    QString str32=ui->V32->text();
    QString str33=ui->V33->text();
    QString str34=ui->V34->text();
    QString str35=ui->V35->text();
    QString str36=ui->V36->text();
    QString str41=ui->V41->text();
    QString str42=ui->V42->text();
    QString str43=ui->V43->text();
    QString str44=ui->V44->text();
    QString str45=ui->V45->text();
    QString str46=ui->V46->text();
    QString str51=ui->V51->text();
    QString str52=ui->V52->text();
    QString str53=ui->V53->text();
    QString str54=ui->V54->text();
    QString str55=ui->V55->text();
    QString str56=ui->V56->text();
    QString str61=ui->V61->text();
    QString str62=ui->V62->text();
    QString str63=ui->V63->text();
    QString str64=ui->V64->text();
    QString str65=ui->V65->text();
    QString str66=ui->V66->text();

    //weight를 Qstring을 이용해 문자열을 받는다
    QString wstr11=ui->W11->text();
    QString wstr12=ui->W12->text();
    QString wstr13=ui->W13->text();
    QString wstr14=ui->W14->text();
    QString wstr15=ui->W15->text();
    QString wstr16=ui->W16->text();
    QString wstr21=ui->W21->text();
    QString wstr22=ui->W22->text();
    QString wstr23=ui->W23->text();
    QString wstr24=ui->W24->text();
    QString wstr25=ui->W25->text();
    QString wstr26=ui->W26->text();
    QString wstr31=ui->W31->text();
    QString wstr32=ui->W32->text();
    QString wstr33=ui->W33->text();
    QString wstr34=ui->W34->text();
    QString wstr35=ui->W35->text();
    QString wstr36=ui->W36->text();
    QString wstr41=ui->W41->text();
    QString wstr42=ui->W42->text();
    QString wstr43=ui->W43->text();
    QString wstr44=ui->W44->text();
    QString wstr45=ui->W45->text();
    QString wstr46=ui->W46->text();
    QString wstr51=ui->W51->text();
    QString wstr52=ui->W52->text();
    QString wstr53=ui->W53->text();
    QString wstr54=ui->W54->text();
    QString wstr55=ui->W55->text();
    QString wstr56=ui->W56->text();
    QString wstr61=ui->W61->text();
    QString wstr62=ui->W62->text();
    QString wstr63=ui->W63->text();
    QString wstr64=ui->W64->text();
    QString wstr65=ui->W65->text();
    QString wstr66=ui->W66->text();


    // 입력받은 문자열을 int형으로 바꾸어 이차원배열의 각 원소에 정점이 연결되었는지 확인하기 위한 0 or 1을 넣어준다.
    a[0][0] = str11.toInt();
    a[0][1] = str12.toInt();
    a[0][2] = str13.toInt();
    a[0][3] = str14.toInt();
    a[0][4] = str15.toInt();
    a[0][5] = str16.toInt();
    a[1][0] = str21.toInt();
    a[1][1] = str22.toInt();
    a[1][2] = str23.toInt();
    a[1][3] = str24.toInt();
    a[1][4] = str25.toInt();
    a[1][5] = str26.toInt();
    a[2][0] = str31.toInt();
    a[2][1] = str32.toInt();
    a[2][2] = str33.toInt();
    a[2][3] = str34.toInt();
    a[2][4] = str35.toInt();
    a[2][5] = str36.toInt();
    a[3][0] = str41.toInt();
    a[3][1] = str42.toInt();
    a[3][2] = str43.toInt();
    a[3][3] = str44.toInt();
    a[3][4] = str45.toInt();
    a[3][5] = str46.toInt();
    a[4][0] = str51.toInt();
    a[4][1] = str52.toInt();
    a[4][2] = str53.toInt();
    a[4][3] = str54.toInt();
    a[4][4] = str55.toInt();
    a[4][5] = str56.toInt();
    a[5][0] = str61.toInt();
    a[5][1] = str62.toInt();
    a[5][2] = str63.toInt();
    a[5][3] = str64.toInt();
    a[5][4] = str65.toInt();
    a[5][5] = str66.toInt();

    // 정점과 정점에 연결된 간선의 weight들을 이차원배열로 저장한다.
    w[0][0] = wstr11.toInt();
    w[0][1] = wstr12.toInt();
    w[0][2] = wstr13.toInt();
    w[0][3] = wstr14.toInt();
    w[0][4] = wstr15.toInt();
    w[0][5] = wstr16.toInt();
    w[1][0] = wstr21.toInt();
    w[1][1] = wstr22.toInt();
    w[1][2] = wstr23.toInt();
    w[1][3] = wstr24.toInt();
    w[1][4] = wstr25.toInt();
    w[1][5] = wstr26.toInt();
    w[2][0] = wstr31.toInt();
    w[2][1] = wstr32.toInt();
    w[2][2] = wstr33.toInt();
    w[2][3] = wstr34.toInt();
    w[2][4] = wstr35.toInt();
    w[2][5] = wstr36.toInt();
    w[3][0] = wstr41.toInt();
    w[3][1] = wstr42.toInt();
    w[3][2] = wstr43.toInt();
    w[3][3] = wstr44.toInt();
    w[3][4] = wstr45.toInt();
    w[3][5] = wstr46.toInt();
    w[4][0] = wstr51.toInt();
    w[4][1] = wstr52.toInt();
    w[4][2] = wstr53.toInt();
    w[4][3] = wstr54.toInt();
    w[4][4] = wstr55.toInt();
    w[4][5] = wstr56.toInt();
    w[5][0] = wstr61.toInt();
    w[5][1] = wstr62.toInt();
    w[5][2] = wstr63.toInt();
    w[5][3] = wstr64.toInt();
    w[5][4] = wstr65.toInt();
    w[5][5] = wstr66.toInt();


    if(ui->BFSButton->isChecked()){
        BFS(0);
    }
    if(ui->DFSButton->isChecked()){
        DFS(0);
    }
    if(ui->KruskalButton->isChecked()){
        QVector<Edges> v;

        for(int i=0; i<6; i++){
            for(int j=i; j<6; j++){     // 인접행렬을 반복문을 통해 확인
                if(a[i][j] == 1)
                    v.push_back(Edges(i, j, w[i][j]));       //v.push_back(시작정점, 끝정점, weight)
            }
        }

        sort(v.begin(), v.end());   // weight를 오름차순으로 정렬

        int parent[6];   // 부모 노드
        for(int i=0; i<6; i++){
            parent[i] = i;
        }

        int sum=0;
        QString output;
        for(int i=0; i<v.size(); i++){
            if(!findParent(parent, v[i].node[0]-1, v[i].node[1]-1)){
                // 사이클이 생기지 않는 경우 (다른 부모를 갖는경우)
                sum += v[i].weight;
                output = "Edge"+QString::number(i+1)+" : ("+QString::number(v[i].node[0]-1)+", "+QString::number(v[i].node[1]-1)+"), cost : "+QString::number(v[i].weight)+"\n";
                ui->EdgeResult->setText(output);
                // 연결을 하고 나면, 같은 부모를 갖게 되므로
                unionParent(parent, v[i].node[0]-1, v[i].node[1]-1);
            }
        }

        QString output2;
        output2 = "\nMinimum cost = "+QString::number(sum);
        ui->EdgeResult->setText(output2);

        return;
    }
    if(ui->PrimButton->isChecked()){
        for(int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                if(w[i][j] == 0)
                    w[i][j] = INT_MAX;
            }
        }
        Prim(w);
        return;
    }

}


