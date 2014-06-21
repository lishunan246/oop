#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include "ui_admin.h"

namespace Ui {
class admin;
}

class admin : public QDialog,
              public Ui_admin
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = 0);
    ~admin();
    friend class MainWindow;

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
