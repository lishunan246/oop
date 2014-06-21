#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow :: MainWindow( QWidget *parent ) :
    QMainWindow( parent ),
    ui( new Ui::MainWindow ),
    adminwigdet( new admin(this) ),
    studentwigdet( new student(this)),
    teacherwigdet( new teacher(this))
{
    ui->setupUi(this);
}

MainWindow :: ~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginbtn_clicked()
{
        this->hide();
//        adminwigdet->show();
        studentwigdet->show();
        studentwigdet->exec();
        this->show();
  //      teacherwigdet->show();
}
