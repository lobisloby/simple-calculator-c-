/********************************************************************************
** Form generated from reading UI file 'siencdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIENCDIALOG_H
#define UI_SIENCDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SiencDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QTextEdit *textEdit1;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_deg;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_2nd;
    QPushButton *pushButton_xy;
    QPushButton *pushButton_log;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_kwsl;
    QPushButton *pushButton_kwsr;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_jdrx;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_Persntag;
    QPushButton *pushButton_Davision;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Factorial;
    QPushButton *pushButton_number7;
    QPushButton *pushButton_number8;
    QPushButton *pushButton_number9;
    QPushButton *pushButton_Multipel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_inverse;
    QPushButton *pushButton_number4;
    QPushButton *pushButton_number5;
    QPushButton *pushButton_number6;
    QPushButton *pushButton_muns;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_Pi;
    QPushButton *pushButton_number1;
    QPushButton *pushButton_number2;
    QPushButton *pushButton_number3;
    QPushButton *pushButton_Plus;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_33;
    QPushButton *pushButton_number0;
    QPushButton *pushButton_Point;
    QPushButton *pushButton_equale;

    void setupUi(QDialog *SiencDialog)
    {
        if (SiencDialog->objectName().isEmpty())
            SiencDialog->setObjectName("SiencDialog");
        SiencDialog->resize(498, 650);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SiencDialog->sizePolicy().hasHeightForWidth());
        SiencDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SiencDialog);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(SiencDialog);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(frame);
        label->setObjectName("label");

        verticalLayout_4->addWidget(label);

        textEdit1 = new QTextEdit(frame);
        textEdit1->setObjectName("textEdit1");

        verticalLayout_4->addWidget(textEdit1);


        verticalLayout->addWidget(frame);

        frame_3 = new QFrame(SiencDialog);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName("gridLayout");
        pushButton_sin = new QPushButton(frame_2);
        pushButton_sin->setObjectName("pushButton_sin");

        gridLayout->addWidget(pushButton_sin, 0, 2, 1, 1);

        pushButton_deg = new QPushButton(frame_2);
        pushButton_deg->setObjectName("pushButton_deg");

        gridLayout->addWidget(pushButton_deg, 0, 1, 1, 1);

        pushButton_tan = new QPushButton(frame_2);
        pushButton_tan->setObjectName("pushButton_tan");

        gridLayout->addWidget(pushButton_tan, 0, 4, 1, 1);

        pushButton_cos = new QPushButton(frame_2);
        pushButton_cos->setObjectName("pushButton_cos");

        gridLayout->addWidget(pushButton_cos, 0, 3, 1, 1);

        pushButton_2nd = new QPushButton(frame_2);
        pushButton_2nd->setObjectName("pushButton_2nd");

        gridLayout->addWidget(pushButton_2nd, 0, 0, 1, 1);

        pushButton_xy = new QPushButton(frame_2);
        pushButton_xy->setObjectName("pushButton_xy");

        gridLayout->addWidget(pushButton_xy, 1, 0, 1, 1);

        pushButton_log = new QPushButton(frame_2);
        pushButton_log->setObjectName("pushButton_log");

        gridLayout->addWidget(pushButton_log, 1, 1, 1, 1);

        pushButton_ln = new QPushButton(frame_2);
        pushButton_ln->setObjectName("pushButton_ln");

        gridLayout->addWidget(pushButton_ln, 1, 2, 1, 1);

        pushButton_kwsl = new QPushButton(frame_2);
        pushButton_kwsl->setObjectName("pushButton_kwsl");

        gridLayout->addWidget(pushButton_kwsl, 1, 3, 1, 1);

        pushButton_kwsr = new QPushButton(frame_2);
        pushButton_kwsr->setObjectName("pushButton_kwsr");

        gridLayout->addWidget(pushButton_kwsr, 1, 4, 1, 1);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer = new QSpacerItem(10, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_jdrx = new QPushButton(frame_3);
        pushButton_jdrx->setObjectName("pushButton_jdrx");

        horizontalLayout->addWidget(pushButton_jdrx);

        pushButton_AC = new QPushButton(frame_3);
        pushButton_AC->setObjectName("pushButton_AC");
        pushButton_AC->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout->addWidget(pushButton_AC);

        pushButton_Clear = new QPushButton(frame_3);
        pushButton_Clear->setObjectName("pushButton_Clear");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_Clear->sizePolicy().hasHeightForWidth());
        pushButton_Clear->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/Calculator/delete (2).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Clear->setIcon(icon);
        pushButton_Clear->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton_Clear);

        pushButton_Persntag = new QPushButton(frame_3);
        pushButton_Persntag->setObjectName("pushButton_Persntag");
        pushButton_Persntag->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout->addWidget(pushButton_Persntag);

        pushButton_Davision = new QPushButton(frame_3);
        pushButton_Davision->setObjectName("pushButton_Davision");
        pushButton_Davision->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout->addWidget(pushButton_Davision);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_Factorial = new QPushButton(frame_3);
        pushButton_Factorial->setObjectName("pushButton_Factorial");

        horizontalLayout_2->addWidget(pushButton_Factorial);

        pushButton_number7 = new QPushButton(frame_3);
        pushButton_number7->setObjectName("pushButton_number7");

        horizontalLayout_2->addWidget(pushButton_number7);

        pushButton_number8 = new QPushButton(frame_3);
        pushButton_number8->setObjectName("pushButton_number8");

        horizontalLayout_2->addWidget(pushButton_number8);

        pushButton_number9 = new QPushButton(frame_3);
        pushButton_number9->setObjectName("pushButton_number9");

        horizontalLayout_2->addWidget(pushButton_number9);

        pushButton_Multipel = new QPushButton(frame_3);
        pushButton_Multipel->setObjectName("pushButton_Multipel");
        pushButton_Multipel->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout_2->addWidget(pushButton_Multipel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_inverse = new QPushButton(frame_3);
        pushButton_inverse->setObjectName("pushButton_inverse");

        horizontalLayout_3->addWidget(pushButton_inverse);

        pushButton_number4 = new QPushButton(frame_3);
        pushButton_number4->setObjectName("pushButton_number4");

        horizontalLayout_3->addWidget(pushButton_number4);

        pushButton_number5 = new QPushButton(frame_3);
        pushButton_number5->setObjectName("pushButton_number5");

        horizontalLayout_3->addWidget(pushButton_number5);

        pushButton_number6 = new QPushButton(frame_3);
        pushButton_number6->setObjectName("pushButton_number6");

        horizontalLayout_3->addWidget(pushButton_number6);

        pushButton_muns = new QPushButton(frame_3);
        pushButton_muns->setObjectName("pushButton_muns");
        pushButton_muns->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout_3->addWidget(pushButton_muns);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_Pi = new QPushButton(frame_3);
        pushButton_Pi->setObjectName("pushButton_Pi");

        horizontalLayout_4->addWidget(pushButton_Pi);

        pushButton_number1 = new QPushButton(frame_3);
        pushButton_number1->setObjectName("pushButton_number1");

        horizontalLayout_4->addWidget(pushButton_number1);

        pushButton_number2 = new QPushButton(frame_3);
        pushButton_number2->setObjectName("pushButton_number2");

        horizontalLayout_4->addWidget(pushButton_number2);

        pushButton_number3 = new QPushButton(frame_3);
        pushButton_number3->setObjectName("pushButton_number3");

        horizontalLayout_4->addWidget(pushButton_number3);

        pushButton_Plus = new QPushButton(frame_3);
        pushButton_Plus->setObjectName("pushButton_Plus");
        pushButton_Plus->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 79);"));

        horizontalLayout_4->addWidget(pushButton_Plus);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_33 = new QPushButton(frame_3);
        pushButton_33->setObjectName("pushButton_33");

        horizontalLayout_5->addWidget(pushButton_33);

        pushButton_number0 = new QPushButton(frame_3);
        pushButton_number0->setObjectName("pushButton_number0");

        horizontalLayout_5->addWidget(pushButton_number0);

        pushButton_Point = new QPushButton(frame_3);
        pushButton_Point->setObjectName("pushButton_Point");

        horizontalLayout_5->addWidget(pushButton_Point);

        pushButton_equale = new QPushButton(frame_3);
        pushButton_equale->setObjectName("pushButton_equale");
        pushButton_equale->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 158, 79);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(pushButton_equale);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(frame_3);


        retranslateUi(SiencDialog);

        QMetaObject::connectSlotsByName(SiencDialog);
    } // setupUi

    void retranslateUi(QDialog *SiencDialog)
    {
        SiencDialog->setWindowTitle(QCoreApplication::translate("SiencDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SiencDialog", "Sientise Calculator", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("SiencDialog", "sin", nullptr));
        pushButton_deg->setText(QCoreApplication::translate("SiencDialog", "deg", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("SiencDialog", "tan", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("SiencDialog", "cos", nullptr));
        pushButton_2nd->setText(QCoreApplication::translate("SiencDialog", "2nd", nullptr));
        pushButton_xy->setText(QCoreApplication::translate("SiencDialog", "x \312\270", nullptr));
        pushButton_log->setText(QCoreApplication::translate("SiencDialog", "log", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("SiencDialog", "ln", nullptr));
        pushButton_kwsl->setText(QCoreApplication::translate("SiencDialog", "(", nullptr));
        pushButton_kwsr->setText(QCoreApplication::translate("SiencDialog", ")", nullptr));
        pushButton_jdrx->setText(QCoreApplication::translate("SiencDialog", "\342\210\232x", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("SiencDialog", "AC", nullptr));
        pushButton_Clear->setText(QString());
        pushButton_Persntag->setText(QCoreApplication::translate("SiencDialog", "%", nullptr));
        pushButton_Davision->setText(QCoreApplication::translate("SiencDialog", "/", nullptr));
        pushButton_Factorial->setText(QCoreApplication::translate("SiencDialog", "x!", nullptr));
        pushButton_number7->setText(QCoreApplication::translate("SiencDialog", "7", nullptr));
        pushButton_number8->setText(QCoreApplication::translate("SiencDialog", "8", nullptr));
        pushButton_number9->setText(QCoreApplication::translate("SiencDialog", "9", nullptr));
        pushButton_Multipel->setText(QCoreApplication::translate("SiencDialog", "*", nullptr));
        pushButton_inverse->setText(QCoreApplication::translate("SiencDialog", "1/x", nullptr));
        pushButton_number4->setText(QCoreApplication::translate("SiencDialog", "4", nullptr));
        pushButton_number5->setText(QCoreApplication::translate("SiencDialog", "5", nullptr));
        pushButton_number6->setText(QCoreApplication::translate("SiencDialog", "6", nullptr));
        pushButton_muns->setText(QCoreApplication::translate("SiencDialog", "-", nullptr));
        pushButton_Pi->setText(QCoreApplication::translate("SiencDialog", "\317\200", nullptr));
        pushButton_number1->setText(QCoreApplication::translate("SiencDialog", "1", nullptr));
        pushButton_number2->setText(QCoreApplication::translate("SiencDialog", "2", nullptr));
        pushButton_number3->setText(QCoreApplication::translate("SiencDialog", "3", nullptr));
        pushButton_Plus->setText(QCoreApplication::translate("SiencDialog", "+", nullptr));
        pushButton_33->setText(QString());
        pushButton_number0->setText(QCoreApplication::translate("SiencDialog", "0", nullptr));
        pushButton_Point->setText(QCoreApplication::translate("SiencDialog", ".", nullptr));
        pushButton_equale->setText(QCoreApplication::translate("SiencDialog", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SiencDialog: public Ui_SiencDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIENCDIALOG_H
