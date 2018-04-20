#-------------------------------------------------
#
# Project created by QtCreator 2018-04-16T16:44:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ConfigManager
TEMPLATE = app

INCLUDEPATH = include/mxml/
LIBS = -LD:/qtproj/ConfigManager/lib/mxml -lmxml1

SOURCES += main.cpp\
        mainwindow.cpp \
    xmlmanager.cpp \
    detector.cpp \
    strutils.cpp

HEADERS  += mainwindow.h \
    xmlmanager.h \
    detector.h \
    common.h \
    strutils.h

FORMS    += mainwindow.ui

RESOURCES += \
    stylesheet/image.qrc
