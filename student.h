#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>
#include "ui_student.h"

namespace Ui{
class student;
}

class student : public QDialog,
                public Ui_student
{
    Q_OBJECT
public:
    explicit student(QWidget *parent = 0);
    ~student();

signals:

public slots:

private slots:
    void on_logout_clicked();

private:
    Ui :: student *ui;
};

#endif // STUDENT_H
