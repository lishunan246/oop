#ifndef TEACHER_H
#define TEACHER_H

#include <QDialog>
#include "ui_teacher.h"

namespace Ui{
class teacher;
}

class teacher : public QDialog,
                public Ui_teacher
{
    Q_OBJECT
public:
    explicit teacher(QWidget *parent = 0);
    ~teacher();
signals:

public slots:

private:
    Ui::teacher *ui;
};

#endif // TEACHER_H
