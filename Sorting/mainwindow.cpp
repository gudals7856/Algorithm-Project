#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <qdebug.h>
#include <time.h>

MainWindow::MainWindow(QWidget *parent)  // 메인 윈도우 창 실행
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

using namespace std;
clock_t start, finish, used_time = 0;       // 실행시간 측정을 위한 전역변수 선언
int listCount;                              // 정렬개수 전역변수 선언

void MainWindow::InsertionSort(int array[], int count)      // 삽입정렬 함수
{
    // 정렬된 수들을 각각 실행창에 띄우기위한 설정

    QVBoxLayout* InsertionLay = new QVBoxLayout(this);
    // QVBoxLayout을 통해 lay 생성. QVBoxLayout는 레이아웃 객체를를 세로로 표현하는데 사용
    QLabel* InsertionLabel = new QLabel(this);
    // QLable을 통해 문자열 레이블 생성
    InsertionLay->addWidget(InsertionLabel);
    // 레이블을 생성해놓은 QVBoxLayout에 삽입
    ui->scrollAreaWidgetContents->setLayout(InsertionLay);
    // 정렬결과를 띄울 공간 지정. 만약 결과창의 크기보다 수가 많아지면 스크롤을 생성
    InsertionLabel->setWordWrap(true);
    // Insertionbox창의 가로끝까지 문자가 입력되면 다음줄로 내려갈수 있도록 숫자마다 Word로 지정

    // 모든 정렬함수에 똑같이 적용시켜준다.


    int i, j;
    int key;

    for (i = 1; i < count; i++) {
        key = array[i];

        for (j = i - 1; j >= 0; j--) {
            if (array[j] > key) {
                array[j + 1] = array[j];
                array[j] = key;
            }
            else
                break;
        }
    }

    // 삽입정렬 결과 출력.숫자를 레이블로 바꾸어 출력시킴.
    // 출력 또한 모든 정렬함수에서 똑같이 적용.
    for(int i=0; i<listCount; i++){
        InsertionLabel->setText(InsertionLabel->text()+QString::number(array[i])+ " ");
    }
    return;
}

void MainWindow::SelectionSort(int arr[], int count)    //선택정렬 함수
{
    QVBoxLayout* selectionLay = new QVBoxLayout(this);
    QLabel* selectionLabel = new QLabel(this);
    selectionLay->addWidget(selectionLabel);
    ui->scrollAreaWidgetContents_3->setLayout(selectionLay);
    selectionLabel->setWordWrap(true);

    int i, j;
    int min, tmp;
    for (i = 0; i < count - 1; i++) {
        min = i;
        for (j = i + 1; j < count; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }

    for(int i=0; i<listCount; i++){
        selectionLabel->setText(selectionLabel->text()+QString::number(arr[i])+ " ");
    }
    return;
}

void MainWindow::BubbleSort(int array[], int count)     //버블정렬 함수
{
    QVBoxLayout* BubbleLay = new QVBoxLayout(this);
    QLabel* BubbleLabel = new QLabel(this);
    BubbleLay->addWidget(BubbleLabel);
    ui->scrollAreaWidgetContents_5->setLayout(BubbleLay);
    BubbleLabel->setWordWrap(true);

    int tmp;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }

    for(int i=0; i<listCount; i++){
        BubbleLabel->setText(BubbleLabel->text()+QString::number(array[i])+ " ");
    }
    return;
}

int MainWindow::Partition(int arr[], int left, int right)       // 퀵정렬에서 피봇과 low, high가 만나는 부분을 교환시켜주는 함수
{
    int pivot = arr[left];
    int low = left + 1;
    int high = right;

        while (low <= high)
        {
            while (pivot >= arr[low] && low <= right)
            {
                low++;
            }
            while (pivot <= arr[high] && high >= (left + 1))
            {
                high--;
            }
            if (low <= high)
            {
                int temp = arr[low];
                arr[low] = arr[high];
                arr[high] = temp;
            }
        }
    int temp = arr[left];
    arr[left] = arr[high];
    arr[high] = temp;

    return high;

}
void MainWindow::QuickSort(int arr[], int left, int right)      // 퀵정렬 함수
{
    QVBoxLayout* QuickLay = new QVBoxLayout(this);
    QLabel* QuickLabel = new QLabel(this);
    QuickLay->addWidget(QuickLabel);
    ui->scrollAreaWidgetContents_8->setLayout(QuickLay);
    QuickLabel->setWordWrap(true);

    if (left <= right)
    {
        int pivot = Partition(arr, left, right);
        QuickSort(arr, left, pivot - 1);
        QuickSort(arr, pivot + 1, right);
    }

    for(int i=0; i<listCount; i++){
        QuickLabel->setText(QuickLabel->text()+QString::number(arr[i])+ " ");
    }
    return;
}

void MainWindow::merge(int array[], int p, int mid, int r)      //병합 정렬에서 나누어진 배열을 크기순으로 다시 병합시키는 함수
{
    int i = p, j = mid + 1, k = p;
        int* tmpArray = new int[r + 1];

    while (i <= mid && j <= r) {
        if (array[i] <= array[j])
            tmpArray[k++] = array[i++];
        else
            tmpArray[k++] = array[j++];
    }
    while (i <= mid)
        tmpArray[k++] = array[i++];
    while (j <= r)
        tmpArray[k++] = array[j++];
    for (int a = p; a <= r; a++)
        array[a] = tmpArray[a];
}
void MainWindow::MergeSort(int array[], int p, int r) {       //병합정렬 함수
    QVBoxLayout* MergeLay = new QVBoxLayout(this);
    QLabel* MergeLabel = new QLabel(this);
    MergeLay->addWidget(MergeLabel);
    ui->scrollAreaWidgetContents_2->setLayout(MergeLay);
    MergeLabel->setWordWrap(true);

    int mid;
    if (p < r) {
        mid = (p + r) / 2;
        MergeSort(array, p, mid);
        MergeSort(array, mid + 1, r);
        merge(array, p, mid, r);
    }

    for(int i=0; i<listCount; i++){
        MergeLabel->setText(MergeLabel->text()+QString::number(array[i])+ " ");
    }
    return;
}


void MainWindow::heapify(int array[], int n){               // 힙 정렬을 위해 만약 부모노드가 자식노드보다 작을 경우 서로 교환하는 함수
    for (int i = 1; i < n; i++)
    {
        int c = i;
        do {
            int root = (c - 1) / 2;
            if (array[root] < array[c])
            {
                swap(array[root], array[c]);
            }
            c = root;
        } while (c != 0);
    }
}
void MainWindow::HeapSort(int array[], int n){              // 힙 정렬 함수

    QVBoxLayout* HeapLay = new QVBoxLayout(this);
    QLabel* HeapLabel = new QLabel(this);
    HeapLay->addWidget(HeapLabel);
    ui->scrollAreaWidgetContents_4->setLayout(HeapLay);
    HeapLabel->setWordWrap(true);

    heapify(array, n);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(array[0], array[i]);
        int root = 0;
        int c = 1;
        do
        {
            c = 2 * root + 1;

            if (c < i - 1 && array[c] < array[c + 1])
            {
                c++;
            }
            if (c < i&&array[root] < array[c]) {
                swap(array[root], array[c]);
            }
            root = c;

        } while (c < i);
    }

    for(int i=0; i<listCount; i++){
        HeapLabel->setText(HeapLabel->text()+QString::number(array[i])+ " ");
    }
    return;

}


void MainWindow::intervalSort(int a[], int begin, int end, int interval)
{
    for (int i = begin + interval ;i <= end; i += interval)
    {
        int j, tmp = a[i];
        for (j = i - interval; j >= begin && tmp < a[j]; j -= interval)
        {
            a[j + interval] = a[j];
        }
        a[j + interval] = tmp;
    }
}
void MainWindow::ShellSort(int a[], int size)               //쉘 정렬 함수
{
    QVBoxLayout* ShellLay = new QVBoxLayout(this);
    QLabel* ShellLabel = new QLabel(this);
    ShellLay->addWidget(ShellLabel);
    ui->scrollAreaWidgetContents_6->setLayout(ShellLay);
    ShellLabel->setWordWrap(true);

    int interval = size / 2;

    while (interval >= 1)
    {
        for (int i = 0; i < interval; i++)
        {
            intervalSort(a, i, size - 1, interval);
        }
        interval /= 2;
    }

    for(int i=0; i<listCount; i++){
        ShellLabel->setText(ShellLabel->text()+QString::number(a[i])+ " ");
    }
    return;
}

void MainWindow::RadixSort(int array[], int count)          // 기수 정렬 함수
{
    QVBoxLayout* RadixLay = new QVBoxLayout(this);
    QLabel* RadixLabel = new QLabel(this);
    RadixLay->addWidget(RadixLabel);
    ui->scrollAreaWidgetContents_9->setLayout(RadixLay);
    RadixLabel->setWordWrap(true);

    int i, b[100], m = 0, exp = 1;

    for (i = 0; i < count; i++)
    {
        if (array[i] > m)
            m = array[i];
    }
    while (m / exp > 0)
    {
        int bucket[10] = { 0 };

        for (i = 0; i < count; i++)
            bucket[array[i] / exp % 10]++;

        for (i = 1; i < 10; i++)
            bucket[i] += bucket[i - 1];

        for (i = count - 1; i >= 0; i--)
            b[--bucket[array[i] / exp % 10]] = array[i];

        for (i = 0; i < count; i++)
            array[i] = b[i];

        exp *= 10;
    }

    for(int i=0; i<listCount; i++){
        RadixLabel->setText(RadixLabel->text()+QString::number(array[i])+ " ");
    }
    return;
}

void MainWindow::CalcTime(void)  // 실행시간 측정함수
{
    // 전역변수로 지정해놓은 변수 사용하여 실행시간 측정
    used_time = finish - start;
    // finish = 정렬함수가 종료되었을 때의 시간
    // start = 정렬함수가 시작되었을 때의 시간
    // used_time = 정렬함수를 실행할때 걸리는 총 시간

    QString output;     // 실행시간을 표현해주기위한 String 변수 설정

    output=QString::number((double)used_time / CLOCKS_PER_SEC)+"sec";
    //숫자로 표현되어있는 used_time을 String형으로 바꾸어 output변수에 저장

    ui->Timebox->append(output);  //실행시간 출력
    return;
}

void MainWindow::ReturnArray(int original[], int copy[], int count)  // 정렬된 배열 되돌리기 함수
{
    for (int j = 0; j < count; j++) {
        original[j] = copy[j];
    }
}


void MainWindow::on_pushButton_2_clicked()      // 정렬데이터 입력창 옆에있는 정렬버튼을 클릭하였을 때 실행되는 과정
{

    QString str=ui->I->text();                  // 정렬데이터 입력창(ui->I)에 있는 텍스트를 str에 저장
    QStringList strList = str.split(" ");       // str을 띄어쓰기입력 기준으로 나누어 strList에 저장

    listCount = strList.length();               // listCount = strList에 저장된 문자열의 개수

    int* array = new int[listCount];            // listCount값 만큼의 array배열 동적할당
    for(int i=0; i<listCount; i++){
        array[i] = strList[i].toInt();          // strList에 있는 문자열을 int형으로 바꾸어 array에 각각 저장
    }

    int* copyArray = new int[listCount];        // 입력된 array를 복사시켜주기 위한 배열 생성
    for (int j = 0; j < listCount; j++) {
            copyArray[j] = array[j];
    }

    start = clock();                            // 정렬을 시작하기 직전의 시간을 start전역변수에 저장
    InsertionSort(array, listCount);            // 삽입정렬 실행
    finish = clock();                           // 정렬이 끝난 직후의 시간을 finish전역변수에 저장
    ui->Timebox->append("\n삽입정렬 수행시간 : ");
    CalcTime();                                 // 실행시간 출력


    //위의 삽입정렬 실행과정 및 실행시간출력 반복

    ReturnArray(array, copyArray, listCount);   // 정렬된 array를 다시 처음 array로 바꾸어줌
    start = clock();
    SelectionSort(array, listCount);
    finish = clock();
    ui->Timebox->append("\n선택정렬 수행시간 : ");
    CalcTime();

    ReturnArray(array, copyArray, listCount);
    start = clock();
    BubbleSort(array, listCount);
    finish = clock();
    ui->Timebox->append("\n버블정렬 수행시간 : ");
    CalcTime();

    ReturnArray(array, copyArray, listCount);
    start = clock();
    QuickSort(array, 0, listCount-1);
    finish = clock();
    ui->Timebox->append("\n퀵정렬 수행시간 : ");
    CalcTime();

    ReturnArray(array, copyArray, listCount);
    start = clock();
    MergeSort(array, 0, listCount-1);
    finish = clock();
    ui->Timebox->append("\n병합정렬 수행시간 : ");
    CalcTime();

    ReturnArray(array, copyArray, listCount);
    start = clock();
    HeapSort(array, listCount);
    finish = clock();
    ui->Timebox->append("\n힙정렬 수행시간 : ");
    CalcTime();

    ReturnArray(array, copyArray, listCount);
    start = clock();
    ShellSort(array, listCount);
    finish = clock();
    ui->Timebox->append("\n쉘정렬 수행시간 : ");
    CalcTime();

    ReturnArray(array, copyArray, listCount);
    start = clock();
    RadixSort(array, listCount);
    finish = clock();
    ui->Timebox->append("\n기수정렬 수행시간 : ");
    CalcTime();
}

void MainWindow::on_pushButton_clicked() // 생성 버튼을 클릭했을때 데이터입력란에 랜덤상수 자동으로 생성
{
    QString minStr=ui->MinRange->text();              // 랜덤상수 생성범위중 최소값
    QString maxStr=ui->MaxRange->text();              // 랜덤상수 생성범위중 최대값
    QString countStr=ui->numCount->text();            // 랜덤상수 생성 개수
    //문자열을 int형으로 바꾸어줌
    int minNum = minStr.toInt();
    int maxNum = maxStr.toInt();
    int count = countStr.toInt();


    int *array = new int[count];     // 랜덤상수 저장을 위한 배열
    QString output;

    //랜덤상수 생성
    srand((unsigned int)time(NULL));
    for (int i = 0; i < count; i++) {
        array[i]=qrand() % (maxNum - minNum) + minNum;
        output+=QString::number(array[i])+" ";          //문자열이 띄어쓰기를 포함하여 계속 연결되어야하므로 반복문을 통해 문자열을 이어줌
    }
    output.chop(1);             // 마지막 띄어쓰기 삭제
    ui->I->setText(output);     // 생성된 랜덤상수 출력
}

