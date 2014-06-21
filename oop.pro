#-------------------------------------------------
#
# Project created by QtCreator 2014-06-20T20:01:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = oop
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    admin.cpp \
    student.cpp \
    teacher.cpp

HEADERS  += mainwindow.h \
    admin.h \
    student.h \
    teacher.h

FORMS    += mainwindow.ui \
    admin.ui \
    student.ui \
    teacher.ui
