#include "dialog.h"
#include "ui_dialog.h"
#include"model.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    mod=new model();
    temp="";
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::on_pushButton_0_clicked()
{
    if(temp!="")
    {
        temp+=this->ui->pushButton_0->text();
        this->ui->label_display->setText(temp);
    }
}

void Dialog::on_pushButton_1_clicked()
{
    temp+=this->ui->pushButton_1->text();
    this->ui->label_display->setText(temp);
}

void Dialog::on_pushButton_2_clicked()
{
    temp+=this->ui->pushButton_2->text();
    this->ui->label_display->setText(temp);
}

void Dialog::on_pushButton_3_clicked()
{
    temp+=this->ui->pushButton_3->text();
    this->ui->label_display->setText(temp);
}

void Dialog::on_pushButton_4_clicked()
{
    temp+=this->ui->pushButton_4->text();
    this->ui->label_display->setText(temp);
}

void Dialog::on_pushButton_5_clicked()
{
    temp+=this->ui->pushButton_5->text();
    this->ui->label_display->setText(temp);
}

void Dialog::on_pushButton_6_clicked()
{
    temp+=this->ui->pushButton_6->text();
    this->ui->label_display->setText(temp);
}

void Dialog::on_pushButton_7_clicked()
{
    temp+=this->ui->pushButton_7->text();
    this->ui->label_display->setText(temp);
}

void Dialog::on_pushButton_8_clicked()
{
    temp+=this->ui->pushButton_8->text();
    this->ui->label_display->setText(temp);
}

void Dialog::on_pushButton_9_clicked()
{
    temp+=this->ui->pushButton_9->text();
    this->ui->label_display->setText(temp);
}

void Dialog::on_pushButton_add_clicked()
{
    int num=temp.toInt();
    mod->setNum1(num);
    mod->setFlag("+");
    temp="";
}

void Dialog::on_pushButton_minus_clicked()
{
    int num=temp.toInt();
    mod->setNum1(num);
    mod->setFlag("-");
    temp="";
}

void Dialog::on_pushButton_multiply_clicked()
{
    int num=temp.toInt();
    mod->setNum1(num);
    mod->setFlag("*");
    temp="";
}

void Dialog::on_pushButton_divide_clicked()
{
    int num=temp.toInt();
    mod->setNum1(num);
    mod->setFlag("/");
    temp="";
}

void Dialog::on_pushButton_equal_clicked()
{
    int num=temp.toInt();
    mod->setNum2(num);
    QString result=mod->calculte();
    this->ui->label_display->setText(result);
    temp="";
}
