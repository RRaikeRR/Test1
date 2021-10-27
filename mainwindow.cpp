//////////include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->groupBox->hide();
    ui->lcdNumber_9->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_9->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber_10->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_10->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber_15->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_15->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber_16->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_16->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber_17->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_17->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber->setSegmentStyle(QLCDNumber::Flat);

    ui->lcdNumber->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_2->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_3->setStyleSheet("background-color: darkCyan; color: black");
    ui->progressBar->setStyleSheet("selection-background-color: rgb(117, 80, 123)");
    ui->horizontalSlider->setStyleSheet("selection-background-color: darkCyan");

    ui->lcdNumber_8->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_8->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_5->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber_6->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_6->setStyleSheet("background-color: darkCyan; color: black");
    ui->lcdNumber_7->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_7->setStyleSheet("background-color: darkCyan; color: black");
    ui->progressBar_2->setStyleSheet("selection-background-color: rgb(117, 80, 123)");

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);

    table = ui->tableWidget->rowCount();

//    for (int i=0; i<table; i++)
//    {

//        ui->tableWidget->verticalHeader()->setSectionResizeMode(i,QHeaderView::Stretch);

//    }


    connect(ui->spinBox,SIGNAL(valueChanged(int)),ui->lcdNumber,SLOT(display(int)));
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
   if(test == 1){
       setFixedSize(964,617);
       setMaximumSize(9999,8888);
       ui->groupBox->show();
       test = 0;
   } else {
       ui->groupBox->hide();
       test = 1;
setFixedSize(790,617);
   setMaximumSize(9999,8888);
   }

}

void MainWindow::on_pushButton_11_clicked()
{
    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()-1);
}

//void MainWindow::on_pushButton_13_clicked()
//{
//    if(test == 1){
//        setFixedSize(964,617);
//        setMaximumSize(9999,8888);
//        ui->groupBox->show();
//        test = 0;
//    } else {
//        ui->groupBox->hide();
//        test = 1;
// setFixedSize(790,617);
//    setMaximumSize(9999,8888);
//    }
//}

void MainWindow::on_pushButton_6_clicked()
{
    ui->pushButton_6->setStyleSheet("background-color: darkCyan");
    ui->pushButton_7->setStyleSheet(QString());
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->pushButton_7->setStyleSheet("background-color: darkCyan");
    ui->pushButton_6->setStyleSheet(QString());
}
