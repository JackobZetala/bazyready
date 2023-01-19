/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Logowanie;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Haslo;
    QPushButton *pushButtonZaloguj;
    QWidget *PoZalogowaniu;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_PoZalAktuDostaw;
    QPushButton *pushButton_PoZalAktuOferty;
    QPushButton *pushButton_PoZalAktuStatDost;
    QPushButton *pushButton_PoZalRap1;
    QPushButton *pushButton_PoZalRap2;
    QPushButton *pushButton_PoZalWroc;
    QWidget *AktStatus;
    QTableView *tableViewAktStatus;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_AktStatusId;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_AktStatusStatus;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_AktStatusAktu;
    QPushButton *pushButton_AktStatusWroc;
    QWidget *AktDost;
    QTableView *tableView_AktDost;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_AktDosId;
    QLineEdit *lineEdit_AktDostNazwa;
    QLineEdit *lineEdit_AktDostEmail;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit_AktDostMiasto;
    QLineEdit *lineEdit_AktDostUlica;
    QLineEdit *lineEdit_AktDostNrUlicy;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_AktDostDod;
    QPushButton *pushButton_AktDostAktua;
    QPushButton *pushButton_AktDostUsun;
    QPushButton *pushButton_AktDostWroc;
    QWidget *AktOfert;
    QTableView *tableView_AktOfert;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_13;
    QLineEdit *lineEdit_AktOfertKod;
    QLineEdit *lineEdit_AktOfertCenaJed;
    QLineEdit *lineEdit_AktOfertCenaSzt;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_14;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_14;
    QLineEdit *lineEdit_AktOfertCzas;
    QLineEdit *lineEdit_AktOfertIdDostawcy;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton_AktOfertDodaj;
    QPushButton *pushButton_AktOfertAktu;
    QPushButton *pushButton_AktOfertUsun;
    QPushButton *pushButton_AktOfertWroc;
    QWidget *Rap1;
    QPushButton *pushButton_Rap1Wroc;
    QTableView *tableView_Rap1;
    QWidget *Rap2;
    QTableView *tableView_Rap2;
    QPushButton *pushButton_Rap2Wroc;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        Logowanie = new QWidget();
        Logowanie->setObjectName(QString::fromUtf8("Logowanie"));
        layoutWidget = new QWidget(Logowanie);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 150, 321, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_Login = new QLineEdit(layoutWidget);
        lineEdit_Login->setObjectName(QString::fromUtf8("lineEdit_Login"));

        horizontalLayout->addWidget(lineEdit_Login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Haslo = new QLineEdit(layoutWidget);
        lineEdit_Haslo->setObjectName(QString::fromUtf8("lineEdit_Haslo"));
        lineEdit_Haslo->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Haslo);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButtonZaloguj = new QPushButton(layoutWidget);
        pushButtonZaloguj->setObjectName(QString::fromUtf8("pushButtonZaloguj"));

        verticalLayout_2->addWidget(pushButtonZaloguj);

        stackedWidget->addWidget(Logowanie);
        PoZalogowaniu = new QWidget();
        PoZalogowaniu->setObjectName(QString::fromUtf8("PoZalogowaniu"));
        layoutWidget1 = new QWidget(PoZalogowaniu);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(270, 100, 251, 261));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_PoZalAktuDostaw = new QPushButton(layoutWidget1);
        pushButton_PoZalAktuDostaw->setObjectName(QString::fromUtf8("pushButton_PoZalAktuDostaw"));

        verticalLayout_3->addWidget(pushButton_PoZalAktuDostaw);

        pushButton_PoZalAktuOferty = new QPushButton(layoutWidget1);
        pushButton_PoZalAktuOferty->setObjectName(QString::fromUtf8("pushButton_PoZalAktuOferty"));

        verticalLayout_3->addWidget(pushButton_PoZalAktuOferty);

        pushButton_PoZalAktuStatDost = new QPushButton(layoutWidget1);
        pushButton_PoZalAktuStatDost->setObjectName(QString::fromUtf8("pushButton_PoZalAktuStatDost"));

        verticalLayout_3->addWidget(pushButton_PoZalAktuStatDost);

        pushButton_PoZalRap1 = new QPushButton(layoutWidget1);
        pushButton_PoZalRap1->setObjectName(QString::fromUtf8("pushButton_PoZalRap1"));

        verticalLayout_3->addWidget(pushButton_PoZalRap1);

        pushButton_PoZalRap2 = new QPushButton(layoutWidget1);
        pushButton_PoZalRap2->setObjectName(QString::fromUtf8("pushButton_PoZalRap2"));

        verticalLayout_3->addWidget(pushButton_PoZalRap2);

        pushButton_PoZalWroc = new QPushButton(layoutWidget1);
        pushButton_PoZalWroc->setObjectName(QString::fromUtf8("pushButton_PoZalWroc"));

        verticalLayout_3->addWidget(pushButton_PoZalWroc);

        stackedWidget->addWidget(PoZalogowaniu);
        AktStatus = new QWidget();
        AktStatus->setObjectName(QString::fromUtf8("AktStatus"));
        tableViewAktStatus = new QTableView(AktStatus);
        tableViewAktStatus->setObjectName(QString::fromUtf8("tableViewAktStatus"));
        tableViewAktStatus->setGeometry(QRect(0, 0, 800, 441));
        widget = new QWidget(AktStatus);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, 470, 368, 69));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit_AktStatusId = new QLineEdit(widget);
        lineEdit_AktStatusId->setObjectName(QString::fromUtf8("lineEdit_AktStatusId"));

        horizontalLayout_4->addWidget(lineEdit_AktStatusId);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_AktStatusStatus = new QLineEdit(widget);
        lineEdit_AktStatusStatus->setObjectName(QString::fromUtf8("lineEdit_AktStatusStatus"));

        horizontalLayout_3->addWidget(lineEdit_AktStatusStatus);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_AktStatusAktu = new QPushButton(widget);
        pushButton_AktStatusAktu->setObjectName(QString::fromUtf8("pushButton_AktStatusAktu"));

        verticalLayout_5->addWidget(pushButton_AktStatusAktu);

        pushButton_AktStatusWroc = new QPushButton(widget);
        pushButton_AktStatusWroc->setObjectName(QString::fromUtf8("pushButton_AktStatusWroc"));

        verticalLayout_5->addWidget(pushButton_AktStatusWroc);


        horizontalLayout_5->addLayout(verticalLayout_5);

        stackedWidget->addWidget(AktStatus);
        AktDost = new QWidget();
        AktDost->setObjectName(QString::fromUtf8("AktDost"));
        tableView_AktDost = new QTableView(AktDost);
        tableView_AktDost->setObjectName(QString::fromUtf8("tableView_AktDost"));
        tableView_AktDost->setGeometry(QRect(0, 0, 800, 361));
        widget1 = new QWidget(AktDost);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(130, 370, 531, 181));
        verticalLayout_10 = new QVBoxLayout(widget1);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_8->addWidget(label_5);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_8->addWidget(label_6);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_8->addWidget(label_7);


        horizontalLayout_6->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lineEdit_AktDosId = new QLineEdit(widget1);
        lineEdit_AktDosId->setObjectName(QString::fromUtf8("lineEdit_AktDosId"));

        verticalLayout_6->addWidget(lineEdit_AktDosId);

        lineEdit_AktDostNazwa = new QLineEdit(widget1);
        lineEdit_AktDostNazwa->setObjectName(QString::fromUtf8("lineEdit_AktDostNazwa"));

        verticalLayout_6->addWidget(lineEdit_AktDostNazwa);

        lineEdit_AktDostEmail = new QLineEdit(widget1);
        lineEdit_AktDostEmail->setObjectName(QString::fromUtf8("lineEdit_AktDostEmail"));

        verticalLayout_6->addWidget(lineEdit_AktDostEmail);


        horizontalLayout_6->addLayout(verticalLayout_6);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_9->addWidget(label_8);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_9->addWidget(label_9);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_9->addWidget(label_10);


        horizontalLayout_7->addLayout(verticalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        lineEdit_AktDostMiasto = new QLineEdit(widget1);
        lineEdit_AktDostMiasto->setObjectName(QString::fromUtf8("lineEdit_AktDostMiasto"));

        verticalLayout_7->addWidget(lineEdit_AktDostMiasto);

        lineEdit_AktDostUlica = new QLineEdit(widget1);
        lineEdit_AktDostUlica->setObjectName(QString::fromUtf8("lineEdit_AktDostUlica"));

        verticalLayout_7->addWidget(lineEdit_AktDostUlica);

        lineEdit_AktDostNrUlicy = new QLineEdit(widget1);
        lineEdit_AktDostNrUlicy->setObjectName(QString::fromUtf8("lineEdit_AktDostNrUlicy"));

        verticalLayout_7->addWidget(lineEdit_AktDostNrUlicy);


        horizontalLayout_7->addLayout(verticalLayout_7);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_10->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_AktDostDod = new QPushButton(widget1);
        pushButton_AktDostDod->setObjectName(QString::fromUtf8("pushButton_AktDostDod"));

        horizontalLayout_9->addWidget(pushButton_AktDostDod);

        pushButton_AktDostAktua = new QPushButton(widget1);
        pushButton_AktDostAktua->setObjectName(QString::fromUtf8("pushButton_AktDostAktua"));

        horizontalLayout_9->addWidget(pushButton_AktDostAktua);

        pushButton_AktDostUsun = new QPushButton(widget1);
        pushButton_AktDostUsun->setObjectName(QString::fromUtf8("pushButton_AktDostUsun"));

        horizontalLayout_9->addWidget(pushButton_AktDostUsun);

        pushButton_AktDostWroc = new QPushButton(widget1);
        pushButton_AktDostWroc->setObjectName(QString::fromUtf8("pushButton_AktDostWroc"));

        horizontalLayout_9->addWidget(pushButton_AktDostWroc);


        verticalLayout_10->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(AktDost);
        AktOfert = new QWidget();
        AktOfert->setObjectName(QString::fromUtf8("AktOfert"));
        tableView_AktOfert = new QTableView(AktOfert);
        tableView_AktOfert->setObjectName(QString::fromUtf8("tableView_AktOfert"));
        tableView_AktOfert->setGeometry(QRect(0, 1, 800, 351));
        widget2 = new QWidget(AktOfert);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(140, 360, 531, 191));
        verticalLayout_15 = new QVBoxLayout(widget2);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_11 = new QLabel(widget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_11->addWidget(label_11);

        label_12 = new QLabel(widget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_11->addWidget(label_12);

        label_13 = new QLabel(widget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_11->addWidget(label_13);


        horizontalLayout_11->addLayout(verticalLayout_11);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        lineEdit_AktOfertKod = new QLineEdit(widget2);
        lineEdit_AktOfertKod->setObjectName(QString::fromUtf8("lineEdit_AktOfertKod"));

        verticalLayout_13->addWidget(lineEdit_AktOfertKod);

        lineEdit_AktOfertCenaJed = new QLineEdit(widget2);
        lineEdit_AktOfertCenaJed->setObjectName(QString::fromUtf8("lineEdit_AktOfertCenaJed"));

        verticalLayout_13->addWidget(lineEdit_AktOfertCenaJed);

        lineEdit_AktOfertCenaSzt = new QLineEdit(widget2);
        lineEdit_AktOfertCenaSzt->setObjectName(QString::fromUtf8("lineEdit_AktOfertCenaSzt"));

        verticalLayout_13->addWidget(lineEdit_AktOfertCenaSzt);


        horizontalLayout_11->addLayout(verticalLayout_13);


        horizontalLayout_12->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_14 = new QLabel(widget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_12->addWidget(label_14);

        label_15 = new QLabel(widget2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_12->addWidget(label_15);


        horizontalLayout_10->addLayout(verticalLayout_12);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        lineEdit_AktOfertCzas = new QLineEdit(widget2);
        lineEdit_AktOfertCzas->setObjectName(QString::fromUtf8("lineEdit_AktOfertCzas"));

        verticalLayout_14->addWidget(lineEdit_AktOfertCzas);

        lineEdit_AktOfertIdDostawcy = new QLineEdit(widget2);
        lineEdit_AktOfertIdDostawcy->setObjectName(QString::fromUtf8("lineEdit_AktOfertIdDostawcy"));

        verticalLayout_14->addWidget(lineEdit_AktOfertIdDostawcy);


        horizontalLayout_10->addLayout(verticalLayout_14);


        horizontalLayout_12->addLayout(horizontalLayout_10);


        verticalLayout_15->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        pushButton_AktOfertDodaj = new QPushButton(widget2);
        pushButton_AktOfertDodaj->setObjectName(QString::fromUtf8("pushButton_AktOfertDodaj"));

        horizontalLayout_13->addWidget(pushButton_AktOfertDodaj);

        pushButton_AktOfertAktu = new QPushButton(widget2);
        pushButton_AktOfertAktu->setObjectName(QString::fromUtf8("pushButton_AktOfertAktu"));

        horizontalLayout_13->addWidget(pushButton_AktOfertAktu);

        pushButton_AktOfertUsun = new QPushButton(widget2);
        pushButton_AktOfertUsun->setObjectName(QString::fromUtf8("pushButton_AktOfertUsun"));

        horizontalLayout_13->addWidget(pushButton_AktOfertUsun);

        pushButton_AktOfertWroc = new QPushButton(widget2);
        pushButton_AktOfertWroc->setObjectName(QString::fromUtf8("pushButton_AktOfertWroc"));

        horizontalLayout_13->addWidget(pushButton_AktOfertWroc);


        verticalLayout_15->addLayout(horizontalLayout_13);

        stackedWidget->addWidget(AktOfert);
        Rap1 = new QWidget();
        Rap1->setObjectName(QString::fromUtf8("Rap1"));
        pushButton_Rap1Wroc = new QPushButton(Rap1);
        pushButton_Rap1Wroc->setObjectName(QString::fromUtf8("pushButton_Rap1Wroc"));
        pushButton_Rap1Wroc->setGeometry(QRect(340, 510, 93, 29));
        tableView_Rap1 = new QTableView(Rap1);
        tableView_Rap1->setObjectName(QString::fromUtf8("tableView_Rap1"));
        tableView_Rap1->setGeometry(QRect(1, 1, 800, 491));
        stackedWidget->addWidget(Rap1);
        Rap2 = new QWidget();
        Rap2->setObjectName(QString::fromUtf8("Rap2"));
        tableView_Rap2 = new QTableView(Rap2);
        tableView_Rap2->setObjectName(QString::fromUtf8("tableView_Rap2"));
        tableView_Rap2->setGeometry(QRect(0, 1, 800, 491));
        pushButton_Rap2Wroc = new QPushButton(Rap2);
        pushButton_Rap2Wroc->setObjectName(QString::fromUtf8("pushButton_Rap2Wroc"));
        pushButton_Rap2Wroc->setGeometry(QRect(340, 510, 93, 29));
        stackedWidget->addWidget(Rap2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Haslo", nullptr));
        pushButtonZaloguj->setText(QCoreApplication::translate("MainWindow", "Zaloguj", nullptr));
        pushButton_PoZalAktuDostaw->setText(QCoreApplication::translate("MainWindow", "Aktualizacja dostawcow", nullptr));
        pushButton_PoZalAktuOferty->setText(QCoreApplication::translate("MainWindow", "Aktualizacja oferty", nullptr));
        pushButton_PoZalAktuStatDost->setText(QCoreApplication::translate("MainWindow", "Aktualizacja statusu dostawy", nullptr));
        pushButton_PoZalRap1->setText(QCoreApplication::translate("MainWindow", "Raport1", nullptr));
        pushButton_PoZalRap2->setText(QCoreApplication::translate("MainWindow", "Raport2", nullptr));
        pushButton_PoZalWroc->setText(QCoreApplication::translate("MainWindow", "Wroc", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Id dostawy", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Status dostawy", nullptr));
        pushButton_AktStatusAktu->setText(QCoreApplication::translate("MainWindow", "Aktualizuj", nullptr));
        pushButton_AktStatusWroc->setText(QCoreApplication::translate("MainWindow", "Wroc", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Nazwa", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Miasto", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Ulica", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Nr ulicy", nullptr));
        pushButton_AktDostDod->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        pushButton_AktDostAktua->setText(QCoreApplication::translate("MainWindow", "Aktualizuj", nullptr));
        pushButton_AktDostUsun->setText(QCoreApplication::translate("MainWindow", "Usun", nullptr));
        pushButton_AktDostWroc->setText(QCoreApplication::translate("MainWindow", "Wroc", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Kod Oferty", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Cena za jednostke", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Cena za sztuke", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Czas realizacji w dniach", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Id dostawcy", nullptr));
        pushButton_AktOfertDodaj->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        pushButton_AktOfertAktu->setText(QCoreApplication::translate("MainWindow", "Aktualizuj", nullptr));
        pushButton_AktOfertUsun->setText(QCoreApplication::translate("MainWindow", "Usun", nullptr));
        pushButton_AktOfertWroc->setText(QCoreApplication::translate("MainWindow", "Wroc", nullptr));
        pushButton_Rap1Wroc->setText(QCoreApplication::translate("MainWindow", "Wroc", nullptr));
        pushButton_Rap2Wroc->setText(QCoreApplication::translate("MainWindow", "Wroc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
