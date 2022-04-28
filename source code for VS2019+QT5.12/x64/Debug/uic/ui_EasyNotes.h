/********************************************************************************
** Form generated from reading UI file 'EasyNotes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EASYNOTES_H
#define UI_EASYNOTES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EasyNotesClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *clearButton;
    QToolButton *saveButton;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *pinButton;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *EasyNotesClass)
    {
        if (EasyNotesClass->objectName().isEmpty())
            EasyNotesClass->setObjectName(QString::fromUtf8("EasyNotesClass"));
        EasyNotesClass->resize(374, 653);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        EasyNotesClass->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(EasyNotesClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(EasyNotesClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clearButton = new QToolButton(widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMinimumSize(QSize(80, 30));
        clearButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon1);

        horizontalLayout->addWidget(clearButton);

        saveButton = new QToolButton(widget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setMinimumSize(QSize(80, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon2);

        horizontalLayout->addWidget(saveButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pinButton = new QToolButton(widget);
        pinButton->setObjectName(QString::fromUtf8("pinButton"));
        pinButton->setMinimumSize(QSize(40, 30));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/\345\233\272\345\256\232,\345\233\276\351\222\211.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/images/\350\247\243\351\231\244\345\233\272\345\256\232,\345\233\276\351\222\211.png"), QSize(), QIcon::Normal, QIcon::On);
        pinButton->setIcon(icon3);
        pinButton->setAutoRaise(true);

        horizontalLayout->addWidget(pinButton);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(EasyNotesClass);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(widget_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(12);
        textEdit->setFont(font);
        textEdit->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(textEdit);


        verticalLayout->addWidget(widget_2);


        retranslateUi(EasyNotesClass);

        QMetaObject::connectSlotsByName(EasyNotesClass);
    } // setupUi

    void retranslateUi(QWidget *EasyNotesClass)
    {
        EasyNotesClass->setWindowTitle(QApplication::translate("EasyNotesClass", "EasyNotes", nullptr));
        clearButton->setText(QApplication::translate("EasyNotesClass", "clear", nullptr));
        saveButton->setText(QApplication::translate("EasyNotesClass", "save", nullptr));
        pinButton->setText(QApplication::translate("EasyNotesClass", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EasyNotesClass: public Ui_EasyNotesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASYNOTES_H
