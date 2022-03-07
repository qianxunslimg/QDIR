/********************************************************************************
** Form generated from reading UI file 'fllemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLLEMANAGE_H
#define UI_FLLEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fllemanage
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit_showdir;
    QPushButton *btn_Seachfile;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit_findpart;
    QPushButton *btn_beginserach;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QTextEdit *textEdit_total;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTextEdit *textEdit_find;
    QHBoxLayout *horizontalLayout_7;
    QTextEdit *textEdit_dstfile;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_copyto;
    QPushButton *btn_delete;

    void setupUi(QWidget *fllemanage)
    {
        if (fllemanage->objectName().isEmpty())
            fllemanage->setObjectName(QStringLiteral("fllemanage"));
        fllemanage->resize(421, 332);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fllemanage->sizePolicy().hasHeightForWidth());
        fllemanage->setSizePolicy(sizePolicy);
        fllemanage->setMinimumSize(QSize(0, 0));
        fllemanage->setMaximumSize(QSize(1000, 1000));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/file mangement.png"), QSize(), QIcon::Normal, QIcon::Off);
        fllemanage->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(fllemanage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textEdit_showdir = new QTextEdit(fllemanage);
        textEdit_showdir->setObjectName(QStringLiteral("textEdit_showdir"));
        textEdit_showdir->setMinimumSize(QSize(0, 40));
        textEdit_showdir->setMaximumSize(QSize(16777215, 80));

        horizontalLayout_2->addWidget(textEdit_showdir);

        btn_Seachfile = new QPushButton(fllemanage);
        btn_Seachfile->setObjectName(QStringLiteral("btn_Seachfile"));
        btn_Seachfile->setMinimumSize(QSize(0, 80));

        horizontalLayout_2->addWidget(btn_Seachfile);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(fllemanage);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        textEdit_findpart = new QTextEdit(fllemanage);
        textEdit_findpart->setObjectName(QStringLiteral("textEdit_findpart"));
        textEdit_findpart->setMinimumSize(QSize(0, 40));
        textEdit_findpart->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(textEdit_findpart);


        verticalLayout->addLayout(horizontalLayout);

        btn_beginserach = new QPushButton(fllemanage);
        btn_beginserach->setObjectName(QStringLiteral("btn_beginserach"));
        btn_beginserach->setMinimumSize(QSize(0, 40));
        btn_beginserach->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(btn_beginserach);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(fllemanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(54, 0));

        horizontalLayout_6->addWidget(label_2);

        textEdit_total = new QTextEdit(fllemanage);
        textEdit_total->setObjectName(QStringLiteral("textEdit_total"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_total->sizePolicy().hasHeightForWidth());
        textEdit_total->setSizePolicy(sizePolicy1);
        textEdit_total->setMinimumSize(QSize(0, 40));
        textEdit_total->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_6->addWidget(textEdit_total);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(fllemanage);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        textEdit_find = new QTextEdit(fllemanage);
        textEdit_find->setObjectName(QStringLiteral("textEdit_find"));
        sizePolicy1.setHeightForWidth(textEdit_find->sizePolicy().hasHeightForWidth());
        textEdit_find->setSizePolicy(sizePolicy1);
        textEdit_find->setMinimumSize(QSize(0, 40));
        textEdit_find->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_3->addWidget(textEdit_find);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        textEdit_dstfile = new QTextEdit(fllemanage);
        textEdit_dstfile->setObjectName(QStringLiteral("textEdit_dstfile"));

        horizontalLayout_7->addWidget(textEdit_dstfile);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        btn_copyto = new QPushButton(fllemanage);
        btn_copyto->setObjectName(QStringLiteral("btn_copyto"));
        btn_copyto->setEnabled(true);
        btn_copyto->setMinimumSize(QSize(0, 40));
        btn_copyto->setMaximumSize(QSize(16777215, 40));

        verticalLayout_3->addWidget(btn_copyto);

        btn_delete = new QPushButton(fllemanage);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));
        btn_delete->setMinimumSize(QSize(0, 40));
        btn_delete->setMaximumSize(QSize(16777215, 40));

        verticalLayout_3->addWidget(btn_delete);


        horizontalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_7);


        retranslateUi(fllemanage);

        QMetaObject::connectSlotsByName(fllemanage);
    } // setupUi

    void retranslateUi(QWidget *fllemanage)
    {
        fllemanage->setWindowTitle(QApplication::translate("fllemanage", "\346\226\207\344\273\266\346\220\254\350\277\220~by\345\215\203\345\257\273slimg", Q_NULLPTR));
        btn_Seachfile->setText(QApplication::translate("fllemanage", "\346\237\245\346\211\276\347\233\256\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("fllemanage", "\345\214\205\345\220\253", Q_NULLPTR));
        btn_beginserach->setText(QApplication::translate("fllemanage", "\346\237\245\346\211\276", Q_NULLPTR));
        label_2->setText(QApplication::translate("fllemanage", "\346\226\207\344\273\266\346\200\273\346\225\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("fllemanage", "\347\233\256\346\240\207\346\226\207\344\273\266\346\225\260\351\207\217", Q_NULLPTR));
        btn_copyto->setText(QApplication::translate("fllemanage", "\345\244\215\345\210\266\345\210\260", Q_NULLPTR));
        btn_delete->setText(QApplication::translate("fllemanage", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fllemanage: public Ui_fllemanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLLEMANAGE_H
