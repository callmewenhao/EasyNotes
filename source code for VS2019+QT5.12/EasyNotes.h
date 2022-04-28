#pragma once

#include <QtWidgets/QWidget>
#include "ui_EasyNotes.h"

class EasyNotes : public QWidget
{
    Q_OBJECT

public:
    EasyNotes(QWidget *parent = Q_NULLPTR);
    void on_clearButton_clicked();
    void on_saveButton_clicked();
    void on_pinButton_clicked();

private:
    Ui::EasyNotesClass ui;
    bool pinVal;
};
