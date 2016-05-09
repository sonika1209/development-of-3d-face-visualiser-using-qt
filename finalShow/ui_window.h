/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QWidget *centralWidget;
    GLWidget *widget;
    QLabel *label_pic;
    QLabel *Angle;
    QSlider *horizontalSlider;
    QLabel *label;
    QSlider *horizontalSlider_2;
    QPushButton *zoomIn;
    QPushButton *zoomOut;
    QPushButton *map;
    QPushButton *movePX;
    QPushButton *moveMX;
    QPushButton *movePY;
    QPushButton *moveMY;
    QPushButton *rotatePX;
    QPushButton *rotateMY;
    QPushButton *rotateMX;
    QPushButton *rotatePY;
    QPushButton *rotatePZ;
    QPushButton *rotateMZ;
    QPushButton *closemain;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->resize(750, 560);
        centralWidget = new QWidget(Window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new GLWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 421, 361));
        widget->setStyleSheet(QLatin1String("#widget{\n"
"border:3px solid gray;\n"
"}"));
        label_pic = new QLabel(centralWidget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(460, 10, 271, 361));
        label_pic->setStyleSheet(QLatin1String("#label_pic{\n"
"border:3px solid gray;\n"
"}"));
        label_pic->setFrameShadow(QFrame::Plain);
        Angle = new QLabel(centralWidget);
        Angle->setObjectName(QStringLiteral("Angle"));
        Angle->setGeometry(QRect(10, 390, 41, 16));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(50, 390, 381, 16));
        horizontalSlider->setMinimum(5);
        horizontalSlider->setMaximum(360);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 410, 41, 16));
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(50, 410, 381, 16));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        zoomIn = new QPushButton(centralWidget);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(10, 440, 71, 23));
        zoomIn->setStyleSheet(QStringLiteral(""));
        zoomOut = new QPushButton(centralWidget);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(10, 470, 71, 23));
        map = new QPushButton(centralWidget);
        map->setObjectName(QStringLiteral("map"));
        map->setGeometry(QRect(460, 390, 271, 41));
        map->setStyleSheet(QLatin1String("#map{\n"
"	\n"
"	background-color: rgb(85, 170, 255);\n"
"}"));
        map->setIconSize(QSize(16, 16));
        map->setAutoDefault(false);
        movePX = new QPushButton(centralWidget);
        movePX->setObjectName(QStringLiteral("movePX"));
        movePX->setGeometry(QRect(80, 440, 71, 23));
        moveMX = new QPushButton(centralWidget);
        moveMX->setObjectName(QStringLiteral("moveMX"));
        moveMX->setGeometry(QRect(80, 470, 71, 23));
        movePY = new QPushButton(centralWidget);
        movePY->setObjectName(QStringLiteral("movePY"));
        movePY->setGeometry(QRect(150, 440, 71, 23));
        moveMY = new QPushButton(centralWidget);
        moveMY->setObjectName(QStringLiteral("moveMY"));
        moveMY->setGeometry(QRect(150, 470, 71, 23));
        rotatePX = new QPushButton(centralWidget);
        rotatePX->setObjectName(QStringLiteral("rotatePX"));
        rotatePX->setGeometry(QRect(220, 440, 71, 23));
        rotateMY = new QPushButton(centralWidget);
        rotateMY->setObjectName(QStringLiteral("rotateMY"));
        rotateMY->setGeometry(QRect(290, 470, 71, 23));
        rotateMX = new QPushButton(centralWidget);
        rotateMX->setObjectName(QStringLiteral("rotateMX"));
        rotateMX->setGeometry(QRect(220, 470, 71, 23));
        rotatePY = new QPushButton(centralWidget);
        rotatePY->setObjectName(QStringLiteral("rotatePY"));
        rotatePY->setGeometry(QRect(290, 440, 71, 23));
        rotatePZ = new QPushButton(centralWidget);
        rotatePZ->setObjectName(QStringLiteral("rotatePZ"));
        rotatePZ->setGeometry(QRect(360, 440, 71, 23));
        rotateMZ = new QPushButton(centralWidget);
        rotateMZ->setObjectName(QStringLiteral("rotateMZ"));
        rotateMZ->setGeometry(QRect(360, 470, 71, 23));
        closemain = new QPushButton(centralWidget);
        closemain->setObjectName(QStringLiteral("closemain"));
        closemain->setGeometry(QRect(460, 450, 271, 41));
        closemain->setStyleSheet(QLatin1String("#closemain{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
""));
        Window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 20));
        Window->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Window);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Window->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Window);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Window->setStatusBar(statusBar);

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Main", 0));
        label_pic->setText(QString());
        Angle->setText(QApplication::translate("Window", "Angle", 0));
        label->setText(QApplication::translate("Window", "Move", 0));
        zoomIn->setText(QApplication::translate("Window", "Zoom In", 0));
        zoomOut->setText(QApplication::translate("Window", "Zoom Out", 0));
        map->setText(QApplication::translate("Window", "MAP", 0));
        movePX->setText(QApplication::translate("Window", "Move +X", 0));
        moveMX->setText(QApplication::translate("Window", "Move -X", 0));
        movePY->setText(QApplication::translate("Window", "Move +Y", 0));
        moveMY->setText(QApplication::translate("Window", "Move -Y", 0));
        rotatePX->setText(QApplication::translate("Window", "Rotate +X", 0));
        rotateMY->setText(QApplication::translate("Window", "Rotate -Y", 0));
        rotateMX->setText(QApplication::translate("Window", "Rotate -X", 0));
        rotatePY->setText(QApplication::translate("Window", "Rotate +Y", 0));
        rotatePZ->setText(QApplication::translate("Window", "Rotate +Z", 0));
        rotateMZ->setText(QApplication::translate("Window", "Rotate -Z", 0));
        closemain->setText(QApplication::translate("Window", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
