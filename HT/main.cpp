#include <QApplication>
#include "HT.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QDialog_HT *HTDialog = new QDialog_HT;
    HTDialog->show();
    return app.exec();
}