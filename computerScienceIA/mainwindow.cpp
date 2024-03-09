#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "interval.cpp"
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //create model
    model = new QStringListModel(this);
    
    Interval interval(std::chrono::system_clock::now(), 5);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tasksList_clicked(const QModelIndex &index)
{

}

