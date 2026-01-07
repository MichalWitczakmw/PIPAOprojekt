/********************************************************************************
** Form generated from reading UI file 'Board.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARD_H
#define UI_BOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "Cell.h"

QT_BEGIN_NAMESPACE

class Ui_Board
{
public:
    QGridLayout *gridLayout;
    QGridLayout *box1;
    Cell *cell11;
    Cell *cell12;
    Cell *cell13;
    Cell *cell21;
    Cell *cell22;
    Cell *cell23;
    Cell *cell31;
    Cell *cell32;
    Cell *cell33;
    QGridLayout *box2;
    Cell *cell15;
    Cell *cell24;
    Cell *cell34;
    Cell *cell25;
    Cell *cell35;
    Cell *cell16;
    Cell *cell26;
    Cell *cell36;
    Cell *cell14;
    QGridLayout *box3;
    Cell *cell17;
    Cell *cell18;
    Cell *cell19;
    Cell *cell27;
    Cell *cell28;
    Cell *cell29;
    Cell *cell37;
    Cell *cell38;
    Cell *cell39;
    QGridLayout *box4;
    Cell *cell41;
    Cell *cell42;
    Cell *cell43;
    Cell *cell51;
    Cell *cell52;
    Cell *cell53;
    Cell *cell61;
    Cell *cell62;
    Cell *cell63;
    QGridLayout *box5;
    Cell *cell44;
    Cell *cell45;
    Cell *cell46;
    Cell *cell55;
    Cell *cell56;
    Cell *cell64;
    Cell *cell65;
    Cell *cell66;
    Cell *cell54;
    QGridLayout *box6;
    Cell *cell47;
    Cell *cell48;
    Cell *cell49;
    Cell *cell57;
    Cell *cell58;
    Cell *cell59;
    Cell *cell67;
    Cell *cell68;
    Cell *cell69;
    QGridLayout *box7;
    Cell *cell71;
    Cell *cell72;
    Cell *cell73;
    Cell *cell81;
    Cell *cell82;
    Cell *cell83;
    Cell *cell91;
    Cell *cell92;
    Cell *cell93;
    QGridLayout *box8;
    Cell *cell74;
    Cell *cell75;
    Cell *cell76;
    Cell *cell84;
    Cell *cell85;
    Cell *cell86;
    Cell *cell94;
    Cell *cell95;
    Cell *cell96;
    QGridLayout *box9;
    Cell *cell78;
    Cell *cell79;
    Cell *cell87;
    Cell *cell88;
    Cell *cell89;
    Cell *cell97;
    Cell *cell98;
    Cell *cell99;
    Cell *cell77;

    void setupUi(QWidget *Board)
    {
        if (Board->objectName().isEmpty())
            Board->setObjectName("Board");
        Board->resize(296, 296);
        Board->setStyleSheet(QString::fromUtf8("QSpinBox { border: 0px solid black; }\n"
"Cell[invalid=false]::enabled { color: black; }\n"
"Cell[invalid=true]::enabled { color: red; }"));
        gridLayout = new QGridLayout(Board);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(10, 10, 10, 10);
        box1 = new QGridLayout();
        box1->setSpacing(0);
        box1->setObjectName("box1");
        cell11 = new Cell(Board);
        cell11->setObjectName("cell11");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cell11->sizePolicy().hasHeightForWidth());
        cell11->setSizePolicy(sizePolicy);
        cell11->setMinimumSize(QSize(30, 30));
        cell11->setMaximumSize(QSize(30, 30));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        cell11->setFont(font);
        cell11->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px;"));
        cell11->setAlignment(Qt::AlignCenter);
        cell11->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell11->setMinimum(0);
        cell11->setMaximum(9);
        cell11->setValue(0);
        cell11->setProperty("invalid", QVariant(true));

        box1->addWidget(cell11, 0, 0, 1, 1);

        cell12 = new Cell(Board);
        cell12->setObjectName("cell12");
        sizePolicy.setHeightForWidth(cell12->sizePolicy().hasHeightForWidth());
        cell12->setSizePolicy(sizePolicy);
        cell12->setMinimumSize(QSize(30, 30));
        cell12->setMaximumSize(QSize(30, 30));
        cell12->setFont(font);
        cell12->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px;"));
        cell12->setAlignment(Qt::AlignCenter);
        cell12->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell12->setMinimum(0);
        cell12->setMaximum(9);
        cell12->setValue(0);
        cell12->setProperty("invalid", QVariant(true));

        box1->addWidget(cell12, 0, 1, 1, 1);

        cell13 = new Cell(Board);
        cell13->setObjectName("cell13");
        sizePolicy.setHeightForWidth(cell13->sizePolicy().hasHeightForWidth());
        cell13->setSizePolicy(sizePolicy);
        cell13->setMinimumSize(QSize(30, 30));
        cell13->setMaximumSize(QSize(30, 30));
        cell13->setFont(font);
        cell13->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-bottom-width: 1px;"));
        cell13->setAlignment(Qt::AlignCenter);
        cell13->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell13->setMinimum(0);
        cell13->setMaximum(9);
        cell13->setProperty("invalid", QVariant(true));

        box1->addWidget(cell13, 0, 2, 1, 1);

        cell21 = new Cell(Board);
        cell21->setObjectName("cell21");
        sizePolicy.setHeightForWidth(cell21->sizePolicy().hasHeightForWidth());
        cell21->setSizePolicy(sizePolicy);
        cell21->setMinimumSize(QSize(30, 30));
        cell21->setMaximumSize(QSize(30, 30));
        cell21->setFont(font);
        cell21->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px; "));
        cell21->setAlignment(Qt::AlignCenter);
        cell21->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell21->setMinimum(0);
        cell21->setMaximum(9);
        cell21->setValue(0);
        cell21->setProperty("invalid", QVariant(true));

        box1->addWidget(cell21, 1, 0, 1, 1);

        cell22 = new Cell(Board);
        cell22->setObjectName("cell22");
        sizePolicy.setHeightForWidth(cell22->sizePolicy().hasHeightForWidth());
        cell22->setSizePolicy(sizePolicy);
        cell22->setMinimumSize(QSize(30, 30));
        cell22->setMaximumSize(QSize(30, 30));
        cell22->setFont(font);
        cell22->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width:1px;"));
        cell22->setAlignment(Qt::AlignCenter);
        cell22->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell22->setMinimum(0);
        cell22->setMaximum(9);
        cell22->setProperty("invalid", QVariant(true));

        box1->addWidget(cell22, 1, 1, 1, 1);

        cell23 = new Cell(Board);
        cell23->setObjectName("cell23");
        sizePolicy.setHeightForWidth(cell23->sizePolicy().hasHeightForWidth());
        cell23->setSizePolicy(sizePolicy);
        cell23->setMinimumSize(QSize(30, 30));
        cell23->setMaximumSize(QSize(30, 30));
        cell23->setFont(font);
        cell23->setStyleSheet(QString::fromUtf8("border-bottom-width: 1px;"));
        cell23->setAlignment(Qt::AlignCenter);
        cell23->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell23->setMinimum(0);
        cell23->setMaximum(9);
        cell23->setValue(0);
        cell23->setProperty("invalid", QVariant(true));

        box1->addWidget(cell23, 1, 2, 1, 1);

        cell31 = new Cell(Board);
        cell31->setObjectName("cell31");
        sizePolicy.setHeightForWidth(cell31->sizePolicy().hasHeightForWidth());
        cell31->setSizePolicy(sizePolicy);
        cell31->setMinimumSize(QSize(30, 30));
        cell31->setMaximumSize(QSize(30, 30));
        cell31->setFont(font);
        cell31->setStyleSheet(QString::fromUtf8("border-right-width: 1px;border-left-width: 2px;"));
        cell31->setAlignment(Qt::AlignCenter);
        cell31->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell31->setMinimum(0);
        cell31->setMaximum(9);
        cell31->setValue(0);
        cell31->setProperty("invalid", QVariant(true));

        box1->addWidget(cell31, 2, 0, 1, 1);

        cell32 = new Cell(Board);
        cell32->setObjectName("cell32");
        sizePolicy.setHeightForWidth(cell32->sizePolicy().hasHeightForWidth());
        cell32->setSizePolicy(sizePolicy);
        cell32->setMinimumSize(QSize(30, 30));
        cell32->setMaximumSize(QSize(30, 30));
        cell32->setFont(font);
        cell32->setStyleSheet(QString::fromUtf8("border-right-width: 1px;"));
        cell32->setAlignment(Qt::AlignCenter);
        cell32->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell32->setMinimum(0);
        cell32->setMaximum(9);
        cell32->setValue(0);
        cell32->setProperty("invalid", QVariant(true));

        box1->addWidget(cell32, 2, 1, 1, 1);

        cell33 = new Cell(Board);
        cell33->setObjectName("cell33");
        sizePolicy.setHeightForWidth(cell33->sizePolicy().hasHeightForWidth());
        cell33->setSizePolicy(sizePolicy);
        cell33->setMinimumSize(QSize(30, 30));
        cell33->setMaximumSize(QSize(30, 30));
        cell33->setFont(font);
        cell33->setAlignment(Qt::AlignCenter);
        cell33->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell33->setMinimum(0);
        cell33->setMaximum(9);
        cell33->setValue(0);
        cell33->setProperty("invalid", QVariant(true));

        box1->addWidget(cell33, 2, 2, 1, 1);


        gridLayout->addLayout(box1, 0, 0, 1, 1);

        box2 = new QGridLayout();
        box2->setSpacing(0);
        box2->setObjectName("box2");
        cell15 = new Cell(Board);
        cell15->setObjectName("cell15");
        sizePolicy.setHeightForWidth(cell15->sizePolicy().hasHeightForWidth());
        cell15->setSizePolicy(sizePolicy);
        cell15->setMinimumSize(QSize(30, 30));
        cell15->setMaximumSize(QSize(30, 30));
        cell15->setFont(font);
        cell15->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px;"));
        cell15->setAlignment(Qt::AlignCenter);
        cell15->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell15->setMinimum(0);
        cell15->setMaximum(9);
        cell15->setValue(0);
        cell15->setProperty("invalid", QVariant(true));

        box2->addWidget(cell15, 0, 1, 1, 1);

        cell24 = new Cell(Board);
        cell24->setObjectName("cell24");
        sizePolicy.setHeightForWidth(cell24->sizePolicy().hasHeightForWidth());
        cell24->setSizePolicy(sizePolicy);
        cell24->setMinimumSize(QSize(30, 30));
        cell24->setMaximumSize(QSize(30, 30));
        cell24->setFont(font);
        cell24->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px; "));
        cell24->setAlignment(Qt::AlignCenter);
        cell24->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell24->setMinimum(0);
        cell24->setMaximum(9);
        cell24->setValue(0);
        cell24->setProperty("invalid", QVariant(true));

        box2->addWidget(cell24, 1, 0, 1, 1);

        cell34 = new Cell(Board);
        cell34->setObjectName("cell34");
        sizePolicy.setHeightForWidth(cell34->sizePolicy().hasHeightForWidth());
        cell34->setSizePolicy(sizePolicy);
        cell34->setMinimumSize(QSize(30, 30));
        cell34->setMaximumSize(QSize(30, 30));
        cell34->setFont(font);
        cell34->setStyleSheet(QString::fromUtf8("border-right-width: 1px;border-left-width: 2px;"));
        cell34->setAlignment(Qt::AlignCenter);
        cell34->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell34->setMinimum(0);
        cell34->setMaximum(9);
        cell34->setValue(0);
        cell34->setProperty("invalid", QVariant(true));

        box2->addWidget(cell34, 2, 0, 1, 1);

        cell25 = new Cell(Board);
        cell25->setObjectName("cell25");
        sizePolicy.setHeightForWidth(cell25->sizePolicy().hasHeightForWidth());
        cell25->setSizePolicy(sizePolicy);
        cell25->setMinimumSize(QSize(30, 30));
        cell25->setMaximumSize(QSize(30, 30));
        cell25->setFont(font);
        cell25->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width:1px;"));
        cell25->setAlignment(Qt::AlignCenter);
        cell25->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell25->setMinimum(0);
        cell25->setMaximum(9);
        cell25->setValue(0);
        cell25->setProperty("invalid", QVariant(true));

        box2->addWidget(cell25, 1, 1, 1, 1);

        cell35 = new Cell(Board);
        cell35->setObjectName("cell35");
        sizePolicy.setHeightForWidth(cell35->sizePolicy().hasHeightForWidth());
        cell35->setSizePolicy(sizePolicy);
        cell35->setMinimumSize(QSize(30, 30));
        cell35->setMaximumSize(QSize(30, 30));
        cell35->setFont(font);
        cell35->setStyleSheet(QString::fromUtf8("border-right-width: 1px;"));
        cell35->setAlignment(Qt::AlignCenter);
        cell35->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell35->setMinimum(0);
        cell35->setMaximum(9);
        cell35->setValue(0);
        cell35->setProperty("invalid", QVariant(true));

        box2->addWidget(cell35, 2, 1, 1, 1);

        cell16 = new Cell(Board);
        cell16->setObjectName("cell16");
        sizePolicy.setHeightForWidth(cell16->sizePolicy().hasHeightForWidth());
        cell16->setSizePolicy(sizePolicy);
        cell16->setMinimumSize(QSize(30, 30));
        cell16->setMaximumSize(QSize(30, 30));
        cell16->setFont(font);
        cell16->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-bottom-width: 1px;"));
        cell16->setAlignment(Qt::AlignCenter);
        cell16->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell16->setMinimum(0);
        cell16->setMaximum(9);
        cell16->setValue(0);
        cell16->setProperty("invalid", QVariant(true));

        box2->addWidget(cell16, 0, 2, 1, 1);

        cell26 = new Cell(Board);
        cell26->setObjectName("cell26");
        sizePolicy.setHeightForWidth(cell26->sizePolicy().hasHeightForWidth());
        cell26->setSizePolicy(sizePolicy);
        cell26->setMinimumSize(QSize(30, 30));
        cell26->setMaximumSize(QSize(30, 30));
        cell26->setFont(font);
        cell26->setStyleSheet(QString::fromUtf8("border-bottom-width: 1px;"));
        cell26->setAlignment(Qt::AlignCenter);
        cell26->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell26->setMinimum(0);
        cell26->setMaximum(9);
        cell26->setValue(0);
        cell26->setProperty("invalid", QVariant(true));

        box2->addWidget(cell26, 1, 2, 1, 1);

        cell36 = new Cell(Board);
        cell36->setObjectName("cell36");
        sizePolicy.setHeightForWidth(cell36->sizePolicy().hasHeightForWidth());
        cell36->setSizePolicy(sizePolicy);
        cell36->setMinimumSize(QSize(30, 30));
        cell36->setMaximumSize(QSize(30, 30));
        cell36->setFont(font);
        cell36->setAlignment(Qt::AlignCenter);
        cell36->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell36->setMinimum(0);
        cell36->setMaximum(9);
        cell36->setValue(0);
        cell36->setProperty("invalid", QVariant(true));

        box2->addWidget(cell36, 2, 2, 1, 1);

        cell14 = new Cell(Board);
        cell14->setObjectName("cell14");
        sizePolicy.setHeightForWidth(cell14->sizePolicy().hasHeightForWidth());
        cell14->setSizePolicy(sizePolicy);
        cell14->setMinimumSize(QSize(30, 30));
        cell14->setMaximumSize(QSize(30, 30));
        cell14->setFont(font);
        cell14->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px;"));
        cell14->setAlignment(Qt::AlignCenter);
        cell14->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell14->setMinimum(0);
        cell14->setMaximum(9);
        cell14->setValue(0);
        cell14->setProperty("invalid", QVariant(true));

        box2->addWidget(cell14, 0, 0, 1, 1);


        gridLayout->addLayout(box2, 0, 1, 1, 1);

        box3 = new QGridLayout();
        box3->setSpacing(0);
        box3->setObjectName("box3");
        cell17 = new Cell(Board);
        cell17->setObjectName("cell17");
        sizePolicy.setHeightForWidth(cell17->sizePolicy().hasHeightForWidth());
        cell17->setSizePolicy(sizePolicy);
        cell17->setMinimumSize(QSize(30, 30));
        cell17->setMaximumSize(QSize(30, 30));
        cell17->setFont(font);
        cell17->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px;"));
        cell17->setAlignment(Qt::AlignCenter);
        cell17->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell17->setMinimum(0);
        cell17->setMaximum(9);
        cell17->setValue(0);
        cell17->setProperty("invalid", QVariant(true));

        box3->addWidget(cell17, 0, 0, 1, 1);

        cell18 = new Cell(Board);
        cell18->setObjectName("cell18");
        sizePolicy.setHeightForWidth(cell18->sizePolicy().hasHeightForWidth());
        cell18->setSizePolicy(sizePolicy);
        cell18->setMinimumSize(QSize(30, 30));
        cell18->setMaximumSize(QSize(30, 30));
        cell18->setFont(font);
        cell18->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px;"));
        cell18->setAlignment(Qt::AlignCenter);
        cell18->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell18->setMinimum(0);
        cell18->setMaximum(9);
        cell18->setValue(0);
        cell18->setProperty("invalid", QVariant(true));

        box3->addWidget(cell18, 0, 1, 1, 1);

        cell19 = new Cell(Board);
        cell19->setObjectName("cell19");
        sizePolicy.setHeightForWidth(cell19->sizePolicy().hasHeightForWidth());
        cell19->setSizePolicy(sizePolicy);
        cell19->setMinimumSize(QSize(30, 30));
        cell19->setMaximumSize(QSize(30, 30));
        cell19->setFont(font);
        cell19->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 2px; border-bottom-width: 1px;"));
        cell19->setAlignment(Qt::AlignCenter);
        cell19->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell19->setMinimum(0);
        cell19->setMaximum(9);
        cell19->setValue(0);
        cell19->setProperty("invalid", QVariant(true));

        box3->addWidget(cell19, 0, 2, 1, 1);

        cell27 = new Cell(Board);
        cell27->setObjectName("cell27");
        sizePolicy.setHeightForWidth(cell27->sizePolicy().hasHeightForWidth());
        cell27->setSizePolicy(sizePolicy);
        cell27->setMinimumSize(QSize(30, 30));
        cell27->setMaximumSize(QSize(30, 30));
        cell27->setFont(font);
        cell27->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px; "));
        cell27->setAlignment(Qt::AlignCenter);
        cell27->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell27->setMinimum(0);
        cell27->setMaximum(9);
        cell27->setValue(0);
        cell27->setProperty("invalid", QVariant(true));

        box3->addWidget(cell27, 1, 0, 1, 1);

        cell28 = new Cell(Board);
        cell28->setObjectName("cell28");
        sizePolicy.setHeightForWidth(cell28->sizePolicy().hasHeightForWidth());
        cell28->setSizePolicy(sizePolicy);
        cell28->setMinimumSize(QSize(30, 30));
        cell28->setMaximumSize(QSize(30, 30));
        cell28->setFont(font);
        cell28->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width:1px;"));
        cell28->setAlignment(Qt::AlignCenter);
        cell28->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell28->setMinimum(0);
        cell28->setMaximum(9);
        cell28->setValue(0);
        cell28->setProperty("invalid", QVariant(true));

        box3->addWidget(cell28, 1, 1, 1, 1);

        cell29 = new Cell(Board);
        cell29->setObjectName("cell29");
        sizePolicy.setHeightForWidth(cell29->sizePolicy().hasHeightForWidth());
        cell29->setSizePolicy(sizePolicy);
        cell29->setMinimumSize(QSize(30, 30));
        cell29->setMaximumSize(QSize(30, 30));
        cell29->setFont(font);
        cell29->setStyleSheet(QString::fromUtf8("border-right-width: 2px; border-bottom-width: 1px;"));
        cell29->setAlignment(Qt::AlignCenter);
        cell29->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell29->setMinimum(0);
        cell29->setMaximum(9);
        cell29->setValue(0);
        cell29->setProperty("invalid", QVariant(true));

        box3->addWidget(cell29, 1, 2, 1, 1);

        cell37 = new Cell(Board);
        cell37->setObjectName("cell37");
        sizePolicy.setHeightForWidth(cell37->sizePolicy().hasHeightForWidth());
        cell37->setSizePolicy(sizePolicy);
        cell37->setMinimumSize(QSize(30, 30));
        cell37->setMaximumSize(QSize(30, 30));
        cell37->setFont(font);
        cell37->setStyleSheet(QString::fromUtf8("border-right-width: 1px;border-left-width: 2px;"));
        cell37->setAlignment(Qt::AlignCenter);
        cell37->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell37->setMinimum(0);
        cell37->setMaximum(9);
        cell37->setValue(0);
        cell37->setProperty("invalid", QVariant(true));

        box3->addWidget(cell37, 2, 0, 1, 1);

        cell38 = new Cell(Board);
        cell38->setObjectName("cell38");
        sizePolicy.setHeightForWidth(cell38->sizePolicy().hasHeightForWidth());
        cell38->setSizePolicy(sizePolicy);
        cell38->setMinimumSize(QSize(30, 30));
        cell38->setMaximumSize(QSize(30, 30));
        cell38->setFont(font);
        cell38->setStyleSheet(QString::fromUtf8("border-right-width: 1px;"));
        cell38->setAlignment(Qt::AlignCenter);
        cell38->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell38->setMinimum(0);
        cell38->setMaximum(9);
        cell38->setValue(0);
        cell38->setProperty("invalid", QVariant(true));

        box3->addWidget(cell38, 2, 1, 1, 1);

        cell39 = new Cell(Board);
        cell39->setObjectName("cell39");
        sizePolicy.setHeightForWidth(cell39->sizePolicy().hasHeightForWidth());
        cell39->setSizePolicy(sizePolicy);
        cell39->setMinimumSize(QSize(30, 30));
        cell39->setMaximumSize(QSize(30, 30));
        cell39->setFont(font);
        cell39->setStyleSheet(QString::fromUtf8("border-right-width: 2px;"));
        cell39->setAlignment(Qt::AlignCenter);
        cell39->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell39->setMinimum(0);
        cell39->setMaximum(9);
        cell39->setValue(0);
        cell39->setProperty("invalid", QVariant(true));

        box3->addWidget(cell39, 2, 2, 1, 1);


        gridLayout->addLayout(box3, 0, 2, 1, 1);

        box4 = new QGridLayout();
        box4->setSpacing(0);
        box4->setObjectName("box4");
        cell41 = new Cell(Board);
        cell41->setObjectName("cell41");
        sizePolicy.setHeightForWidth(cell41->sizePolicy().hasHeightForWidth());
        cell41->setSizePolicy(sizePolicy);
        cell41->setMinimumSize(QSize(30, 30));
        cell41->setMaximumSize(QSize(30, 30));
        cell41->setFont(font);
        cell41->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px;"));
        cell41->setAlignment(Qt::AlignCenter);
        cell41->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell41->setMinimum(0);
        cell41->setMaximum(9);
        cell41->setValue(0);
        cell41->setProperty("invalid", QVariant(true));

        box4->addWidget(cell41, 0, 0, 1, 1);

        cell42 = new Cell(Board);
        cell42->setObjectName("cell42");
        sizePolicy.setHeightForWidth(cell42->sizePolicy().hasHeightForWidth());
        cell42->setSizePolicy(sizePolicy);
        cell42->setMinimumSize(QSize(30, 30));
        cell42->setMaximumSize(QSize(30, 30));
        cell42->setFont(font);
        cell42->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px;"));
        cell42->setAlignment(Qt::AlignCenter);
        cell42->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell42->setMinimum(0);
        cell42->setMaximum(9);
        cell42->setValue(0);
        cell42->setProperty("invalid", QVariant(true));

        box4->addWidget(cell42, 0, 1, 1, 1);

        cell43 = new Cell(Board);
        cell43->setObjectName("cell43");
        sizePolicy.setHeightForWidth(cell43->sizePolicy().hasHeightForWidth());
        cell43->setSizePolicy(sizePolicy);
        cell43->setMinimumSize(QSize(30, 30));
        cell43->setMaximumSize(QSize(30, 30));
        cell43->setFont(font);
        cell43->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-bottom-width: 1px;"));
        cell43->setAlignment(Qt::AlignCenter);
        cell43->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell43->setMinimum(0);
        cell43->setMaximum(9);
        cell43->setValue(0);
        cell43->setProperty("invalid", QVariant(true));

        box4->addWidget(cell43, 0, 2, 1, 1);

        cell51 = new Cell(Board);
        cell51->setObjectName("cell51");
        sizePolicy.setHeightForWidth(cell51->sizePolicy().hasHeightForWidth());
        cell51->setSizePolicy(sizePolicy);
        cell51->setMinimumSize(QSize(30, 30));
        cell51->setMaximumSize(QSize(30, 30));
        cell51->setFont(font);
        cell51->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px; "));
        cell51->setAlignment(Qt::AlignCenter);
        cell51->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell51->setMinimum(0);
        cell51->setMaximum(9);
        cell51->setValue(0);
        cell51->setProperty("invalid", QVariant(true));

        box4->addWidget(cell51, 1, 0, 1, 1);

        cell52 = new Cell(Board);
        cell52->setObjectName("cell52");
        sizePolicy.setHeightForWidth(cell52->sizePolicy().hasHeightForWidth());
        cell52->setSizePolicy(sizePolicy);
        cell52->setMinimumSize(QSize(30, 30));
        cell52->setMaximumSize(QSize(30, 30));
        cell52->setFont(font);
        cell52->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width:1px;"));
        cell52->setAlignment(Qt::AlignCenter);
        cell52->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell52->setMinimum(0);
        cell52->setMaximum(9);
        cell52->setValue(0);
        cell52->setProperty("invalid", QVariant(true));

        box4->addWidget(cell52, 1, 1, 1, 1);

        cell53 = new Cell(Board);
        cell53->setObjectName("cell53");
        sizePolicy.setHeightForWidth(cell53->sizePolicy().hasHeightForWidth());
        cell53->setSizePolicy(sizePolicy);
        cell53->setMinimumSize(QSize(30, 30));
        cell53->setMaximumSize(QSize(30, 30));
        cell53->setFont(font);
        cell53->setStyleSheet(QString::fromUtf8("border-bottom-width: 1px;"));
        cell53->setAlignment(Qt::AlignCenter);
        cell53->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell53->setMinimum(0);
        cell53->setMaximum(9);
        cell53->setValue(0);
        cell53->setProperty("invalid", QVariant(true));

        box4->addWidget(cell53, 1, 2, 1, 1);

        cell61 = new Cell(Board);
        cell61->setObjectName("cell61");
        sizePolicy.setHeightForWidth(cell61->sizePolicy().hasHeightForWidth());
        cell61->setSizePolicy(sizePolicy);
        cell61->setMinimumSize(QSize(30, 30));
        cell61->setMaximumSize(QSize(30, 30));
        cell61->setFont(font);
        cell61->setStyleSheet(QString::fromUtf8("border-right-width: 1px;border-left-width: 2px;"));
        cell61->setAlignment(Qt::AlignCenter);
        cell61->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell61->setMinimum(0);
        cell61->setMaximum(9);
        cell61->setValue(0);
        cell61->setProperty("invalid", QVariant(true));

        box4->addWidget(cell61, 2, 0, 1, 1);

        cell62 = new Cell(Board);
        cell62->setObjectName("cell62");
        sizePolicy.setHeightForWidth(cell62->sizePolicy().hasHeightForWidth());
        cell62->setSizePolicy(sizePolicy);
        cell62->setMinimumSize(QSize(30, 30));
        cell62->setMaximumSize(QSize(30, 30));
        cell62->setFont(font);
        cell62->setStyleSheet(QString::fromUtf8("border-right-width: 1px;"));
        cell62->setAlignment(Qt::AlignCenter);
        cell62->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell62->setMinimum(0);
        cell62->setMaximum(9);
        cell62->setValue(0);
        cell62->setProperty("invalid", QVariant(true));

        box4->addWidget(cell62, 2, 1, 1, 1);

        cell63 = new Cell(Board);
        cell63->setObjectName("cell63");
        sizePolicy.setHeightForWidth(cell63->sizePolicy().hasHeightForWidth());
        cell63->setSizePolicy(sizePolicy);
        cell63->setMinimumSize(QSize(30, 30));
        cell63->setMaximumSize(QSize(30, 30));
        cell63->setFont(font);
        cell63->setAlignment(Qt::AlignCenter);
        cell63->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell63->setMinimum(0);
        cell63->setMaximum(9);
        cell63->setValue(0);
        cell63->setProperty("invalid", QVariant(true));

        box4->addWidget(cell63, 2, 2, 1, 1);


        gridLayout->addLayout(box4, 1, 0, 1, 1);

        box5 = new QGridLayout();
        box5->setSpacing(0);
        box5->setObjectName("box5");
        cell44 = new Cell(Board);
        cell44->setObjectName("cell44");
        sizePolicy.setHeightForWidth(cell44->sizePolicy().hasHeightForWidth());
        cell44->setSizePolicy(sizePolicy);
        cell44->setMinimumSize(QSize(30, 30));
        cell44->setMaximumSize(QSize(30, 30));
        cell44->setFont(font);
        cell44->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px;"));
        cell44->setAlignment(Qt::AlignCenter);
        cell44->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell44->setMinimum(0);
        cell44->setMaximum(9);
        cell44->setValue(0);
        cell44->setProperty("invalid", QVariant(true));

        box5->addWidget(cell44, 0, 0, 1, 1);

        cell45 = new Cell(Board);
        cell45->setObjectName("cell45");
        sizePolicy.setHeightForWidth(cell45->sizePolicy().hasHeightForWidth());
        cell45->setSizePolicy(sizePolicy);
        cell45->setMinimumSize(QSize(30, 30));
        cell45->setMaximumSize(QSize(30, 30));
        cell45->setFont(font);
        cell45->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px;"));
        cell45->setAlignment(Qt::AlignCenter);
        cell45->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell45->setMinimum(0);
        cell45->setMaximum(9);
        cell45->setValue(0);
        cell45->setProperty("invalid", QVariant(true));

        box5->addWidget(cell45, 0, 1, 1, 1);

        cell46 = new Cell(Board);
        cell46->setObjectName("cell46");
        sizePolicy.setHeightForWidth(cell46->sizePolicy().hasHeightForWidth());
        cell46->setSizePolicy(sizePolicy);
        cell46->setMinimumSize(QSize(30, 30));
        cell46->setMaximumSize(QSize(30, 30));
        cell46->setFont(font);
        cell46->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-bottom-width: 1px;"));
        cell46->setAlignment(Qt::AlignCenter);
        cell46->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell46->setMinimum(0);
        cell46->setMaximum(9);
        cell46->setValue(0);
        cell46->setProperty("invalid", QVariant(true));

        box5->addWidget(cell46, 0, 2, 1, 1);

        cell55 = new Cell(Board);
        cell55->setObjectName("cell55");
        sizePolicy.setHeightForWidth(cell55->sizePolicy().hasHeightForWidth());
        cell55->setSizePolicy(sizePolicy);
        cell55->setMinimumSize(QSize(30, 30));
        cell55->setMaximumSize(QSize(30, 30));
        cell55->setFont(font);
        cell55->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width:1px;"));
        cell55->setAlignment(Qt::AlignCenter);
        cell55->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell55->setMinimum(0);
        cell55->setMaximum(9);
        cell55->setValue(0);
        cell55->setProperty("invalid", QVariant(true));

        box5->addWidget(cell55, 1, 1, 1, 1);

        cell56 = new Cell(Board);
        cell56->setObjectName("cell56");
        sizePolicy.setHeightForWidth(cell56->sizePolicy().hasHeightForWidth());
        cell56->setSizePolicy(sizePolicy);
        cell56->setMinimumSize(QSize(30, 30));
        cell56->setMaximumSize(QSize(30, 30));
        cell56->setFont(font);
        cell56->setStyleSheet(QString::fromUtf8("border-bottom-width: 1px;"));
        cell56->setAlignment(Qt::AlignCenter);
        cell56->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell56->setMinimum(0);
        cell56->setMaximum(9);
        cell56->setValue(0);
        cell56->setProperty("invalid", QVariant(true));

        box5->addWidget(cell56, 1, 2, 1, 1);

        cell64 = new Cell(Board);
        cell64->setObjectName("cell64");
        sizePolicy.setHeightForWidth(cell64->sizePolicy().hasHeightForWidth());
        cell64->setSizePolicy(sizePolicy);
        cell64->setMinimumSize(QSize(30, 30));
        cell64->setMaximumSize(QSize(30, 30));
        cell64->setFont(font);
        cell64->setStyleSheet(QString::fromUtf8("border-right-width: 1px;border-left-width: 2px;"));
        cell64->setAlignment(Qt::AlignCenter);
        cell64->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell64->setMinimum(0);
        cell64->setMaximum(9);
        cell64->setValue(0);
        cell64->setProperty("invalid", QVariant(true));

        box5->addWidget(cell64, 2, 0, 1, 1);

        cell65 = new Cell(Board);
        cell65->setObjectName("cell65");
        sizePolicy.setHeightForWidth(cell65->sizePolicy().hasHeightForWidth());
        cell65->setSizePolicy(sizePolicy);
        cell65->setMinimumSize(QSize(30, 30));
        cell65->setMaximumSize(QSize(30, 30));
        cell65->setFont(font);
        cell65->setStyleSheet(QString::fromUtf8("border-right-width: 1px;"));
        cell65->setAlignment(Qt::AlignCenter);
        cell65->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell65->setMinimum(0);
        cell65->setMaximum(9);
        cell65->setValue(0);
        cell65->setProperty("invalid", QVariant(true));

        box5->addWidget(cell65, 2, 1, 1, 1);

        cell66 = new Cell(Board);
        cell66->setObjectName("cell66");
        sizePolicy.setHeightForWidth(cell66->sizePolicy().hasHeightForWidth());
        cell66->setSizePolicy(sizePolicy);
        cell66->setMinimumSize(QSize(30, 30));
        cell66->setMaximumSize(QSize(30, 30));
        cell66->setFont(font);
        cell66->setAlignment(Qt::AlignCenter);
        cell66->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell66->setMinimum(0);
        cell66->setMaximum(9);
        cell66->setValue(0);
        cell66->setProperty("invalid", QVariant(true));

        box5->addWidget(cell66, 2, 2, 1, 1);

        cell54 = new Cell(Board);
        cell54->setObjectName("cell54");
        sizePolicy.setHeightForWidth(cell54->sizePolicy().hasHeightForWidth());
        cell54->setSizePolicy(sizePolicy);
        cell54->setMinimumSize(QSize(30, 30));
        cell54->setMaximumSize(QSize(30, 30));
        cell54->setFont(font);
        cell54->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px; "));
        cell54->setAlignment(Qt::AlignCenter);
        cell54->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell54->setMinimum(0);
        cell54->setMaximum(9);
        cell54->setValue(0);
        cell54->setProperty("invalid", QVariant(true));

        box5->addWidget(cell54, 1, 0, 1, 1);


        gridLayout->addLayout(box5, 1, 1, 1, 1);

        box6 = new QGridLayout();
        box6->setSpacing(0);
        box6->setObjectName("box6");
        cell47 = new Cell(Board);
        cell47->setObjectName("cell47");
        sizePolicy.setHeightForWidth(cell47->sizePolicy().hasHeightForWidth());
        cell47->setSizePolicy(sizePolicy);
        cell47->setMinimumSize(QSize(30, 30));
        cell47->setMaximumSize(QSize(30, 30));
        cell47->setFont(font);
        cell47->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px;"));
        cell47->setAlignment(Qt::AlignCenter);
        cell47->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell47->setMinimum(0);
        cell47->setMaximum(9);
        cell47->setValue(0);
        cell47->setProperty("invalid", QVariant(true));

        box6->addWidget(cell47, 0, 0, 1, 1);

        cell48 = new Cell(Board);
        cell48->setObjectName("cell48");
        sizePolicy.setHeightForWidth(cell48->sizePolicy().hasHeightForWidth());
        cell48->setSizePolicy(sizePolicy);
        cell48->setMinimumSize(QSize(30, 30));
        cell48->setMaximumSize(QSize(30, 30));
        cell48->setFont(font);
        cell48->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px;"));
        cell48->setAlignment(Qt::AlignCenter);
        cell48->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell48->setMinimum(0);
        cell48->setMaximum(9);
        cell48->setValue(0);
        cell48->setProperty("invalid", QVariant(true));

        box6->addWidget(cell48, 0, 1, 1, 1);

        cell49 = new Cell(Board);
        cell49->setObjectName("cell49");
        sizePolicy.setHeightForWidth(cell49->sizePolicy().hasHeightForWidth());
        cell49->setSizePolicy(sizePolicy);
        cell49->setMinimumSize(QSize(30, 30));
        cell49->setMaximumSize(QSize(30, 30));
        cell49->setFont(font);
        cell49->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 2px; border-bottom-width: 1px;"));
        cell49->setAlignment(Qt::AlignCenter);
        cell49->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell49->setMinimum(0);
        cell49->setMaximum(9);
        cell49->setValue(0);
        cell49->setProperty("invalid", QVariant(true));

        box6->addWidget(cell49, 0, 2, 1, 1);

        cell57 = new Cell(Board);
        cell57->setObjectName("cell57");
        sizePolicy.setHeightForWidth(cell57->sizePolicy().hasHeightForWidth());
        cell57->setSizePolicy(sizePolicy);
        cell57->setMinimumSize(QSize(30, 30));
        cell57->setMaximumSize(QSize(30, 30));
        cell57->setFont(font);
        cell57->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px; "));
        cell57->setAlignment(Qt::AlignCenter);
        cell57->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell57->setMinimum(0);
        cell57->setMaximum(9);
        cell57->setValue(0);
        cell57->setProperty("invalid", QVariant(true));

        box6->addWidget(cell57, 1, 0, 1, 1);

        cell58 = new Cell(Board);
        cell58->setObjectName("cell58");
        sizePolicy.setHeightForWidth(cell58->sizePolicy().hasHeightForWidth());
        cell58->setSizePolicy(sizePolicy);
        cell58->setMinimumSize(QSize(30, 30));
        cell58->setMaximumSize(QSize(30, 30));
        cell58->setFont(font);
        cell58->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width:1px;"));
        cell58->setAlignment(Qt::AlignCenter);
        cell58->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell58->setMinimum(0);
        cell58->setMaximum(9);
        cell58->setValue(0);
        cell58->setProperty("invalid", QVariant(true));

        box6->addWidget(cell58, 1, 1, 1, 1);

        cell59 = new Cell(Board);
        cell59->setObjectName("cell59");
        sizePolicy.setHeightForWidth(cell59->sizePolicy().hasHeightForWidth());
        cell59->setSizePolicy(sizePolicy);
        cell59->setMinimumSize(QSize(30, 30));
        cell59->setMaximumSize(QSize(30, 30));
        cell59->setFont(font);
        cell59->setStyleSheet(QString::fromUtf8("border-right-width: 2px; border-bottom-width: 1px;"));
        cell59->setAlignment(Qt::AlignCenter);
        cell59->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell59->setMinimum(0);
        cell59->setMaximum(9);
        cell59->setValue(0);
        cell59->setProperty("invalid", QVariant(true));

        box6->addWidget(cell59, 1, 2, 1, 1);

        cell67 = new Cell(Board);
        cell67->setObjectName("cell67");
        sizePolicy.setHeightForWidth(cell67->sizePolicy().hasHeightForWidth());
        cell67->setSizePolicy(sizePolicy);
        cell67->setMinimumSize(QSize(30, 30));
        cell67->setMaximumSize(QSize(30, 30));
        cell67->setFont(font);
        cell67->setStyleSheet(QString::fromUtf8("border-right-width: 1px;border-left-width: 2px;"));
        cell67->setAlignment(Qt::AlignCenter);
        cell67->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell67->setMinimum(0);
        cell67->setMaximum(9);
        cell67->setValue(0);
        cell67->setProperty("invalid", QVariant(true));

        box6->addWidget(cell67, 2, 0, 1, 1);

        cell68 = new Cell(Board);
        cell68->setObjectName("cell68");
        sizePolicy.setHeightForWidth(cell68->sizePolicy().hasHeightForWidth());
        cell68->setSizePolicy(sizePolicy);
        cell68->setMinimumSize(QSize(30, 30));
        cell68->setMaximumSize(QSize(30, 30));
        cell68->setFont(font);
        cell68->setStyleSheet(QString::fromUtf8("border-right-width: 1px;"));
        cell68->setAlignment(Qt::AlignCenter);
        cell68->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell68->setMinimum(0);
        cell68->setMaximum(9);
        cell68->setValue(0);
        cell68->setProperty("invalid", QVariant(true));

        box6->addWidget(cell68, 2, 1, 1, 1);

        cell69 = new Cell(Board);
        cell69->setObjectName("cell69");
        sizePolicy.setHeightForWidth(cell69->sizePolicy().hasHeightForWidth());
        cell69->setSizePolicy(sizePolicy);
        cell69->setMinimumSize(QSize(30, 30));
        cell69->setMaximumSize(QSize(30, 30));
        cell69->setFont(font);
        cell69->setStyleSheet(QString::fromUtf8("border-right-width: 2px;"));
        cell69->setAlignment(Qt::AlignCenter);
        cell69->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell69->setMinimum(0);
        cell69->setMaximum(9);
        cell69->setValue(0);
        cell69->setProperty("invalid", QVariant(true));

        box6->addWidget(cell69, 2, 2, 1, 1);


        gridLayout->addLayout(box6, 1, 2, 1, 1);

        box7 = new QGridLayout();
        box7->setSpacing(0);
        box7->setObjectName("box7");
        cell71 = new Cell(Board);
        cell71->setObjectName("cell71");
        sizePolicy.setHeightForWidth(cell71->sizePolicy().hasHeightForWidth());
        cell71->setSizePolicy(sizePolicy);
        cell71->setMinimumSize(QSize(30, 30));
        cell71->setMaximumSize(QSize(30, 30));
        cell71->setFont(font);
        cell71->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px;"));
        cell71->setAlignment(Qt::AlignCenter);
        cell71->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell71->setMinimum(0);
        cell71->setMaximum(9);
        cell71->setValue(0);
        cell71->setProperty("invalid", QVariant(true));

        box7->addWidget(cell71, 0, 0, 1, 1);

        cell72 = new Cell(Board);
        cell72->setObjectName("cell72");
        sizePolicy.setHeightForWidth(cell72->sizePolicy().hasHeightForWidth());
        cell72->setSizePolicy(sizePolicy);
        cell72->setMinimumSize(QSize(30, 30));
        cell72->setMaximumSize(QSize(30, 30));
        cell72->setFont(font);
        cell72->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px;"));
        cell72->setAlignment(Qt::AlignCenter);
        cell72->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell72->setMinimum(0);
        cell72->setMaximum(9);
        cell72->setValue(0);
        cell72->setProperty("invalid", QVariant(true));

        box7->addWidget(cell72, 0, 1, 1, 1);

        cell73 = new Cell(Board);
        cell73->setObjectName("cell73");
        sizePolicy.setHeightForWidth(cell73->sizePolicy().hasHeightForWidth());
        cell73->setSizePolicy(sizePolicy);
        cell73->setMinimumSize(QSize(30, 30));
        cell73->setMaximumSize(QSize(30, 30));
        cell73->setFont(font);
        cell73->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-bottom-width: 1px;"));
        cell73->setAlignment(Qt::AlignCenter);
        cell73->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell73->setMinimum(0);
        cell73->setMaximum(9);
        cell73->setValue(0);
        cell73->setProperty("invalid", QVariant(true));

        box7->addWidget(cell73, 0, 2, 1, 1);

        cell81 = new Cell(Board);
        cell81->setObjectName("cell81");
        sizePolicy.setHeightForWidth(cell81->sizePolicy().hasHeightForWidth());
        cell81->setSizePolicy(sizePolicy);
        cell81->setMinimumSize(QSize(30, 30));
        cell81->setMaximumSize(QSize(30, 30));
        cell81->setFont(font);
        cell81->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px; "));
        cell81->setAlignment(Qt::AlignCenter);
        cell81->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell81->setMinimum(0);
        cell81->setMaximum(9);
        cell81->setValue(0);
        cell81->setProperty("invalid", QVariant(true));

        box7->addWidget(cell81, 1, 0, 1, 1);

        cell82 = new Cell(Board);
        cell82->setObjectName("cell82");
        sizePolicy.setHeightForWidth(cell82->sizePolicy().hasHeightForWidth());
        cell82->setSizePolicy(sizePolicy);
        cell82->setMinimumSize(QSize(30, 30));
        cell82->setMaximumSize(QSize(30, 30));
        cell82->setFont(font);
        cell82->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width:1px;"));
        cell82->setAlignment(Qt::AlignCenter);
        cell82->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell82->setMinimum(0);
        cell82->setMaximum(9);
        cell82->setValue(0);
        cell82->setProperty("invalid", QVariant(true));

        box7->addWidget(cell82, 1, 1, 1, 1);

        cell83 = new Cell(Board);
        cell83->setObjectName("cell83");
        sizePolicy.setHeightForWidth(cell83->sizePolicy().hasHeightForWidth());
        cell83->setSizePolicy(sizePolicy);
        cell83->setMinimumSize(QSize(30, 30));
        cell83->setMaximumSize(QSize(30, 30));
        cell83->setFont(font);
        cell83->setStyleSheet(QString::fromUtf8("border-bottom-width: 1px;"));
        cell83->setAlignment(Qt::AlignCenter);
        cell83->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell83->setMinimum(0);
        cell83->setMaximum(9);
        cell83->setValue(0);
        cell83->setProperty("invalid", QVariant(true));

        box7->addWidget(cell83, 1, 2, 1, 1);

        cell91 = new Cell(Board);
        cell91->setObjectName("cell91");
        sizePolicy.setHeightForWidth(cell91->sizePolicy().hasHeightForWidth());
        cell91->setSizePolicy(sizePolicy);
        cell91->setMinimumSize(QSize(30, 30));
        cell91->setMaximumSize(QSize(30, 30));
        cell91->setFont(font);
        cell91->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 2px; border-left-width: 2px;"));
        cell91->setAlignment(Qt::AlignCenter);
        cell91->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell91->setMinimum(0);
        cell91->setMaximum(9);
        cell91->setValue(0);
        cell91->setProperty("invalid", QVariant(true));

        box7->addWidget(cell91, 2, 0, 1, 1);

        cell92 = new Cell(Board);
        cell92->setObjectName("cell92");
        sizePolicy.setHeightForWidth(cell92->sizePolicy().hasHeightForWidth());
        cell92->setSizePolicy(sizePolicy);
        cell92->setMinimumSize(QSize(30, 30));
        cell92->setMaximumSize(QSize(30, 30));
        cell92->setFont(font);
        cell92->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 2px;"));
        cell92->setAlignment(Qt::AlignCenter);
        cell92->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell92->setMinimum(0);
        cell92->setMaximum(9);
        cell92->setValue(0);
        cell92->setProperty("invalid", QVariant(true));

        box7->addWidget(cell92, 2, 1, 1, 1);

        cell93 = new Cell(Board);
        cell93->setObjectName("cell93");
        sizePolicy.setHeightForWidth(cell93->sizePolicy().hasHeightForWidth());
        cell93->setSizePolicy(sizePolicy);
        cell93->setMinimumSize(QSize(30, 30));
        cell93->setMaximumSize(QSize(30, 30));
        cell93->setFont(font);
        cell93->setStyleSheet(QString::fromUtf8("border-bottom-width: 2px;"));
        cell93->setAlignment(Qt::AlignCenter);
        cell93->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell93->setMinimum(0);
        cell93->setMaximum(9);
        cell93->setValue(0);
        cell93->setProperty("invalid", QVariant(true));

        box7->addWidget(cell93, 2, 2, 1, 1);


        gridLayout->addLayout(box7, 2, 0, 1, 1);

        box8 = new QGridLayout();
        box8->setSpacing(0);
        box8->setObjectName("box8");
        cell74 = new Cell(Board);
        cell74->setObjectName("cell74");
        sizePolicy.setHeightForWidth(cell74->sizePolicy().hasHeightForWidth());
        cell74->setSizePolicy(sizePolicy);
        cell74->setMinimumSize(QSize(30, 30));
        cell74->setMaximumSize(QSize(30, 30));
        cell74->setFont(font);
        cell74->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px;"));
        cell74->setAlignment(Qt::AlignCenter);
        cell74->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell74->setMinimum(0);
        cell74->setMaximum(9);
        cell74->setValue(0);
        cell74->setProperty("invalid", QVariant(true));

        box8->addWidget(cell74, 0, 0, 1, 1);

        cell75 = new Cell(Board);
        cell75->setObjectName("cell75");
        sizePolicy.setHeightForWidth(cell75->sizePolicy().hasHeightForWidth());
        cell75->setSizePolicy(sizePolicy);
        cell75->setMinimumSize(QSize(30, 30));
        cell75->setMaximumSize(QSize(30, 30));
        cell75->setFont(font);
        cell75->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px;"));
        cell75->setAlignment(Qt::AlignCenter);
        cell75->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell75->setMinimum(0);
        cell75->setMaximum(9);
        cell75->setValue(0);
        cell75->setProperty("invalid", QVariant(true));

        box8->addWidget(cell75, 0, 1, 1, 1);

        cell76 = new Cell(Board);
        cell76->setObjectName("cell76");
        sizePolicy.setHeightForWidth(cell76->sizePolicy().hasHeightForWidth());
        cell76->setSizePolicy(sizePolicy);
        cell76->setMinimumSize(QSize(30, 30));
        cell76->setMaximumSize(QSize(30, 30));
        cell76->setFont(font);
        cell76->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-bottom-width: 1px;"));
        cell76->setAlignment(Qt::AlignCenter);
        cell76->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell76->setMinimum(0);
        cell76->setMaximum(9);
        cell76->setValue(0);
        cell76->setProperty("invalid", QVariant(true));

        box8->addWidget(cell76, 0, 2, 1, 1);

        cell84 = new Cell(Board);
        cell84->setObjectName("cell84");
        sizePolicy.setHeightForWidth(cell84->sizePolicy().hasHeightForWidth());
        cell84->setSizePolicy(sizePolicy);
        cell84->setMinimumSize(QSize(30, 30));
        cell84->setMaximumSize(QSize(30, 30));
        cell84->setFont(font);
        cell84->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px; "));
        cell84->setAlignment(Qt::AlignCenter);
        cell84->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell84->setMinimum(0);
        cell84->setMaximum(9);
        cell84->setValue(0);
        cell84->setProperty("invalid", QVariant(true));

        box8->addWidget(cell84, 1, 0, 1, 1);

        cell85 = new Cell(Board);
        cell85->setObjectName("cell85");
        sizePolicy.setHeightForWidth(cell85->sizePolicy().hasHeightForWidth());
        cell85->setSizePolicy(sizePolicy);
        cell85->setMinimumSize(QSize(30, 30));
        cell85->setMaximumSize(QSize(30, 30));
        cell85->setFont(font);
        cell85->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width:1px;"));
        cell85->setAlignment(Qt::AlignCenter);
        cell85->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell85->setMinimum(0);
        cell85->setMaximum(9);
        cell85->setValue(0);
        cell85->setProperty("invalid", QVariant(true));

        box8->addWidget(cell85, 1, 1, 1, 1);

        cell86 = new Cell(Board);
        cell86->setObjectName("cell86");
        sizePolicy.setHeightForWidth(cell86->sizePolicy().hasHeightForWidth());
        cell86->setSizePolicy(sizePolicy);
        cell86->setMinimumSize(QSize(30, 30));
        cell86->setMaximumSize(QSize(30, 30));
        cell86->setFont(font);
        cell86->setStyleSheet(QString::fromUtf8("border-bottom-width: 1px;"));
        cell86->setAlignment(Qt::AlignCenter);
        cell86->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell86->setMinimum(0);
        cell86->setMaximum(9);
        cell86->setValue(0);
        cell86->setProperty("invalid", QVariant(true));

        box8->addWidget(cell86, 1, 2, 1, 1);

        cell94 = new Cell(Board);
        cell94->setObjectName("cell94");
        sizePolicy.setHeightForWidth(cell94->sizePolicy().hasHeightForWidth());
        cell94->setSizePolicy(sizePolicy);
        cell94->setMinimumSize(QSize(30, 30));
        cell94->setMaximumSize(QSize(30, 30));
        cell94->setFont(font);
        cell94->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 2px; border-left-width: 2px;"));
        cell94->setAlignment(Qt::AlignCenter);
        cell94->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell94->setMinimum(0);
        cell94->setMaximum(9);
        cell94->setValue(0);
        cell94->setProperty("invalid", QVariant(true));

        box8->addWidget(cell94, 2, 0, 1, 1);

        cell95 = new Cell(Board);
        cell95->setObjectName("cell95");
        sizePolicy.setHeightForWidth(cell95->sizePolicy().hasHeightForWidth());
        cell95->setSizePolicy(sizePolicy);
        cell95->setMinimumSize(QSize(30, 30));
        cell95->setMaximumSize(QSize(30, 30));
        cell95->setFont(font);
        cell95->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 2px;"));
        cell95->setAlignment(Qt::AlignCenter);
        cell95->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell95->setMinimum(0);
        cell95->setMaximum(9);
        cell95->setValue(0);
        cell95->setProperty("invalid", QVariant(true));

        box8->addWidget(cell95, 2, 1, 1, 1);

        cell96 = new Cell(Board);
        cell96->setObjectName("cell96");
        sizePolicy.setHeightForWidth(cell96->sizePolicy().hasHeightForWidth());
        cell96->setSizePolicy(sizePolicy);
        cell96->setMinimumSize(QSize(30, 30));
        cell96->setMaximumSize(QSize(30, 30));
        cell96->setFont(font);
        cell96->setStyleSheet(QString::fromUtf8("border-bottom-width: 2px;"));
        cell96->setAlignment(Qt::AlignCenter);
        cell96->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell96->setMinimum(0);
        cell96->setMaximum(9);
        cell96->setValue(0);
        cell96->setProperty("invalid", QVariant(true));

        box8->addWidget(cell96, 2, 2, 1, 1);


        gridLayout->addLayout(box8, 2, 1, 1, 1);

        box9 = new QGridLayout();
        box9->setSpacing(0);
        box9->setObjectName("box9");
        cell78 = new Cell(Board);
        cell78->setObjectName("cell78");
        sizePolicy.setHeightForWidth(cell78->sizePolicy().hasHeightForWidth());
        cell78->setSizePolicy(sizePolicy);
        cell78->setMinimumSize(QSize(30, 30));
        cell78->setMaximumSize(QSize(30, 30));
        cell78->setFont(font);
        cell78->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px;"));
        cell78->setAlignment(Qt::AlignCenter);
        cell78->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell78->setMinimum(0);
        cell78->setMaximum(9);
        cell78->setValue(0);
        cell78->setProperty("invalid", QVariant(true));

        box9->addWidget(cell78, 0, 1, 1, 1);

        cell79 = new Cell(Board);
        cell79->setObjectName("cell79");
        sizePolicy.setHeightForWidth(cell79->sizePolicy().hasHeightForWidth());
        cell79->setSizePolicy(sizePolicy);
        cell79->setMinimumSize(QSize(30, 30));
        cell79->setMaximumSize(QSize(30, 30));
        cell79->setFont(font);
        cell79->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 2px; border-bottom-width: 1px;"));
        cell79->setAlignment(Qt::AlignCenter);
        cell79->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell79->setMinimum(0);
        cell79->setMaximum(9);
        cell79->setValue(0);
        cell79->setProperty("invalid", QVariant(true));

        box9->addWidget(cell79, 0, 2, 1, 1);

        cell87 = new Cell(Board);
        cell87->setObjectName("cell87");
        sizePolicy.setHeightForWidth(cell87->sizePolicy().hasHeightForWidth());
        cell87->setSizePolicy(sizePolicy);
        cell87->setMinimumSize(QSize(30, 30));
        cell87->setMaximumSize(QSize(30, 30));
        cell87->setFont(font);
        cell87->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px; "));
        cell87->setAlignment(Qt::AlignCenter);
        cell87->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell87->setMinimum(0);
        cell87->setMaximum(9);
        cell87->setValue(0);
        cell87->setProperty("invalid", QVariant(true));

        box9->addWidget(cell87, 1, 0, 1, 1);

        cell88 = new Cell(Board);
        cell88->setObjectName("cell88");
        sizePolicy.setHeightForWidth(cell88->sizePolicy().hasHeightForWidth());
        cell88->setSizePolicy(sizePolicy);
        cell88->setMinimumSize(QSize(30, 30));
        cell88->setMaximumSize(QSize(30, 30));
        cell88->setFont(font);
        cell88->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width:1px;"));
        cell88->setAlignment(Qt::AlignCenter);
        cell88->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell88->setMinimum(0);
        cell88->setMaximum(9);
        cell88->setValue(0);
        cell88->setProperty("invalid", QVariant(true));

        box9->addWidget(cell88, 1, 1, 1, 1);

        cell89 = new Cell(Board);
        cell89->setObjectName("cell89");
        sizePolicy.setHeightForWidth(cell89->sizePolicy().hasHeightForWidth());
        cell89->setSizePolicy(sizePolicy);
        cell89->setMinimumSize(QSize(30, 30));
        cell89->setMaximumSize(QSize(30, 30));
        cell89->setFont(font);
        cell89->setStyleSheet(QString::fromUtf8("border-right-width: 2px; border-bottom-width: 1px;"));
        cell89->setAlignment(Qt::AlignCenter);
        cell89->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell89->setMinimum(0);
        cell89->setMaximum(9);
        cell89->setValue(0);
        cell89->setProperty("invalid", QVariant(true));

        box9->addWidget(cell89, 1, 2, 1, 1);

        cell97 = new Cell(Board);
        cell97->setObjectName("cell97");
        sizePolicy.setHeightForWidth(cell97->sizePolicy().hasHeightForWidth());
        cell97->setSizePolicy(sizePolicy);
        cell97->setMinimumSize(QSize(30, 30));
        cell97->setMaximumSize(QSize(30, 30));
        cell97->setFont(font);
        cell97->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 2px; border-left-width: 2px;"));
        cell97->setAlignment(Qt::AlignCenter);
        cell97->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell97->setMinimum(0);
        cell97->setMaximum(9);
        cell97->setValue(0);
        cell97->setProperty("invalid", QVariant(true));

        box9->addWidget(cell97, 2, 0, 1, 1);

        cell98 = new Cell(Board);
        cell98->setObjectName("cell98");
        sizePolicy.setHeightForWidth(cell98->sizePolicy().hasHeightForWidth());
        cell98->setSizePolicy(sizePolicy);
        cell98->setMinimumSize(QSize(30, 30));
        cell98->setMaximumSize(QSize(30, 30));
        cell98->setFont(font);
        cell98->setStyleSheet(QString::fromUtf8("border-right-width: 1px; border-bottom-width: 2px;"));
        cell98->setAlignment(Qt::AlignCenter);
        cell98->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell98->setMinimum(0);
        cell98->setMaximum(9);
        cell98->setValue(0);
        cell98->setProperty("invalid", QVariant(true));

        box9->addWidget(cell98, 2, 1, 1, 1);

        cell99 = new Cell(Board);
        cell99->setObjectName("cell99");
        sizePolicy.setHeightForWidth(cell99->sizePolicy().hasHeightForWidth());
        cell99->setSizePolicy(sizePolicy);
        cell99->setMinimumSize(QSize(30, 30));
        cell99->setMaximumSize(QSize(30, 30));
        cell99->setFont(font);
        cell99->setStyleSheet(QString::fromUtf8("border-right-width: 2px; border-bottom-width: 2px;"));
        cell99->setAlignment(Qt::AlignCenter);
        cell99->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell99->setMinimum(0);
        cell99->setMaximum(9);
        cell99->setValue(0);
        cell99->setProperty("invalid", QVariant(true));

        box9->addWidget(cell99, 2, 2, 1, 1);

        cell77 = new Cell(Board);
        cell77->setObjectName("cell77");
        sizePolicy.setHeightForWidth(cell77->sizePolicy().hasHeightForWidth());
        cell77->setSizePolicy(sizePolicy);
        cell77->setMinimumSize(QSize(30, 30));
        cell77->setMaximumSize(QSize(30, 30));
        cell77->setFont(font);
        cell77->setStyleSheet(QString::fromUtf8("border-top-width: 2px; border-right-width: 1px; border-bottom-width: 1px; border-left-width: 2px;"));
        cell77->setAlignment(Qt::AlignCenter);
        cell77->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cell77->setMinimum(0);
        cell77->setMaximum(9);
        cell77->setValue(0);
        cell77->setProperty("invalid", QVariant(true));

        box9->addWidget(cell77, 0, 0, 1, 1);


        gridLayout->addLayout(box9, 2, 2, 1, 1);


        retranslateUi(Board);

        QMetaObject::connectSlotsByName(Board);
    } // setupUi

    void retranslateUi(QWidget *Board)
    {
        Board->setWindowTitle(QCoreApplication::translate("Board", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Board: public Ui_Board {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARD_H
