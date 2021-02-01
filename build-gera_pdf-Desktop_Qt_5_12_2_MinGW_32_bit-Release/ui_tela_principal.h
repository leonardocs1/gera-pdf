/********************************************************************************
** Form generated from reading UI file 'tela_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_PRINCIPAL_H
#define UI_TELA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela_principal
{
public:
    QLabel *label;
    QPushButton *btn_Gerar;

    void setupUi(QDialog *tela_principal)
    {
        if (tela_principal->objectName().isEmpty())
            tela_principal->setObjectName(QString::fromUtf8("tela_principal"));
        tela_principal->resize(840, 484);
        tela_principal->setStyleSheet(QString::fromUtf8(""));
        tela_principal->setSizeGripEnabled(false);
        tela_principal->setModal(false);
        label = new QLabel(tela_principal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 160, 521, 110));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        font.setPointSize(14);
        label->setFont(font);
        label->setCursor(QCursor(Qt::PointingHandCursor));
        btn_Gerar = new QPushButton(tela_principal);
        btn_Gerar->setObjectName(QString::fromUtf8("btn_Gerar"));
        btn_Gerar->setGeometry(QRect(610, 190, 111, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tahoma"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        btn_Gerar->setFont(font1);
        btn_Gerar->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: #48A0E7;\n"
"color: white;\n"
""));

        retranslateUi(tela_principal);

        QMetaObject::connectSlotsByName(tela_principal);
    } // setupUi

    void retranslateUi(QDialog *tela_principal)
    {
        tela_principal->setWindowTitle(QString());
        label->setText(QApplication::translate("tela_principal", "Gerar arquivo PDF com dados de usu\303\241rio Logado", nullptr));
        btn_Gerar->setText(QApplication::translate("tela_principal", "Gerar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_principal: public Ui_tela_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PRINCIPAL_H
