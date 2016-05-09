/********************************************************************************
** Form generated from reading UI file 'mdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDIALOG_H
#define UI_MDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include "glwidget1.h"

QT_BEGIN_NAMESPACE

class Ui_MDialog
{
public:
    QPushButton *close;
    GLWidget1 *widget;
    QSlider *horizontalSlider;
    QLabel *angleMap;
    QLabel *moveMap;
    QSlider *horizontalSlider_2;
    QPushButton *zoomMapIn;
    QPushButton *moveMapPX;
    QPushButton *moveMapPY;
    QPushButton *rotateMapPX;
    QPushButton *rotateMapPY;
    QPushButton *rotateMapPZ;
    QPushButton *zoomMapOut;
    QPushButton *moveMapMX;
    QPushButton *moveMapMY;
    QPushButton *rotateMapMX;
    QPushButton *rotateMapMY;
    QPushButton *rotateMapMZ;

    void setupUi(QDialog *MDialog)
    {
        if (MDialog->objectName().isEmpty())
            MDialog->setObjectName(QStringLiteral("MDialog"));
        MDialog->resize(607, 465);
        close = new QPushButton(MDialog);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(510, 352, 80, 101));
        close->setStyleSheet(QLatin1String("#close{\n"
"background-color: rgb(255, 0, 0);\n"
"}"));
        widget = new GLWidget1(MDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 581, 331));
        widget->setStyleSheet(QLatin1String("#widget{\n"
"border:3px solid gray;\n"
"\n"
"}"));
        horizontalSlider = new QSlider(MDialog);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(60, 350, 431, 16));
        horizontalSlider->setMinimum(5);
        horizontalSlider->setMaximum(360);
        horizontalSlider->setOrientation(Qt::Horizontal);
        angleMap = new QLabel(MDialog);
        angleMap->setObjectName(QStringLiteral("angleMap"));
        angleMap->setGeometry(QRect(10, 350, 41, 16));
        moveMap = new QLabel(MDialog);
        moveMap->setObjectName(QStringLiteral("moveMap"));
        moveMap->setGeometry(QRect(10, 370, 41, 16));
        horizontalSlider_2 = new QSlider(MDialog);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(60, 370, 431, 16));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        zoomMapIn = new QPushButton(MDialog);
        zoomMapIn->setObjectName(QStringLiteral("zoomMapIn"));
        zoomMapIn->setGeometry(QRect(10, 400, 81, 23));
        moveMapPX = new QPushButton(MDialog);
        moveMapPX->setObjectName(QStringLiteral("moveMapPX"));
        moveMapPX->setGeometry(QRect(90, 400, 80, 23));
        moveMapPY = new QPushButton(MDialog);
        moveMapPY->setObjectName(QStringLiteral("moveMapPY"));
        moveMapPY->setGeometry(QRect(170, 400, 80, 23));
        rotateMapPX = new QPushButton(MDialog);
        rotateMapPX->setObjectName(QStringLiteral("rotateMapPX"));
        rotateMapPX->setGeometry(QRect(250, 400, 80, 23));
        rotateMapPY = new QPushButton(MDialog);
        rotateMapPY->setObjectName(QStringLiteral("rotateMapPY"));
        rotateMapPY->setGeometry(QRect(330, 400, 80, 23));
        rotateMapPZ = new QPushButton(MDialog);
        rotateMapPZ->setObjectName(QStringLiteral("rotateMapPZ"));
        rotateMapPZ->setGeometry(QRect(410, 400, 80, 23));
        zoomMapOut = new QPushButton(MDialog);
        zoomMapOut->setObjectName(QStringLiteral("zoomMapOut"));
        zoomMapOut->setGeometry(QRect(10, 430, 80, 23));
        moveMapMX = new QPushButton(MDialog);
        moveMapMX->setObjectName(QStringLiteral("moveMapMX"));
        moveMapMX->setGeometry(QRect(90, 430, 80, 23));
        moveMapMY = new QPushButton(MDialog);
        moveMapMY->setObjectName(QStringLiteral("moveMapMY"));
        moveMapMY->setGeometry(QRect(170, 430, 80, 23));
        rotateMapMX = new QPushButton(MDialog);
        rotateMapMX->setObjectName(QStringLiteral("rotateMapMX"));
        rotateMapMX->setGeometry(QRect(250, 430, 80, 23));
        rotateMapMY = new QPushButton(MDialog);
        rotateMapMY->setObjectName(QStringLiteral("rotateMapMY"));
        rotateMapMY->setGeometry(QRect(330, 430, 80, 23));
        rotateMapMZ = new QPushButton(MDialog);
        rotateMapMZ->setObjectName(QStringLiteral("rotateMapMZ"));
        rotateMapMZ->setGeometry(QRect(410, 430, 80, 23));
        horizontalSlider_2->raise();
        close->raise();
        widget->raise();
        horizontalSlider->raise();
        angleMap->raise();
        moveMap->raise();
        zoomMapIn->raise();
        moveMapPX->raise();
        moveMapPY->raise();
        rotateMapPX->raise();
        rotateMapPY->raise();
        rotateMapPZ->raise();
        zoomMapOut->raise();
        moveMapMX->raise();
        moveMapMY->raise();
        rotateMapMX->raise();
        rotateMapMY->raise();
        rotateMapMZ->raise();

        retranslateUi(MDialog);

        QMetaObject::connectSlotsByName(MDialog);
    } // setupUi

    void retranslateUi(QDialog *MDialog)
    {
        MDialog->setWindowTitle(QApplication::translate("MDialog", "Dialog", 0));
        close->setText(QApplication::translate("MDialog", "Close", 0));
#ifndef QT_NO_TOOLTIP
        widget->setToolTip(QApplication::translate("MDialog", "Mapped", 0));
#endif // QT_NO_TOOLTIP
        angleMap->setText(QApplication::translate("MDialog", "Angle", 0));
        moveMap->setText(QApplication::translate("MDialog", "Move", 0));
        zoomMapIn->setText(QApplication::translate("MDialog", "Zoom In", 0));
        moveMapPX->setText(QApplication::translate("MDialog", "Move +X", 0));
        moveMapPY->setText(QApplication::translate("MDialog", "Move +Y", 0));
        rotateMapPX->setText(QApplication::translate("MDialog", "Rotate +X", 0));
        rotateMapPY->setText(QApplication::translate("MDialog", "Rotate +Y", 0));
        rotateMapPZ->setText(QApplication::translate("MDialog", "Rotate +Z", 0));
        zoomMapOut->setText(QApplication::translate("MDialog", "Zoom Out", 0));
        moveMapMX->setText(QApplication::translate("MDialog", "Move -X", 0));
        moveMapMY->setText(QApplication::translate("MDialog", "Move -Y", 0));
        rotateMapMX->setText(QApplication::translate("MDialog", "Rotate -X", 0));
        rotateMapMY->setText(QApplication::translate("MDialog", "Rotate -Y", 0));
        rotateMapMZ->setText(QApplication::translate("MDialog", "Rotate -Z", 0));
    } // retranslateUi

};

namespace Ui {
    class MDialog: public Ui_MDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDIALOG_H
