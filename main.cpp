#include "mainwindow.h"
#include "window2.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    window2 w;
    //MainWindow w;
    w.show();
    return a.exec();
}
