#include "tela_principal.h"
#include "ui_tela_principal.h"
#include "janelalogin.h"
#include <QString>
#include <QPainter>
#include <QDir>
#include <QPrinter>
#include <QDebug>
#include <QMessageBox>

QString username;
QString password;

tela_principal::tela_principal(QWidget *parent, QString user, QString pass) :
    QDialog(parent),
    ui(new Ui::tela_principal)
{
    username = user;
    password = pass;
    ui->setupUi(this);
}

tela_principal::~tela_principal()
{
    delete ui;
}

void tela_principal::on_btn_Gerar_clicked()
{
    QString caminho=QDir::currentPath()+"/relatorio.pdf";
    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(caminho);

    QPainter painter;
    if(!painter.begin(&printer)) {
        return;

    }
    painter.drawPixmap(25, 100, QPixmap(":/img/user-pass.png"));
    painter.drawText(25, 250, "Usuário: " + username);
    painter.drawText(25, 280, "Senha: " + password);
    painter.end();

    QMessageBox::about(this, "PDF criado com sucesso", ("Caminho: " + caminho));
}
