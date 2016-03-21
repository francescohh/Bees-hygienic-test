/********************************************************************************
** Form generated from reading UI file 'ht.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HT_H
#define UI_HT_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QDialog_HT
{
public:
    QLabel *label_nadpis;
    QGroupBox *groupBox_hlavny;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_P;
    QComboBox *comboBox_D;
    QGroupBox *groupBox_priebezny;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit_0;
    QLineEdit *lineEdit_N0;
    QLabel *label_6;
    QDateEdit *dateEdit_2;
    QTimeEdit *timeEdit_1;
    QLineEdit *lineEdit_N1;
    QLabel *label_7;
    QDateEdit *dateEdit_3;
    QTimeEdit *timeEdit_2;
    QLineEdit *lineEdit_N2;
    QLabel *label_8;
    QDateEdit *dateEdit_4;
    QTimeEdit *timeEdit_3;
    QLineEdit *lineEdit_N3;
    QLabel *label_12;
    QLineEdit *lineEdit_NL;
    QPushButton *pushButton_vypocitaj;
    QPushButton *pushButton_zavri;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QLabel *label_HT;
    QLabel *label_11;
    QLabel *label_10;

    void setupUi(QDialog *QDialog_HT)
    {
        if (QDialog_HT->objectName().isEmpty())
            QDialog_HT->setObjectName(QString::fromUtf8("QDialog_HT"));
        QDialog_HT->setEnabled(true);
        QDialog_HT->resize(722, 525);
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        QDialog_HT->setFont(font);
        QDialog_HT->setLayoutDirection(Qt::LeftToRight);
        label_nadpis = new QLabel(QDialog_HT);
        label_nadpis->setObjectName(QString::fromUtf8("label_nadpis"));
        label_nadpis->setGeometry(QRect(10, 10, 621, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_nadpis->setFont(font1);
        groupBox_hlavny = new QGroupBox(QDialog_HT);
        groupBox_hlavny->setObjectName(QString::fromUtf8("groupBox_hlavny"));
        groupBox_hlavny->setGeometry(QRect(50, 80, 531, 121));
        QFont font2;
        font2.setPointSize(12);
        font2.setUnderline(true);
        font2.setStrikeOut(false);
        groupBox_hlavny->setFont(font2);
        layoutWidget = new QWidget(groupBox_hlavny);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 468, 66));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        font3.setStrikeOut(false);
        label->setFont(font3);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 2);

        lineEdit_P = new QLineEdit(layoutWidget);
        lineEdit_P->setObjectName(QString::fromUtf8("lineEdit_P"));
        QFont font4;
        font4.setBold(false);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setWeight(50);
        lineEdit_P->setFont(font4);

        gridLayout_2->addWidget(lineEdit_P, 1, 2, 1, 1);

        comboBox_D = new QComboBox(layoutWidget);
        comboBox_D->setObjectName(QString::fromUtf8("comboBox_D"));
        comboBox_D->setFont(font3);

        gridLayout_2->addWidget(comboBox_D, 0, 2, 1, 1);

        groupBox_priebezny = new QGroupBox(QDialog_HT);
        groupBox_priebezny->setObjectName(QString::fromUtf8("groupBox_priebezny"));
        groupBox_priebezny->setGeometry(QRect(50, 210, 550, 230));
        QFont font5;
        font5.setPointSize(12);
        font5.setUnderline(true);
        groupBox_priebezny->setFont(font5);
        gridLayout = new QGridLayout(groupBox_priebezny);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox_priebezny);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font4);

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_priebezny);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font4);

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_9 = new QLabel(groupBox_priebezny);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font4);

        gridLayout->addWidget(label_9, 0, 3, 1, 1);

        label_3 = new QLabel(groupBox_priebezny);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setUnderline(false);
        font6.setWeight(50);
        label_3->setFont(font6);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox_priebezny);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setFont(font6);
        dateEdit->setWrapping(false);
        dateEdit->setDateTime(QDateTime(QDate(2013, 4, 1), QTime(0, 0, 0)));
        dateEdit->setDate(QDate(2013, 4, 1));
        dateEdit->setCalendarPopup(false);
        dateEdit->setCurrentSectionIndex(0);

        gridLayout->addWidget(dateEdit, 1, 1, 1, 1);

        timeEdit_0 = new QTimeEdit(groupBox_priebezny);
        timeEdit_0->setObjectName(QString::fromUtf8("timeEdit_0"));
        timeEdit_0->setFont(font4);

        gridLayout->addWidget(timeEdit_0, 1, 2, 1, 1);

        lineEdit_N0 = new QLineEdit(groupBox_priebezny);
        lineEdit_N0->setObjectName(QString::fromUtf8("lineEdit_N0"));
        lineEdit_N0->setFont(font4);

        gridLayout->addWidget(lineEdit_N0, 1, 3, 1, 1);

        label_6 = new QLabel(groupBox_priebezny);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font6);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        dateEdit_2 = new QDateEdit(groupBox_priebezny);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setFont(font6);
        dateEdit_2->setDate(QDate(2013, 4, 1));

        gridLayout->addWidget(dateEdit_2, 2, 1, 1, 1);

        timeEdit_1 = new QTimeEdit(groupBox_priebezny);
        timeEdit_1->setObjectName(QString::fromUtf8("timeEdit_1"));
        timeEdit_1->setFont(font4);

        gridLayout->addWidget(timeEdit_1, 2, 2, 1, 1);

        lineEdit_N1 = new QLineEdit(groupBox_priebezny);
        lineEdit_N1->setObjectName(QString::fromUtf8("lineEdit_N1"));
        lineEdit_N1->setFont(font4);

        gridLayout->addWidget(lineEdit_N1, 2, 3, 1, 1);

        label_7 = new QLabel(groupBox_priebezny);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font6);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        dateEdit_3 = new QDateEdit(groupBox_priebezny);
        dateEdit_3->setObjectName(QString::fromUtf8("dateEdit_3"));
        dateEdit_3->setFont(font6);
        dateEdit_3->setDate(QDate(2013, 4, 1));

        gridLayout->addWidget(dateEdit_3, 3, 1, 1, 1);

        timeEdit_2 = new QTimeEdit(groupBox_priebezny);
        timeEdit_2->setObjectName(QString::fromUtf8("timeEdit_2"));
        timeEdit_2->setFont(font4);

        gridLayout->addWidget(timeEdit_2, 3, 2, 1, 1);

        lineEdit_N2 = new QLineEdit(groupBox_priebezny);
        lineEdit_N2->setObjectName(QString::fromUtf8("lineEdit_N2"));
        lineEdit_N2->setFont(font4);

        gridLayout->addWidget(lineEdit_N2, 3, 3, 1, 1);

        label_8 = new QLabel(groupBox_priebezny);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font6);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        dateEdit_4 = new QDateEdit(groupBox_priebezny);
        dateEdit_4->setObjectName(QString::fromUtf8("dateEdit_4"));
        dateEdit_4->setFont(font6);
        dateEdit_4->setDate(QDate(2013, 4, 1));

        gridLayout->addWidget(dateEdit_4, 4, 1, 1, 1);

        timeEdit_3 = new QTimeEdit(groupBox_priebezny);
        timeEdit_3->setObjectName(QString::fromUtf8("timeEdit_3"));
        timeEdit_3->setFont(font4);

        gridLayout->addWidget(timeEdit_3, 4, 2, 1, 1);

        lineEdit_N3 = new QLineEdit(groupBox_priebezny);
        lineEdit_N3->setObjectName(QString::fromUtf8("lineEdit_N3"));
        lineEdit_N3->setFont(font4);

        gridLayout->addWidget(lineEdit_N3, 4, 3, 1, 1);

        label_12 = new QLabel(groupBox_priebezny);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font4);

        gridLayout->addWidget(label_12, 5, 0, 1, 2);

        lineEdit_NL = new QLineEdit(groupBox_priebezny);
        lineEdit_NL->setObjectName(QString::fromUtf8("lineEdit_NL"));
        lineEdit_NL->setFont(font4);

        gridLayout->addWidget(lineEdit_NL, 5, 3, 1, 1);

        pushButton_vypocitaj = new QPushButton(QDialog_HT);
        pushButton_vypocitaj->setObjectName(QString::fromUtf8("pushButton_vypocitaj"));
        pushButton_vypocitaj->setEnabled(true);
        pushButton_vypocitaj->setGeometry(QRect(610, 60, 86, 27));
        pushButton_zavri = new QPushButton(QDialog_HT);
        pushButton_zavri->setObjectName(QString::fromUtf8("pushButton_zavri"));
        pushButton_zavri->setGeometry(QRect(610, 100, 85, 27));
        layoutWidget1 = new QWidget(QDialog_HT);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(410, 460, 192, 27));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font7;
        font7.setPointSize(14);
        label_13->setFont(font7);

        gridLayout_3->addWidget(label_13, 0, 2, 1, 1);

        label_HT = new QLabel(layoutWidget1);
        label_HT->setObjectName(QString::fromUtf8("label_HT"));
        label_HT->setEnabled(true);
        label_HT->setMinimumSize(QSize(50, 0));
        QFont font8;
        font8.setPointSize(14);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(50);
        label_HT->setFont(font8);
        label_HT->setFrameShape(QFrame::NoFrame);
        label_HT->setWordWrap(false);

        gridLayout_3->addWidget(label_HT, 0, 1, 1, 1);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font7);

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        label_10 = new QLabel(QDialog_HT);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 500, 241, 21));
        QFont font9;
        font9.setPointSize(10);
        font9.setBold(false);
        font9.setWeight(50);
        label_10->setFont(font9);

        retranslateUi(QDialog_HT);
        QObject::connect(pushButton_zavri, SIGNAL(clicked()), QDialog_HT, SLOT(close()));

        QMetaObject::connectSlotsByName(QDialog_HT);
    } // setupUi

    void retranslateUi(QDialog *QDialog_HT)
    {
        QDialog_HT->setWindowTitle(QApplication::translate("QDialog_HT", "HT", 0, QApplication::UnicodeUTF8));
        label_nadpis->setText(QApplication::translate("QDialog_HT", "Hygienick\303\275 test na rezistenciu v\304\215iel proti infek\304\215n\303\275m chorob\303\241m", 0, QApplication::UnicodeUTF8));
        groupBox_hlavny->setTitle(QApplication::translate("QDialog_HT", "Hlavn\303\251 \303\272daje", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QDialog_HT", "Intervaly kontr\303\264l", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QDialog_HT", "Po\304\215et buniek na testovanej ploche pl\303\241stu", 0, QApplication::UnicodeUTF8));
        comboBox_D->clear();
        comboBox_D->insertItems(0, QStringList()
         << QApplication::translate("QDialog_HT", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDialog_HT", "24", 0, QApplication::UnicodeUTF8)
        );
        groupBox_priebezny->setTitle(QApplication::translate("QDialog_HT", "Priebe\305\276n\303\251 \303\272daje", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QDialog_HT", "D\303\241tum", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QDialog_HT", "\304\214as", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QDialog_HT", "Po\304\215et pr\303\241zdnych buniek", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QDialog_HT", "Na za\304\215iatku testu", 0, QApplication::UnicodeUTF8));
        timeEdit_0->setDisplayFormat(QApplication::translate("QDialog_HT", "HH:mm", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QDialog_HT", "1. kontrola", 0, QApplication::UnicodeUTF8));
        timeEdit_1->setDisplayFormat(QApplication::translate("QDialog_HT", "HH:mm", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QDialog_HT", "2. kontrola", 0, QApplication::UnicodeUTF8));
        timeEdit_2->setDisplayFormat(QApplication::translate("QDialog_HT", "HH:mm", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QDialog_HT", "3. kontrola", 0, QApplication::UnicodeUTF8));
        timeEdit_3->setDisplayFormat(QApplication::translate("QDialog_HT", "HH:mm", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QDialog_HT", "Zvy\305\241n\303\251 zavie\304\215kovan\303\251 bunky", 0, QApplication::UnicodeUTF8));
        pushButton_vypocitaj->setText(QApplication::translate("QDialog_HT", "Vypo\304\215\303\255taj", 0, QApplication::UnicodeUTF8));
        pushButton_zavri->setText(QApplication::translate("QDialog_HT", "Zavri", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QDialog_HT", "hod", 0, QApplication::UnicodeUTF8));
        label_HT->setText(QString());
        label_11->setText(QApplication::translate("QDialog_HT", "V\303\275sledok", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QDialog_HT", "freeware created by Francescoh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QDialog_HT: public Ui_QDialog_HT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HT_H
