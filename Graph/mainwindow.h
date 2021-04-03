#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <sstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <qvector>
#include <time.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_CreateButton_clicked();

    void BFS(int s);

    void DFS(int v);

    int getParent(int parent[], int node);
    int unionParent(int parent[], int x, int y);
    int findParent(int parent[], int x, int y);

    bool ValidEdge(int u, int v, QVector<bool> InsertMST);
    void Prim(int w[][6]);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
