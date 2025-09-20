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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
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
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_Persntag;
    QPushButton *pushButton_Davision;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_number7;
    QPushButton *pushButton_number8;
    QPushButton *pushButton_number9;
    QPushButton *pushButton_Multipel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_number4;
    QPushButton *pushButton_number5;
    QPushButton *pushButton_number6;
    QPushButton *pushButton_muns;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_number1;
    QPushButton *pushButton_number2;
    QPushButton *pushButton_number3;
    QPushButton *pushButton_Plus;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_33;
    QPushButton *pushButton_number0;
    QPushButton *pushButton_Point;
    QPushButton *pushButton_equale;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(395, 578);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout_2->addWidget(textEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName("pushButton_AC");
        pushButton_AC->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout->addWidget(pushButton_AC);

        pushButton_Clear = new QPushButton(centralwidget);
        pushButton_Clear->setObjectName("pushButton_Clear");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/Calculator/delete (2).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Clear->setIcon(icon);
        pushButton_Clear->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton_Clear);

        pushButton_Persntag = new QPushButton(centralwidget);
        pushButton_Persntag->setObjectName("pushButton_Persntag");
        pushButton_Persntag->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout->addWidget(pushButton_Persntag);

        pushButton_Davision = new QPushButton(centralwidget);
        pushButton_Davision->setObjectName("pushButton_Davision");
        pushButton_Davision->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout->addWidget(pushButton_Davision);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_number7 = new QPushButton(centralwidget);
        pushButton_number7->setObjectName("pushButton_number7");

        horizontalLayout_2->addWidget(pushButton_number7);

        pushButton_number8 = new QPushButton(centralwidget);
        pushButton_number8->setObjectName("pushButton_number8");

        horizontalLayout_2->addWidget(pushButton_number8);

        pushButton_number9 = new QPushButton(centralwidget);
        pushButton_number9->setObjectName("pushButton_number9");

        horizontalLayout_2->addWidget(pushButton_number9);

        pushButton_Multipel = new QPushButton(centralwidget);
        pushButton_Multipel->setObjectName("pushButton_Multipel");
        pushButton_Multipel->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout_2->addWidget(pushButton_Multipel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_number4 = new QPushButton(centralwidget);
        pushButton_number4->setObjectName("pushButton_number4");

        horizontalLayout_3->addWidget(pushButton_number4);

        pushButton_number5 = new QPushButton(centralwidget);
        pushButton_number5->setObjectName("pushButton_number5");

        horizontalLayout_3->addWidget(pushButton_number5);

        pushButton_number6 = new QPushButton(centralwidget);
        pushButton_number6->setObjectName("pushButton_number6");

        horizontalLayout_3->addWidget(pushButton_number6);

        pushButton_muns = new QPushButton(centralwidget);
        pushButton_muns->setObjectName("pushButton_muns");
        pushButton_muns->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout_3->addWidget(pushButton_muns);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_number1 = new QPushButton(centralwidget);
        pushButton_number1->setObjectName("pushButton_number1");

        horizontalLayout_4->addWidget(pushButton_number1);

        pushButton_number2 = new QPushButton(centralwidget);
        pushButton_number2->setObjectName("pushButton_number2");

        horizontalLayout_4->addWidget(pushButton_number2);

        pushButton_number3 = new QPushButton(centralwidget);
        pushButton_number3->setObjectName("pushButton_number3");

        horizontalLayout_4->addWidget(pushButton_number3);

        pushButton_Plus = new QPushButton(centralwidget);
        pushButton_Plus->setObjectName("pushButton_Plus");
        pushButton_Plus->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout_4->addWidget(pushButton_Plus);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_33 = new QPushButton(centralwidget);
        pushButton_33->setObjectName("pushButton_33");

        horizontalLayout_5->addWidget(pushButton_33);

        pushButton_number0 = new QPushButton(centralwidget);
        pushButton_number0->setObjectName("pushButton_number0");

        horizontalLayout_5->addWidget(pushButton_number0);

        pushButton_Point = new QPushButton(centralwidget);
        pushButton_Point->setObjectName("pushButton_Point");

        horizontalLayout_5->addWidget(pushButton_Point);

        pushButton_equale = new QPushButton(centralwidget);
        pushButton_equale->setObjectName("pushButton_equale");
        pushButton_equale->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 158, 79);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(pushButton_equale);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 395, 25));
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
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_Clear->setText(QString());
        pushButton_Persntag->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_Davision->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_number7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_number8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_number9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_Multipel->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_number4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_number5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_number6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_muns->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_number1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_number2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_number3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_33->setText(QString());
        pushButton_number0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_equale->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
