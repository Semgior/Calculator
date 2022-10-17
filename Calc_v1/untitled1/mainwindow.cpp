#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Чо у вас здесь происходит!");
}

void MainWindow::on_pushButton_RT_clicked()
{
    QString rt;
    rt.clear();
    rt.append(ui->lineEdit->text());
    ui->label->setText(rt);
}
