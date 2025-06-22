#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_ 1

#include <qmainwindow.h>
#include <qaction.h>
#include "tabwidget.h"


class MainWindow: public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();


private:
    CTabWidget *tb;
};

#endif
