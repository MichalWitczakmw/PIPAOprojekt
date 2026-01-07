/********************************************************************************
** Form generated from reading UI file 'Sudoku.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKU_H
#define UI_SUDOKU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "Board.h"

QT_BEGIN_NAMESPACE

class Ui_Sudoku
{
public:
    QAction *actionFacil;
    QAction *actionMedio;
    QAction *actionDificil;
    QAction *actionNovo;
    QAction *actionSair;
    QAction *actionSobre;
    QAction *actionLimpar;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    Board *board;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuModo;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Sudoku)
    {
        if (Sudoku->objectName().isEmpty())
            Sudoku->setObjectName("Sudoku");
        Sudoku->resize(400, 300);
        actionFacil = new QAction(Sudoku);
        actionFacil->setObjectName("actionFacil");
        actionFacil->setCheckable(true);
        actionFacil->setChecked(true);
        actionMedio = new QAction(Sudoku);
        actionMedio->setObjectName("actionMedio");
        actionMedio->setCheckable(true);
        actionDificil = new QAction(Sudoku);
        actionDificil->setObjectName("actionDificil");
        actionDificil->setCheckable(true);
        actionNovo = new QAction(Sudoku);
        actionNovo->setObjectName("actionNovo");
        actionSair = new QAction(Sudoku);
        actionSair->setObjectName("actionSair");
        actionSobre = new QAction(Sudoku);
        actionSobre->setObjectName("actionSobre");
        actionLimpar = new QAction(Sudoku);
        actionLimpar->setObjectName("actionLimpar");
        centralWidget = new QWidget(Sudoku);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        board = new Board(centralWidget);
        board->setObjectName("board");

        horizontalLayout->addWidget(board);

        Sudoku->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Sudoku);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName("menuArquivo");
        menuModo = new QMenu(menuBar);
        menuModo->setObjectName("menuModo");
        Sudoku->setMenuBar(menuBar);
        statusBar = new QStatusBar(Sudoku);
        statusBar->setObjectName("statusBar");
        Sudoku->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuModo->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionLimpar);
        menuArquivo->addAction(actionSair);
        menuModo->addAction(actionFacil);
        menuModo->addAction(actionMedio);
        menuModo->addAction(actionDificil);

        retranslateUi(Sudoku);

        QMetaObject::connectSlotsByName(Sudoku);
    } // setupUi

    void retranslateUi(QMainWindow *Sudoku)
    {
        Sudoku->setWindowTitle(QCoreApplication::translate("Sudoku", "Sudoku", nullptr));
        actionFacil->setText(QCoreApplication::translate("Sudoku", "Easy", nullptr));
        actionMedio->setText(QCoreApplication::translate("Sudoku", "Medium", nullptr));
        actionDificil->setText(QCoreApplication::translate("Sudoku", "Difficult", nullptr));
        actionNovo->setText(QCoreApplication::translate("Sudoku", "New", nullptr));
        actionSair->setText(QCoreApplication::translate("Sudoku", "Exit", nullptr));
        actionSobre->setText(QCoreApplication::translate("Sudoku", "On", nullptr));
        actionLimpar->setText(QCoreApplication::translate("Sudoku", "Clean", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("Sudoku", "File", nullptr));
        menuModo->setTitle(QCoreApplication::translate("Sudoku", "Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sudoku: public Ui_Sudoku {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKU_H
