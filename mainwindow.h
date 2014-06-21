#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "admin.h"
#include "student.h"
#include "teacher.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow,
                   public Ui_MainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_loginbtn_clicked();

private:
    Ui :: MainWindow *ui;
    admin *adminwigdet;
    student *studentwigdet;
    teacher *teacherwigdet;
};

#endif // MAINWINDOW_H
