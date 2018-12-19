/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_display;
    QGridLayout *gridLayout;
    QPushButton *pushButton_clean;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_add;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_end;
    QPushButton *pushButton_0;
    QPushButton *pushButton_point;
    QPushButton *pushButton_equal;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(442, 591);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_display = new QLabel(Dialog);
        label_display->setObjectName(QString::fromUtf8("label_display"));
        QFont font;
        font.setPointSize(40);
        label_display->setFont(font);
        label_display->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 126, 255);"));
        label_display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_display);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_clean = new QPushButton(Dialog);
        pushButton_clean->setObjectName(QString::fromUtf8("pushButton_clean"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_clean->sizePolicy().hasHeightForWidth());
        pushButton_clean->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_clean->setFont(font1);
        pushButton_clean->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_clean, 0, 0, 1, 1);

        pushButton_delete = new QPushButton(Dialog);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        sizePolicy.setHeightForWidth(pushButton_delete->sizePolicy().hasHeightForWidth());
        pushButton_delete->setSizePolicy(sizePolicy);
        pushButton_delete->setFont(font1);
        pushButton_delete->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_delete, 0, 1, 1, 1);

        pushButton_percent = new QPushButton(Dialog);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        sizePolicy.setHeightForWidth(pushButton_percent->sizePolicy().hasHeightForWidth());
        pushButton_percent->setSizePolicy(sizePolicy);
        pushButton_percent->setFont(font1);
        pushButton_percent->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_percent, 0, 2, 1, 1);

        pushButton_add = new QPushButton(Dialog);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setFont(font1);
        pushButton_add->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_add, 0, 3, 1, 1);

        pushButton_7 = new QPushButton(Dialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font1);
        pushButton_7->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(Dialog);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font1);
        pushButton_8->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(Dialog);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font1);
        pushButton_9->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_minus = new QPushButton(Dialog);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(40);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_minus->setFont(font2);
        pushButton_minus->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_minus, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font1);
        pushButton_4->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font1);
        pushButton_5->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(Dialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font1);
        pushButton_6->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_multiply = new QPushButton(Dialog);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        sizePolicy.setHeightForWidth(pushButton_multiply->sizePolicy().hasHeightForWidth());
        pushButton_multiply->setSizePolicy(sizePolicy);
        pushButton_multiply->setFont(font1);
        pushButton_multiply->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_multiply, 2, 3, 1, 1);

        pushButton_1 = new QPushButton(Dialog);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setFont(font1);
        pushButton_1->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font1);
        pushButton_2->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font1);
        pushButton_3->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_divide = new QPushButton(Dialog);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        sizePolicy.setHeightForWidth(pushButton_divide->sizePolicy().hasHeightForWidth());
        pushButton_divide->setSizePolicy(sizePolicy);
        pushButton_divide->setFont(font1);
        pushButton_divide->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_divide, 3, 3, 1, 1);

        pushButton_end = new QPushButton(Dialog);
        pushButton_end->setObjectName(QString::fromUtf8("pushButton_end"));
        sizePolicy.setHeightForWidth(pushButton_end->sizePolicy().hasHeightForWidth());
        pushButton_end->setSizePolicy(sizePolicy);
        pushButton_end->setFont(font1);
        pushButton_end->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_end, 4, 0, 1, 1);

        pushButton_0 = new QPushButton(Dialog);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setFont(font1);
        pushButton_0->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_0, 4, 1, 1, 1);

        pushButton_point = new QPushButton(Dialog);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        sizePolicy.setHeightForWidth(pushButton_point->sizePolicy().hasHeightForWidth());
        pushButton_point->setSizePolicy(sizePolicy);
        pushButton_point->setFont(font1);
        pushButton_point->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_point, 4, 2, 1, 1);

        pushButton_equal = new QPushButton(Dialog);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);
        pushButton_equal->setFont(font1);
        pushButton_equal->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pushButton_equal, 4, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 4);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label_display->setText(QApplication::translate("Dialog", "0", nullptr));
        pushButton_clean->setText(QApplication::translate("Dialog", "C", nullptr));
        pushButton_delete->setText(QApplication::translate("Dialog", "DEL", nullptr));
        pushButton_percent->setText(QApplication::translate("Dialog", "%", nullptr));
        pushButton_add->setText(QApplication::translate("Dialog", "\357\274\213", nullptr));
        pushButton_7->setText(QApplication::translate("Dialog", "7", nullptr));
        pushButton_8->setText(QApplication::translate("Dialog", "8", nullptr));
        pushButton_9->setText(QApplication::translate("Dialog", "9", nullptr));
        pushButton_minus->setText(QApplication::translate("Dialog", "-", nullptr));
        pushButton_4->setText(QApplication::translate("Dialog", "4", nullptr));
        pushButton_5->setText(QApplication::translate("Dialog", "5", nullptr));
        pushButton_6->setText(QApplication::translate("Dialog", "6", nullptr));
        pushButton_multiply->setText(QApplication::translate("Dialog", "\303\227", nullptr));
        pushButton_1->setText(QApplication::translate("Dialog", "1", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "2", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "3", nullptr));
        pushButton_divide->setText(QApplication::translate("Dialog", "\303\267", nullptr));
        pushButton_end->setText(QApplication::translate("Dialog", "END", nullptr));
        pushButton_0->setText(QApplication::translate("Dialog", "0", nullptr));
        pushButton_point->setText(QApplication::translate("Dialog", ".", nullptr));
        pushButton_equal->setText(QApplication::translate("Dialog", "\357\274\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
