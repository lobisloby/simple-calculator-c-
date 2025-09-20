#include "mainwindow.h"

#include <QApplication>
#include"QIcon"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Calculator");
    w.setWindowIcon(QIcon(":/rec/Calculator/tools.png"));
    w.show();
    return a.exec();
}
