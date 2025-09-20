#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"siencdialog.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_equale_clicked();
    void onNumberButtonClicked();
    void onOperationButtonClicked();
    void on_pushButton_Clear_clicked();
    void on_pushButton_33_clicked();

private:
    Ui::MainWindow *ui;
    QString curentInput;
    QString previousInput;
    QString operation;
    double result;
    SiencDialog *siencDialog;
};
#endif // MAINWINDOW_H
