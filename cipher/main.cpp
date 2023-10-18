#include "symmetric.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    symmetric w;
    w.show();
    return a.exec();
}
