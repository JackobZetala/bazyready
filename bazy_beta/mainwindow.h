#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QtSql/QSql"
#include "QtSql/QSqlDatabase"
#include <QMessageBox>
#include <QMainWindow>
#include "QSqlQuery"
#include <QtDebug>
#include <QDialog>
#include "QSqlQueryModel"
#include "QTableView"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonZaloguj_clicked();

    void on_pushButton_PoZalWroc_clicked();

    void on_pushButton_PoZalAktuStatDost_clicked();

    void on_pushButton_AktStatusWroc_clicked();

    void on_pushButton_AktStatusAktu_clicked();

    void on_pushButton_AktDostWroc_clicked();

    void on_pushButton_AktDostUsun_clicked();

    void on_pushButton_PoZalAktuDostaw_clicked();

    void on_pushButton_AktDostDod_clicked();

    void on_pushButton_AktDostAktua_clicked();

    void on_pushButton_AktOfertWroc_clicked();

    void on_pushButton_PoZalAktuOferty_clicked();

    void on_pushButton_AktOfertUsun_clicked();

    void on_pushButton_AktOfertDodaj_clicked();

    void on_pushButton_AktOfertAktu_clicked();

    void on_pushButton_PoZalRap1_clicked();

    void on_pushButton_Rap1Wroc_clicked();

    void on_pushButton_Rap2Wroc_clicked();

    void on_pushButton_PoZalRap2_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db= QSqlDatabase::addDatabase("QMYSQL");
    QSqlQueryModel *querymodel;
    QSqlQuery query;
};
#endif // MAINWINDOW_H
