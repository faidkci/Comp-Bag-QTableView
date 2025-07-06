/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabComp;
    QVBoxLayout *vLayoutComp;
    QHBoxLayout *hFilesComp;
    QLineEdit *compFile1;
    QPushButton *compLoad1;
    QLineEdit *compFile2;
    QPushButton *compLoad2;
    QHBoxLayout *hActionsComp;
    QPushButton *compCombine;
    QPushButton *compSortAsc;
    QPushButton *compSortDesc;
    QLineEdit *compSearch;
    QPushButton *compSearchBtn;
    QTableView *compTableView;
    QWidget *tabBag;
    QVBoxLayout *vLayoutBag;
    QHBoxLayout *hFilesBag;
    QLineEdit *bagFile1;
    QPushButton *bagLoad1;
    QLineEdit *bagFile2;
    QPushButton *bagLoad2;
    QHBoxLayout *hActionsBag;
    QPushButton *bagCombine;
    QPushButton *bagSort;
    QLineEdit *bagSearch;
    QPushButton *bagSearchBtn;
    QTableView *bagTableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(623, 422);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabComp = new QWidget();
        tabComp->setObjectName("tabComp");
        vLayoutComp = new QVBoxLayout(tabComp);
        vLayoutComp->setObjectName("vLayoutComp");
        hFilesComp = new QHBoxLayout();
        hFilesComp->setObjectName("hFilesComp");
        compFile1 = new QLineEdit(tabComp);
        compFile1->setObjectName("compFile1");

        hFilesComp->addWidget(compFile1);

        compLoad1 = new QPushButton(tabComp);
        compLoad1->setObjectName("compLoad1");

        hFilesComp->addWidget(compLoad1);

        compFile2 = new QLineEdit(tabComp);
        compFile2->setObjectName("compFile2");

        hFilesComp->addWidget(compFile2);

        compLoad2 = new QPushButton(tabComp);
        compLoad2->setObjectName("compLoad2");

        hFilesComp->addWidget(compLoad2);


        vLayoutComp->addLayout(hFilesComp);

        hActionsComp = new QHBoxLayout();
        hActionsComp->setObjectName("hActionsComp");
        compCombine = new QPushButton(tabComp);
        compCombine->setObjectName("compCombine");

        hActionsComp->addWidget(compCombine);

        compSortAsc = new QPushButton(tabComp);
        compSortAsc->setObjectName("compSortAsc");

        hActionsComp->addWidget(compSortAsc);

        compSortDesc = new QPushButton(tabComp);
        compSortDesc->setObjectName("compSortDesc");

        hActionsComp->addWidget(compSortDesc);

        compSearch = new QLineEdit(tabComp);
        compSearch->setObjectName("compSearch");

        hActionsComp->addWidget(compSearch);

        compSearchBtn = new QPushButton(tabComp);
        compSearchBtn->setObjectName("compSearchBtn");

        hActionsComp->addWidget(compSearchBtn);


        vLayoutComp->addLayout(hActionsComp);

        compTableView = new QTableView(tabComp);
        compTableView->setObjectName("compTableView");

        vLayoutComp->addWidget(compTableView);

        tabWidget->addTab(tabComp, QString());
        tabBag = new QWidget();
        tabBag->setObjectName("tabBag");
        vLayoutBag = new QVBoxLayout(tabBag);
        vLayoutBag->setObjectName("vLayoutBag");
        hFilesBag = new QHBoxLayout();
        hFilesBag->setObjectName("hFilesBag");
        bagFile1 = new QLineEdit(tabBag);
        bagFile1->setObjectName("bagFile1");

        hFilesBag->addWidget(bagFile1);

        bagLoad1 = new QPushButton(tabBag);
        bagLoad1->setObjectName("bagLoad1");

        hFilesBag->addWidget(bagLoad1);

        bagFile2 = new QLineEdit(tabBag);
        bagFile2->setObjectName("bagFile2");

        hFilesBag->addWidget(bagFile2);

        bagLoad2 = new QPushButton(tabBag);
        bagLoad2->setObjectName("bagLoad2");

        hFilesBag->addWidget(bagLoad2);


        vLayoutBag->addLayout(hFilesBag);

        hActionsBag = new QHBoxLayout();
        hActionsBag->setObjectName("hActionsBag");
        bagCombine = new QPushButton(tabBag);
        bagCombine->setObjectName("bagCombine");

        hActionsBag->addWidget(bagCombine);

        bagSort = new QPushButton(tabBag);
        bagSort->setObjectName("bagSort");

        hActionsBag->addWidget(bagSort);

        bagSearch = new QLineEdit(tabBag);
        bagSearch->setObjectName("bagSearch");

        hActionsBag->addWidget(bagSearch);

        bagSearchBtn = new QPushButton(tabBag);
        bagSearchBtn->setObjectName("bagSearchBtn");

        hActionsBag->addWidget(bagSearchBtn);


        vLayoutBag->addLayout(hActionsBag);

        bagTableView = new QTableView(tabBag);
        bagTableView->setObjectName("bagTableView");

        vLayoutBag->addWidget(bagTableView);

        tabWidget->addTab(tabBag, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 623, 36));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Comp/Bag Manager", nullptr));
        compLoad1->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 Comp1", nullptr));
        compLoad2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 Comp2", nullptr));
        compCombine->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\264\320\270\320\275\320\270\321\202\321\214", nullptr));
        compSortAsc->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202.(\320\262\320\276\320\267\321\200.)", nullptr));
        compSortDesc->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202.(\321\203\320\261.)", nullptr));
        compSearchBtn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabComp), QCoreApplication::translate("MainWindow", "Comp", nullptr));
        bagLoad1->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 Bag1", nullptr));
        bagLoad2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 Bag2", nullptr));
        bagCombine->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\264\320\270\320\275\320\270\321\202\321\214", nullptr));
        bagSort->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202(\320\272\320\260\321\202\320\265\320\263\320\276\321\200+\320\275\320\260\320\267\320\262)", nullptr));
        bagSearchBtn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabBag), QCoreApplication::translate("MainWindow", "Bag", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
