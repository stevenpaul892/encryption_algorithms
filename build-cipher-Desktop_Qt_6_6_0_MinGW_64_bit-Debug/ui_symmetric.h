/********************************************************************************
** Form generated from reading UI file 'symmetric.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMMETRIC_H
#define UI_SYMMETRIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_symmetric
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *symmetric)
    {
        if (symmetric->objectName().isEmpty())
            symmetric->setObjectName("symmetric");
        symmetric->resize(800, 600);
        centralwidget = new QWidget(symmetric);
        centralwidget->setObjectName("centralwidget");
        symmetric->setCentralWidget(centralwidget);
        menubar = new QMenuBar(symmetric);
        menubar->setObjectName("menubar");
        symmetric->setMenuBar(menubar);
        statusbar = new QStatusBar(symmetric);
        statusbar->setObjectName("statusbar");
        symmetric->setStatusBar(statusbar);

        retranslateUi(symmetric);

        QMetaObject::connectSlotsByName(symmetric);
    } // setupUi

    void retranslateUi(QMainWindow *symmetric)
    {
        symmetric->setWindowTitle(QCoreApplication::translate("symmetric", "symmetric", nullptr));
    } // retranslateUi

};

namespace Ui {
    class symmetric: public Ui_symmetric {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMMETRIC_H
