/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaLogin
{
public:
    QWidget *centralwidget;
    QLabel *lbl_user;
    QLabel *lbl_senha;
    QLabel *lbl_img;
    QLineEdit *txt_user;
    QLineEdit *txt_senha;
    QPushButton *btn_login;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName(QString::fromUtf8("JanelaLogin"));
        JanelaLogin->setEnabled(true);
        JanelaLogin->resize(494, 421);
        JanelaLogin->setMouseTracking(false);
        JanelaLogin->setTabletTracking(false);
        JanelaLogin->setStyleSheet(QString::fromUtf8("background-color: #F9F9F9;"));
        centralwidget = new QWidget(JanelaLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lbl_user = new QLabel(centralwidget);
        lbl_user->setObjectName(QString::fromUtf8("lbl_user"));
        lbl_user->setGeometry(QRect(200, 80, 81, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lbl_user->setFont(font);
        lbl_senha = new QLabel(centralwidget);
        lbl_senha->setObjectName(QString::fromUtf8("lbl_senha"));
        lbl_senha->setGeometry(QRect(200, 160, 61, 16));
        lbl_senha->setFont(font);
        lbl_img = new QLabel(centralwidget);
        lbl_img->setObjectName(QString::fromUtf8("lbl_img"));
        lbl_img->setGeometry(QRect(40, 110, 121, 121));
        lbl_img->setPixmap(QPixmap(QString::fromUtf8(":/img/user.png")));
        lbl_img->setScaledContents(true);
        txt_user = new QLineEdit(centralwidget);
        txt_user->setObjectName(QString::fromUtf8("txt_user"));
        txt_user->setGeometry(QRect(200, 110, 231, 41));
        QFont font1;
        font1.setPointSize(12);
        txt_user->setFont(font1);
        txt_user->setStyleSheet(QString::fromUtf8("background-color: #F1F8FE;"));
        txt_senha = new QLineEdit(centralwidget);
        txt_senha->setObjectName(QString::fromUtf8("txt_senha"));
        txt_senha->setGeometry(QRect(200, 190, 231, 41));
        QFont font2;
        font2.setPointSize(10);
        txt_senha->setFont(font2);
        txt_senha->setStyleSheet(QString::fromUtf8("background-color: #F1F8FE;"));
        txt_senha->setEchoMode(QLineEdit::Password);
        btn_login = new QPushButton(centralwidget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setGeometry(QRect(170, 280, 151, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Tahoma"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        btn_login->setFont(font3);
        btn_login->setCursor(QCursor(Qt::PointingHandCursor));
        btn_login->setMouseTracking(false);
        btn_login->setFocusPolicy(Qt::NoFocus);
        btn_login->setAutoFillBackground(false);
        btn_login->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: #48A0E7;\n"
"color: white;\n"
""));
        JanelaLogin->setCentralWidget(centralwidget);

        retranslateUi(JanelaLogin);

        QMetaObject::connectSlotsByName(JanelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaLogin)
    {
        JanelaLogin->setWindowTitle(QApplication::translate("JanelaLogin", "Acesso", nullptr));
        lbl_user->setText(QApplication::translate("JanelaLogin", "Usu\303\241rio", nullptr));
        lbl_senha->setText(QApplication::translate("JanelaLogin", "Senha", nullptr));
        lbl_img->setText(QString());
        btn_login->setText(QApplication::translate("JanelaLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
