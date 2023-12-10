/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *resetButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *lineEditSubject1;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEditSubject2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEditSubject3;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEditSubject4;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton;
    QTextEdit *resultLabel;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_8;
    QPushButton *maxScoreButton;
    QTextEdit *maxScoreTextField;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(849, 683);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName("frame_5");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(255);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy);
        frame_5->setMaximumSize(QSize(167, 55));
        frame_5->setSizeIncrement(QSize(-10354, 0));
        frame_5->setBaseSize(QSize(0, 0));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        resetButton = new QPushButton(frame_5);
        resetButton->setObjectName("resetButton");
        resetButton->setSizeIncrement(QSize(0, 0));
        resetButton->setCursor(QCursor(Qt::CrossCursor));

        verticalLayout_2->addWidget(resetButton);


        verticalLayout->addWidget(frame_5, 0, Qt::AlignRight);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(230, 0));
        frame->setMaximumSize(QSize(1686, 77));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(frame);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label, 0, Qt::AlignLeft);

        lineEditSubject1 = new QLineEdit(frame);
        lineEditSubject1->setObjectName("lineEditSubject1");
        lineEditSubject1->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(lineEditSubject1, 0, Qt::AlignLeft|Qt::AlignVCenter);


        verticalLayout->addWidget(frame, 0, Qt::AlignLeft);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(230, 0));
        frame_2->setMaximumSize(QSize(1686, 77));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2, 0, Qt::AlignLeft);

        lineEditSubject2 = new QLineEdit(frame_2);
        lineEditSubject2->setObjectName("lineEditSubject2");

        verticalLayout_4->addWidget(lineEditSubject2, 0, Qt::AlignLeft);


        verticalLayout->addWidget(frame_2, 0, Qt::AlignLeft);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(230, 0));
        frame_3->setMaximumSize(QSize(1686, 77));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");

        verticalLayout_5->addWidget(label_3, 0, Qt::AlignLeft);

        lineEditSubject3 = new QLineEdit(frame_3);
        lineEditSubject3->setObjectName("lineEditSubject3");

        verticalLayout_5->addWidget(lineEditSubject3, 0, Qt::AlignLeft);


        verticalLayout->addWidget(frame_3, 0, Qt::AlignLeft);

        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(230, 0));
        frame_4->setMaximumSize(QSize(1686, 77));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_4 = new QLabel(frame_4);
        label_4->setObjectName("label_4");

        verticalLayout_6->addWidget(label_4, 0, Qt::AlignLeft);

        lineEditSubject4 = new QLineEdit(frame_4);
        lineEditSubject4->setObjectName("lineEditSubject4");

        verticalLayout_6->addWidget(lineEditSubject4, 0, Qt::AlignLeft);


        verticalLayout->addWidget(frame_4, 0, Qt::AlignLeft);

        frame_8 = new QFrame(centralwidget);
        frame_8->setObjectName("frame_8");
        frame_8->setMinimumSize(QSize(0, 70));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_8);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_7 = new QFrame(frame_8);
        frame_7->setObjectName("frame_7");
        frame_7->setMinimumSize(QSize(0, 90));
        frame_7->setMaximumSize(QSize(327, 16777215));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        pushButton = new QPushButton(frame_7);
        pushButton->setObjectName("pushButton");

        verticalLayout_7->addWidget(pushButton, 0, Qt::AlignLeft);

        resultLabel = new QTextEdit(frame_7);
        resultLabel->setObjectName("resultLabel");

        verticalLayout_7->addWidget(resultLabel, 0, Qt::AlignLeft);


        horizontalLayout->addWidget(frame_7, 0, Qt::AlignLeft);

        frame_6 = new QFrame(frame_8);
        frame_6->setObjectName("frame_6");
        frame_6->setMaximumSize(QSize(327, 16777215));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_6);
        verticalLayout_8->setObjectName("verticalLayout_8");
        maxScoreButton = new QPushButton(frame_6);
        maxScoreButton->setObjectName("maxScoreButton");

        verticalLayout_8->addWidget(maxScoreButton, 0, Qt::AlignLeft);

        maxScoreTextField = new QTextEdit(frame_6);
        maxScoreTextField->setObjectName("maxScoreTextField");

        verticalLayout_8->addWidget(maxScoreTextField, 0, Qt::AlignLeft);


        horizontalLayout->addWidget(frame_6, 0, Qt::AlignLeft);


        verticalLayout->addWidget(frame_8, 0, Qt::AlignLeft);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 849, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Subject 1:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Subject 2:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Subject 3:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Subject 4:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calculate Average", nullptr));
        maxScoreButton->setText(QCoreApplication::translate("MainWindow", "Best Score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
