/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLineEdit *I;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QScrollArea *Insertionbox;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *Mergebox;
    QWidget *scrollAreaWidgetContents_2;
    QScrollArea *Selectionbox;
    QWidget *scrollAreaWidgetContents_3;
    QScrollArea *Heapbox;
    QWidget *scrollAreaWidgetContents_4;
    QScrollArea *Bubblebox;
    QWidget *scrollAreaWidgetContents_5;
    QScrollArea *Shellbox;
    QWidget *scrollAreaWidgetContents_6;
    QScrollArea *Quickbox;
    QWidget *scrollAreaWidgetContents_8;
    QScrollArea *Radixbox;
    QWidget *scrollAreaWidgetContents_9;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_17;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *MinRange;
    QLabel *label_3;
    QLineEdit *MaxRange;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_15;
    QLineEdit *numCount;
    QTextEdit *Timebox;
    QPushButton *Exit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *SelfCheck;
    QRadioButton *RandomCheck;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1191, 802);
        QFont font;
        font.setFamily(QString::fromUtf8("\355\234\264\353\250\274\353\221\245\352\267\274\355\227\244\353\223\234\353\235\274\354\235\270"));
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 30, 131, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        label_2->setFont(font1);
        I = new QLineEdit(centralwidget);
        I->setObjectName(QString::fromUtf8("I"));
        I->setGeometry(QRect(350, 70, 761, 91));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 70, 61, 91));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\353\202\230\353\210\224\352\263\240\353\224\225"));
        font2.setPointSize(8);
        pushButton_2->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 50, 121, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font3.setPointSize(7);
        label_4->setFont(font3);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 71, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\353\202\230\353\210\224\353\260\224\353\245\270\352\263\240\353\224\225"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        label_5->setFont(font4);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 170, 71, 31));
        label_6->setFont(font4);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 200, 121, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font5.setBold(false);
        font5.setWeight(50);
        label_7->setFont(font5);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 340, 121, 31));
        label_8->setFont(font5);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 480, 121, 31));
        label_9->setFont(font5);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 620, 121, 31));
        label_10->setFont(font5);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(440, 620, 121, 31));
        label_11->setFont(font5);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(440, 200, 121, 31));
        label_12->setFont(font5);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(440, 340, 121, 31));
        label_13->setFont(font5);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(440, 480, 121, 31));
        label_14->setFont(font5);
        Insertionbox = new QScrollArea(centralwidget);
        Insertionbox->setObjectName(QString::fromUtf8("Insertionbox"));
        Insertionbox->setGeometry(QRect(20, 230, 401, 87));
        Insertionbox->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 399, 85));
        Insertionbox->setWidget(scrollAreaWidgetContents);
        Mergebox = new QScrollArea(centralwidget);
        Mergebox->setObjectName(QString::fromUtf8("Mergebox"));
        Mergebox->setGeometry(QRect(440, 230, 401, 87));
        Mergebox->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 399, 85));
        Mergebox->setWidget(scrollAreaWidgetContents_2);
        Selectionbox = new QScrollArea(centralwidget);
        Selectionbox->setObjectName(QString::fromUtf8("Selectionbox"));
        Selectionbox->setGeometry(QRect(20, 370, 401, 87));
        Selectionbox->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 399, 85));
        Selectionbox->setWidget(scrollAreaWidgetContents_3);
        Heapbox = new QScrollArea(centralwidget);
        Heapbox->setObjectName(QString::fromUtf8("Heapbox"));
        Heapbox->setGeometry(QRect(440, 370, 401, 87));
        Heapbox->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 399, 85));
        Heapbox->setWidget(scrollAreaWidgetContents_4);
        Bubblebox = new QScrollArea(centralwidget);
        Bubblebox->setObjectName(QString::fromUtf8("Bubblebox"));
        Bubblebox->setGeometry(QRect(20, 510, 401, 87));
        Bubblebox->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 399, 85));
        Bubblebox->setWidget(scrollAreaWidgetContents_5);
        Shellbox = new QScrollArea(centralwidget);
        Shellbox->setObjectName(QString::fromUtf8("Shellbox"));
        Shellbox->setGeometry(QRect(440, 510, 401, 87));
        Shellbox->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 399, 85));
        Shellbox->setWidget(scrollAreaWidgetContents_6);
        Quickbox = new QScrollArea(centralwidget);
        Quickbox->setObjectName(QString::fromUtf8("Quickbox"));
        Quickbox->setGeometry(QRect(20, 650, 401, 87));
        Quickbox->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 399, 85));
        Quickbox->setWidget(scrollAreaWidgetContents_8);
        Radixbox = new QScrollArea(centralwidget);
        Radixbox->setObjectName(QString::fromUtf8("Radixbox"));
        Radixbox->setGeometry(QRect(440, 650, 401, 87));
        Radixbox->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 399, 85));
        Radixbox->setWidget(scrollAreaWidgetContents_9);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 60, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\355\234\264\353\250\274\352\263\240\353\224\225"));
        label->setFont(font6);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 70, 71, 91));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\355\234\264\353\250\274\352\263\240\353\224\225"));
        font7.setPointSize(10);
        pushButton->setFont(font7);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(870, 180, 71, 31));
        label_17->setFont(font4);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 79, 221, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MinRange = new QLineEdit(layoutWidget);
        MinRange->setObjectName(QString::fromUtf8("MinRange"));

        horizontalLayout->addWidget(MinRange);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\355\234\264\353\250\274\352\263\240\353\224\225"));
        font8.setPointSize(16);
        label_3->setFont(font8);

        horizontalLayout->addWidget(label_3);

        MaxRange = new QLineEdit(layoutWidget);
        MaxRange->setObjectName(QString::fromUtf8("MaxRange"));

        horizontalLayout->addWidget(MaxRange);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 123, 221, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font6);

        horizontalLayout_3->addWidget(label_15);

        numCount = new QLineEdit(layoutWidget1);
        numCount->setObjectName(QString::fromUtf8("numCount"));

        horizontalLayout_3->addWidget(numCount);

        Timebox = new QTextEdit(centralwidget);
        Timebox->setObjectName(QString::fromUtf8("Timebox"));
        Timebox->setGeometry(QRect(870, 230, 301, 451));
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(890, 700, 261, 51));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 199, 22));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        SelfCheck = new QRadioButton(widget);
        SelfCheck->setObjectName(QString::fromUtf8("SelfCheck"));
        SelfCheck->setFont(font6);

        horizontalLayout_4->addWidget(SelfCheck);

        RandomCheck = new QRadioButton(widget);
        RandomCheck->setObjectName(QString::fromUtf8("RandomCheck"));
        RandomCheck->setFont(font6);

        horizontalLayout_4->addWidget(RandomCheck);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1191, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(SelfCheck, SIGNAL(clicked(bool)), MinRange, SLOT(setDisabled(bool)));
        QObject::connect(SelfCheck, SIGNAL(clicked(bool)), MaxRange, SLOT(setDisabled(bool)));
        QObject::connect(SelfCheck, SIGNAL(clicked(bool)), numCount, SLOT(setDisabled(bool)));
        QObject::connect(SelfCheck, SIGNAL(clicked(bool)), pushButton, SLOT(setDisabled(bool)));
        QObject::connect(RandomCheck, SIGNAL(clicked(bool)), MinRange, SLOT(setEnabled(bool)));
        QObject::connect(RandomCheck, SIGNAL(clicked(bool)), MaxRange, SLOT(setEnabled(bool)));
        QObject::connect(RandomCheck, SIGNAL(clicked(bool)), numCount, SLOT(setEnabled(bool)));
        QObject::connect(RandomCheck, SIGNAL(clicked(bool)), pushButton, SLOT(setEnabled(bool)));
        QObject::connect(RandomCheck, SIGNAL(clicked(bool)), I, SLOT(setDisabled(bool)));
        QObject::connect(pushButton, SIGNAL(clicked(bool)), I, SLOT(setEnabled(bool)));
        QObject::connect(Exit, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(SelfCheck, SIGNAL(clicked(bool)), I, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\354\240\225\353\240\254\353\215\260\354\235\264\355\204\260 \354\236\205\353\240\245</p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\355\231\225\354\235\270", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p>(\342\200\273 \353\235\204\354\226\264\354\223\260\352\270\260\353\241\234 \352\265\254\353\266\204)</p></body></html>", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\354\210\230\354\271\230\354\236\205\353\240\245</p></body></html>", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\354\240\225\353\240\254\352\262\260\352\263\274</p></body></html>", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Insertion Sort</p></body></html>", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Selection Sort</p></body></html>", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Bubble Sort</p></body></html>", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Quick Sort</p></body></html>", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Radix Sort</p></body></html>", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Merge Sort</p></body></html>", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Heap Sort</p></body></html>", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Shell Sort</p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "\353\262\224\354\234\204\354\204\244\354\240\225", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\354\203\235\354\204\261", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\354\210\230\355\226\211\354\213\234\352\260\204</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "-", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\352\260\234\354\210\230\354\204\244\354\240\225", nullptr));
        Exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        SelfCheck->setText(QApplication::translate("MainWindow", "\354\247\201\354\240\221 \354\236\205\353\240\245", nullptr));
        RandomCheck->setText(QApplication::translate("MainWindow", "\353\236\234\353\215\244 \354\236\205\353\240\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
