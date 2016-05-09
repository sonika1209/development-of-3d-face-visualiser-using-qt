/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *openWrl;
    QPushButton *openImg;
    QLabel *error_label;
    QLabel *wrl_path;
    QLabel *image_path;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        Dialog->setStyleSheet(QLatin1String("#wrl_path{\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"border-width: 1px;\n"
"}\n"
"\n"
"#image_path{\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"border-width: 1px;\n"
"}\n"
""));
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 240, 341, 32));
        buttonBox->setStyleSheet(QStringLiteral(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        openWrl = new QPushButton(Dialog);
        openWrl->setObjectName(QStringLiteral("openWrl"));
        openWrl->setGeometry(QRect(20, 100, 81, 23));
        openImg = new QPushButton(Dialog);
        openImg->setObjectName(QStringLiteral("openImg"));
        openImg->setGeometry(QRect(20, 140, 81, 23));
        error_label = new QLabel(Dialog);
        error_label->setObjectName(QStringLiteral("error_label"));
        error_label->setGeometry(QRect(20, 55, 361, 21));
        error_label->setStyleSheet(QStringLiteral(""));
        wrl_path = new QLabel(Dialog);
        wrl_path->setObjectName(QStringLiteral("wrl_path"));
        wrl_path->setGeometry(QRect(110, 100, 271, 21));
        wrl_path->setContextMenuPolicy(Qt::NoContextMenu);
        wrl_path->setAutoFillBackground(false);
        wrl_path->setStyleSheet(QLatin1String("QLabel{\n"
"rgb(255, 255, 255)\n"
"\n"
"}"));
        image_path = new QLabel(Dialog);
        image_path->setObjectName(QStringLiteral("image_path"));
        image_path->setGeometry(QRect(110, 140, 271, 21));
        image_path->setAutoFillBackground(false);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Select Files", 0));
        openWrl->setText(QApplication::translate("Dialog", "Open Wrl", 0));
        openImg->setText(QApplication::translate("Dialog", "Open Image", 0));
        error_label->setText(QString());
        wrl_path->setText(QString());
        image_path->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
