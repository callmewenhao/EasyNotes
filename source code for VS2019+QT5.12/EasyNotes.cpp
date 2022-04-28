#include "EasyNotes.h"
#include <QIcon>
#include <QPushButton>
#include <QFileDialog>
#include <QDebug>
#include <QFile>


EasyNotes::EasyNotes(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    pinVal = false; // pinval init

    setWindowIcon(QIcon(":images/icon.png"));  // 已经在UI界面设置图标了

    connect(
        ui.clearButton, &QPushButton::clicked, this, [=]() {
            on_clearButton_clicked();
        }
    );
    connect(
        ui.saveButton, &QPushButton::clicked, this, [=]() {
            on_saveButton_clicked();
        }
    );
    connect(
        ui.pinButton, &QPushButton::clicked, this, [=]() {
            on_pinButton_clicked();
        }
    );
}

void EasyNotes::on_clearButton_clicked()
{
    ui.textEdit->clear(); // 清空输入
}

void EasyNotes::on_saveButton_clicked()
{
    //
    QString fileName = QFileDialog::getSaveFileName(
        this, tr("save notes!"),
        "F:\\", tr("notes(*.txt *.md);;All files (*.*)"));
    /*if (fileName.isEmpty()) {
        qDebug() << "fileName is Empty!";
    }*/

    // 文件对象
    QFile file(fileName, this);
    file.open(QIODevice::ReadWrite);
    QString data = ui.textEdit->toPlainText();
    file.write(data.toUtf8());
    file.close();
}

void EasyNotes::on_pinButton_clicked()
{
    if (pinVal == false) {
        // 图标转换
        ui.pinButton->setIcon(QIcon(":images/解除固定,图钉.png"));
        pinVal = true;
        // 置顶
        //this->setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint);
        this->setWindowFlag(Qt::WindowStaysOnTopHint, true); 
    }
    else if (pinVal == true) {
        // 图标转换
        ui.pinButton->setIcon(QIcon(":images/固定,图钉.png"));
        pinVal = false;
        // 取消置顶
        //this->setWindowFlags(this->windowFlags() & ~Qt::WindowStaysOnTopHint);
        this->setWindowFlag(Qt::WindowStaysOnTopHint, false);
    }
    this->show(); // 确保仍然显示！
}
