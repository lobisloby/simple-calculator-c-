#ifndef SIENCDIALOG_H
#define SIENCDIALOG_H

#include <QDialog>


namespace Ui {
class SiencDialog;
}

class SiencDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SiencDialog(QWidget *parent = nullptr);
    ~SiencDialog();

private slots:
    void on_pushButton_2nd_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_Clear_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_deg_clicked();

    void on_pushButton_equale_clicked();

private:
    Ui::SiencDialog *ui;
    void onNumberButtonClicked();
    void onOperationButtonClicked();
    void onExpresionButtonClicked();
    bool secondMode = false;
    QString curentInput;
    QString previousInput;
    QString operation;
    QString expresion;
    bool isDegmode=false;
};

#endif // SIENCDIALOG_H
