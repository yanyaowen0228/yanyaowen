/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCharts/QChartView>
#include <QtCharts/chartsnamespace.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QtCharts::QChartView *chartview;
    QVBoxLayout *verticalLayout;
    QLabel *labelCity;
    QComboBox *comboCity;
    QLabel *labelDate;
    QComboBox *comboMonth;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbShowPoint;
    QCheckBox *cbLegendBold;
    QCheckBox *cbLegendItalic;
    QPushButton *btnLegendAlign;
    QGroupBox *groupBox2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioTemp;
    QRadioButton *radioAQI;
    QPushButton *btnStart;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->resize(745, 588);
        horizontalLayout = new QHBoxLayout(mainWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        chartview = new QtCharts::QChartView(mainWidget);
        chartview->setObjectName(QStringLiteral("chartview"));

        horizontalLayout->addWidget(chartview);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelCity = new QLabel(mainWidget);
        labelCity->setObjectName(QStringLiteral("labelCity"));

        verticalLayout->addWidget(labelCity);

        comboCity = new QComboBox(mainWidget);
        comboCity->setObjectName(QStringLiteral("comboCity"));

        verticalLayout->addWidget(comboCity);

        labelDate = new QLabel(mainWidget);
        labelDate->setObjectName(QStringLiteral("labelDate"));

        verticalLayout->addWidget(labelDate);

        comboMonth = new QComboBox(mainWidget);
        comboMonth->setObjectName(QStringLiteral("comboMonth"));

        verticalLayout->addWidget(comboMonth);

        groupBox = new QGroupBox(mainWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cbShowPoint = new QCheckBox(groupBox);
        cbShowPoint->setObjectName(QStringLiteral("cbShowPoint"));
        cbShowPoint->setChecked(true);

        verticalLayout_2->addWidget(cbShowPoint);

        cbLegendBold = new QCheckBox(groupBox);
        cbLegendBold->setObjectName(QStringLiteral("cbLegendBold"));

        verticalLayout_2->addWidget(cbLegendBold);

        cbLegendItalic = new QCheckBox(groupBox);
        cbLegendItalic->setObjectName(QStringLiteral("cbLegendItalic"));

        verticalLayout_2->addWidget(cbLegendItalic);

        btnLegendAlign = new QPushButton(groupBox);
        btnLegendAlign->setObjectName(QStringLiteral("btnLegendAlign"));

        verticalLayout_2->addWidget(btnLegendAlign);


        verticalLayout->addWidget(groupBox);

        groupBox2 = new QGroupBox(mainWidget);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        verticalLayout_3 = new QVBoxLayout(groupBox2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        radioTemp = new QRadioButton(groupBox2);
        radioTemp->setObjectName(QStringLiteral("radioTemp"));
        radioTemp->setChecked(true);

        verticalLayout_3->addWidget(radioTemp);

        radioAQI = new QRadioButton(groupBox2);
        radioAQI->setObjectName(QStringLiteral("radioAQI"));

        verticalLayout_3->addWidget(radioAQI);


        verticalLayout->addWidget(groupBox2);

        btnStart = new QPushButton(mainWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnStart->sizePolicy().hasHeightForWidth());
        btnStart->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btnStart);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(mainWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        pushButton = new QPushButton(mainWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(120, 70));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QStringLiteral("margin-bottom:15px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(90, 60));
        pushButton->setFlat(true);

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QApplication::translate("mainWidget", "\345\256\236\351\252\214\344\270\211 \347\275\221\347\273\234\346\225\260\346\215\256\350\216\267\345\217\226\344\270\216\346\230\276\347\244\272", Q_NULLPTR));
        labelCity->setText(QApplication::translate("mainWidget", "\351\200\211\346\213\251\345\237\216\345\270\202", Q_NULLPTR));
        labelDate->setText(QApplication::translate("mainWidget", "\351\200\211\346\213\251\346\227\266\351\227\264", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("mainWidget", "\346\230\276\347\244\272\350\256\276\347\275\256", Q_NULLPTR));
        cbShowPoint->setText(QApplication::translate("mainWidget", "\346\230\276\347\244\272\346\225\260\346\215\256\347\202\271", Q_NULLPTR));
        cbLegendBold->setText(QApplication::translate("mainWidget", "\345\233\276\346\263\250\347\262\227\344\275\223", Q_NULLPTR));
        cbLegendItalic->setText(QApplication::translate("mainWidget", "\345\233\276\346\263\250\346\226\234\344\275\223", Q_NULLPTR));
        btnLegendAlign->setText(QApplication::translate("mainWidget", "\345\233\276\346\263\250(\345\272\225)", Q_NULLPTR));
        groupBox2->setTitle(QApplication::translate("mainWidget", "\346\225\260\346\215\256\347\261\273\345\236\213", Q_NULLPTR));
        radioTemp->setText(QApplication::translate("mainWidget", "\346\237\245\350\257\242\346\260\224\346\270\251", Q_NULLPTR));
        radioAQI->setText(QApplication::translate("mainWidget", "\346\237\245\350\257\242 AQI", Q_NULLPTR));
        btnStart->setText(QApplication::translate("mainWidget", "\345\274\200\345\247\213", Q_NULLPTR));
        label_2->setText(QApplication::translate("mainWidget", "\346\225\260\346\215\256\346\235\245\346\272\220", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
