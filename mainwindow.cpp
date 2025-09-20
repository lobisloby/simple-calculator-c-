#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"siencdialog.h"
#include"qdebug.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
    // link numbers
    for(int i=0;i<=9;i++)
    {
        QString buttonName = QString("pushButton_number%1").arg(i);
        QPushButton *button = findChild<QPushButton*>(buttonName);
        if(button)
        {
            connect(button,&QPushButton::clicked,this, &MainWindow::onNumberButtonClicked);
        }
    }
    // links operations
    QStringList OperationNames = {"Plus","Multipel","muns","Davision"};
    for(const QString &op:OperationNames)
    {
        QString operationName = QString("pushButton_%1").arg(op);
        QPushButton *button = findChild<QPushButton*>(operationName);
        if(button){
            connect(button,&QPushButton::clicked,this, &MainWindow::onOperationButtonClicked);
        }
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onNumberButtonClicked()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button)
    {
        curentInput +=button->text();
        ui->textEdit->setText(curentInput+"\n");
    }
}

void MainWindow::onOperationButtonClicked()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button&& !curentInput.isEmpty())
    {
        previousInput=curentInput;
        operation=button->text();
        ui->textEdit->setText(operation);
        curentInput.clear();
    }
}

void MainWindow::on_pushButton_equale_clicked()
{
    if(curentInput.isEmpty() || previousInput.isEmpty())
    {
        ui->textEdit->setText("Error: Incomplete input");
        curentInput.clear();
        previousInput.clear();
        operation.clear();
        return;
    }
    double num1=previousInput.toDouble();
    double num2=curentInput.toDouble();
    if (operation == "/" && num2 == 0) {
        ui->textEdit->setText("Error");
        curentInput.clear();
        previousInput.clear();
        return;
    }
    if(operation=="/") {result=num1/num2;}
    else if(operation=="+") {result=num1+num2;}
    else if(operation=="-") {result=num1-num2;}
    else if(operation=="*") { result=num1*num2;}
    else
    {
        ui->textEdit->setText("Error: Invalid operation");
        curentInput.clear();
        previousInput.clear();
        operation.clear();
        return;
    }
    QString expression;
    if(operation!="/")
        expression = QString("   %1 \n%2 %3 \n _____\n = %4")
            .arg(num1)
            .arg(operation)
            .arg(num2)
            .arg(result);
    else
        expression = QString(" %1  | %2  \n"
                            "       |_____\n"
                            "       |     \n"
                            "       |     \n"
                            "=  %3  |     ").arg(num1).arg(num2).arg(result);

    ui->textEdit->setText(expression);
    curentInput=QString::number(result);
    previousInput.clear();
}


void MainWindow::on_pushButton_Clear_clicked()
{
    ui->textEdit->clear();
    curentInput.clear();
    previousInput.clear();
}


void MainWindow::on_pushButton_33_clicked()
{
    hide();
    siencDialog = new SiencDialog(this);
    siencDialog->show();
}

