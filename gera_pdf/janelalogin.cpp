#include "janelalogin.h"
#include "ui_janelalogin.h"
#include "tela_principal.h"
#include <QString>
#include <QMessageBox>

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);
    setWindowTitle("Acesso");
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}

void JanelaLogin::on_btn_login_clicked()
{
    QString user = ui->txt_user->text();
    QString senha = ui->txt_senha->text();

    if((user == "admin1" && senha == "12345") || (user == "admin2" && senha == "12345")) {
        this->close();
        tela_principal tela_principal(this, user, senha);
        tela_principal.setModal(true);
        tela_principal.setWindowTitle("Bem-Vindo, " + user);
        tela_principal.exec();
    } else {
        QMessageBox::critical(this, "Atenção", "Usuário e/ou senha incorretos");
        ui->txt_user->clear();
        ui->txt_senha->clear();
        ui->txt_user->setFocus();
    }
}
