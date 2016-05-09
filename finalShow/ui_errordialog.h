/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ErrorDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *ErrorDialog)
    {
        if (ErrorDialog->objectName().isEmpty())
            ErrorDialog->setObjectName(QStringLiteral("ErrorDialog"));
        ErrorDialog->resize(439, 174);
        buttonBox = new QDialogButtonBox(ErrorDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(80, 120, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ErrorDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 401, 81));
        label->setStyleSheet(QLatin1String("#label{\n"
"	color: rgb(255, 0, 0);\n"
"	font: 10pt \"Sans Serif\";\n"
"	\n"
"}\n"
""));

        retranslateUi(ErrorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ErrorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ErrorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorDialog)
    {
        ErrorDialog->setWindowTitle(QApplication::translate("ErrorDialog", "Dialog", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("ErrorDialog", "Error", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ErrorDialog: public Ui_ErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
