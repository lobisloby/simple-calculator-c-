#include "siencdialog.h"
#include "ui_siencdialog.h"
#include"mathoperations.h"
#include"qdebug.h"

SiencDialog::SiencDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SiencDialog)
{
    ui->setupUi(this);
    ui->textEdit1->setReadOnly(true);
    this->setFixedSize(500, 600);
    // link number
    for (int i =0; i < 9; i++) {
        QString buttonName = QString("pushButton_number%1").arg(i);
        QPushButton *button = findChild<QPushButton*>(buttonName);
        if(button)
        {
            connect(button,&QPushButton::clicked,this,&SiencDialog::onNumberButtonClicked);
        }
    }
    // link operator
    QStringList OperationNames = {"Plus","Multipel","muns","Davision","inverse","Pi","xy","ln","log","Persntag"};
    for(const QString &op:OperationNames)
    {
        QString operationName = QString("pushButton_%1").arg(op);
        QPushButton *button = findChild<QPushButton*>(operationName);
        if(button){
            connect(button,&QPushButton::clicked,this, &SiencDialog::onOperationButtonClicked);
        }
    }
    QStringList expersion ={"kwsl","kwsr","Point","Pi"};
    for(const QString &op:expersion)
    {
        QString exptionName = QString("pushButton_%1").arg(op);
        QPushButton *button = findChild<QPushButton*>(exptionName);
        if(button)
        {
            connect(button,&QPushButton::clicked,this,&SiencDialog::onExpresionButtonClicked);
        }
    }
}

SiencDialog::~SiencDialog()
{
    delete ui;
}
// there we prepared the number in its container
void SiencDialog::onNumberButtonClicked()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button)
    {
        ui->textEdit1->setText(button->text()+"\n");
    }
}
// there we prepared the operators
void SiencDialog::onOperationButtonClicked()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button)
    {
        operation=button->text();
        ui->textEdit1->setText(operation);
    }
}

void SiencDialog::on_pushButton_2nd_clicked()
{
    secondMode =!secondMode;
    ui->pushButton_deg->setEnabled(!secondMode);
    if(secondMode)
    {
        ui->pushButton_sin->setText("sin⁻¹");
        ui->pushButton_cos->setText("cos⁻¹");
        ui->pushButton_tan->setText("tan⁻¹");
    }else{
        ui->pushButton_sin->setText("sin");
        ui->pushButton_cos->setText("cos");
        ui->pushButton_tan->setText("tan");
    }
}


void SiencDialog::on_pushButton_sin_clicked()
{
    double value = ui->textEdit1->toPlainText().toDouble();
    if((value<-1||value>1)&&secondMode)
    {
        ui->textEdit1->setText("Error");
        return;
    }
    else if (isDegmode){
        value = value * M_PI / 180.0;
    }
    double result = MathOperations::CalculSin(value,secondMode);
    if(isDegmode && secondMode)
    {
        result = result * 180.0 / M_PI;
    }
    ui->textEdit1->setText(QString::number(result));
}



void SiencDialog::on_pushButton_cos_clicked()
{
    double value = ui->textEdit1->toPlainText().toDouble();
    if((value<=-1||value>=1)&&secondMode)
    {
        ui->textEdit1->setText("Error");
        return;
    }
    else if (isDegmode){
        value = value * M_PI / 180.0;
    }
    double result = MathOperations::CalculCos(value,secondMode);
    if(isDegmode && secondMode)
    {
        result = result * 180.0 / M_PI;
    }
    ui->textEdit1->setText(QString::number(result));
}



void SiencDialog::on_pushButton_tan_clicked()
{
    double value = ui->textEdit1->toPlainText().toDouble();
    if((value<=-1||value>=1)&&secondMode)
    {
        ui->textEdit1->setText("Error");
        return;
    }
    else if (isDegmode){
        value = value * M_PI / 180.0;
    }
    double result = MathOperations::Calcultan(value,secondMode);
    if(isDegmode && secondMode)
    {
        result = result * 180.0 / M_PI;
    }
    ui->textEdit1->setText(QString::number(result));
}


void SiencDialog::on_pushButton_Clear_clicked()
{
    ui->textEdit1->clear();
    curentInput.clear();
}
// this function is to Page transition
void SiencDialog::on_pushButton_33_clicked()
{
    this->close();
    QWidget *parent = this->parentWidget();
    if(parent)
    {
        parent->show();
    }
}

void SiencDialog::on_pushButton_deg_clicked()
{
    isDegmode=!isDegmode;
    if(isDegmode)
    {
        ui->pushButton_deg->setText("deg");
    }
    else
    {
        ui->pushButton_deg->setText("rad");
    }
}


void SiencDialog::on_pushButton_equale_clicked()
{


}

void SiencDialog::onExpresionButtonClicked(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button)
    {
        expresion=button->text();
        if(expresion=="π"){
            ui->textEdit1->setText(expresion.replace("π",QString::number(M_PI)));
            return;
        }
        ui->textEdit1->setText(expresion);
    }
}

