#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <sstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace  std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void InsertionSort(int array[], int count);

    void SelectionSort(int arr[], int count);

    void BubbleSort(int array[], int count);

    int Partition(int arr[], int left, int right);
    void QuickSort(int arr[], int left, int right);

    void merge(int array[], int p, int mid, int r);
    void MergeSort(int array[], int p, int r);

    void heapify(int array[], int n);
    void HeapSort(int array[], int n);

    void intervalSort(int a[], int begin, int end, int interval);
    void ShellSort(int a[], int size);

    void RadixSort(int array[], int count);

    void CalcTime(void);

    void ReturnArray(int original[], int copy[], int count);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
