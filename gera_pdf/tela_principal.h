#ifndef TELA_PRINCIPAL_H
#define TELA_PRINCIPAL_H

#include <QDialog>
#include <QString>

namespace Ui {
class tela_principal;
}

class tela_principal : public QDialog
{
    Q_OBJECT

public:
    explicit tela_principal(QWidget *parent = nullptr, QString user = "", QString pass = "");
    ~tela_principal();

private slots:
    void on_btn_Gerar_clicked();

private:
    Ui::tela_principal *ui;
};

#endif // TELA_PRINCIPAL_H
