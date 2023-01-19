#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("stolarnia_magazyn");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonZaloguj_clicked()
{

    QString login = ui->lineEdit_Login->text();
    QString haslo = ui->lineEdit_Haslo->text();
    if(db.open())
    {

        query.prepare(QString("SELECT * FROM uzytkownik WHERE login = :login AND rola = :haslo"));
        query.bindValue(":login",login);
        query.bindValue(":haslo",haslo);

        if(!query.exec())
        {
            QMessageBox::information(this,"ERROR","Brak wartosci");
        }

        else
        {
            while(query.next())
            {
                QString usernameFromDB = query.value(1).toString();
                QString passwordFromDB = query.value(2).toString();

                if(usernameFromDB == login && passwordFromDB == haslo)
                {
                    ui->stackedWidget->setCurrentIndex(1);
                    ui->lineEdit_Login->clear();
                    ui->lineEdit_Haslo->clear();
                }
                else
                {
                    QMessageBox::information(this,"Logowanie","Nie udało się zalogować");
                }


            }

        }
    }

    else
    {
        QMessageBox::information(this,"Connection","Nie połączono z bazą");
    }
}


void MainWindow::on_pushButton_PoZalWroc_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_PoZalAktuStatDost_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

    if(db.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT * FROM dostawa");
        ui->tableViewAktStatus->setModel(querymodel);
    }else {
        QMessageBox::information(this,"FAIL","Connection fail");
    }

}


void MainWindow::on_pushButton_AktStatusWroc_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    delete querymodel;
}


void MainWindow::on_pushButton_AktStatusAktu_clicked()
{

    if(db.open())
    {
        QString Id = ui->lineEdit_AktStatusId->text();
        QString Status = ui->lineEdit_AktStatusStatus->text();

        query.prepare("UPDATE dostawa SET status='"+Status+"' WHERE id_dostawy='"+Id+"'");


        if(query.exec())
        {
            QMessageBox::information(this,"Aktualizcja","Udalo sie zaktualizowac wartosci");
            delete querymodel;
            querymodel = new QSqlQueryModel();
            querymodel->setQuery("SELECT * FROM dostawa");
            ui->tableViewAktStatus->setModel(querymodel);
        }

        else
        {
            QMessageBox::information(this,"ERROR","Brak wartosci");

        }
    }
}


void MainWindow::on_pushButton_AktDostWroc_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    delete querymodel;
}


void MainWindow::on_pushButton_AktDostUsun_clicked()
{
    if(db.open())
    {
        QString Id = ui->lineEdit_AktDosId->text();

        query.prepare("DELETE FROM dostawca WHERE id_dostawcy='"+Id+"'"
                      );





        if(query.exec())
        {
            QMessageBox::information(this,"Usun","Usunieto wartosc");
            delete querymodel;
            querymodel = new QSqlQueryModel();
            querymodel->setQuery("SELECT * FROM dostawca");
            ui->tableView_AktDost->setModel(querymodel);


        }

        else
        {
            QMessageBox::information(this,"ERROR","Nie usunieto wartosci");


        }
    }
    else
    {
        QMessageBox::information(this,"ERROR","Nie dziala");

    }
}


void MainWindow::on_pushButton_PoZalAktuDostaw_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

    if(db.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT * FROM dostawca");
        ui->tableView_AktDost->setModel(querymodel);
    }else {
        QMessageBox::information(this,"FAIL","Connection fail");
    }
}


void MainWindow::on_pushButton_AktDostDod_clicked()
{
    if(db.open())
    {
        QString Email = ui->lineEdit_AktDostEmail->text();
        QString Miasto = ui->lineEdit_AktDostMiasto->text();
        QString Nazwa = ui->lineEdit_AktDostNazwa->text();
        QString NrUlicy = ui->lineEdit_AktDostNrUlicy->text();
        QString Ulica = ui->lineEdit_AktDostUlica->text();


        query.prepare("INSERT INTO dostawca (Email,Adres_miasto,Nazwa,Adres_nr,Adres_ulica)"
                      "VALUES (:Email,:Miasto,:Nazwa,:NrUlicy,:Ulica)");


        query.bindValue(":Email",Email);
        query.bindValue(":Miasto",Miasto);
        query.bindValue(":Nazwa",Nazwa);
        query.bindValue(":NrUlicy",NrUlicy);
        query.bindValue(":Ulica",Ulica);


        if(query.exec())
        {
            QMessageBox::information(this,"Wartosci","Wpisano wartosci");
            delete querymodel;
            querymodel = new QSqlQueryModel();
            querymodel->setQuery("SELECT * FROM dostawca");
            ui->tableView_AktDost->setModel(querymodel);
        }

        else
        {
            QMessageBox::information(this,"ERROR","Brak wartosci");

        }
    }
}


void MainWindow::on_pushButton_AktDostAktua_clicked()
{
    if(db.open())
    {
        QString Id = ui->lineEdit_AktDosId->text();
        QString Email = ui->lineEdit_AktDostEmail->text();
        QString Miasto = ui->lineEdit_AktDostMiasto->text();
        QString Nazwa = ui->lineEdit_AktDostNazwa->text();
        QString NrUlicy = ui->lineEdit_AktDostNrUlicy->text();
        QString Ulica = ui->lineEdit_AktDostUlica->text();

        query.prepare("UPDATE dostawca SET Email='"+Email+"',Adres_miasto ='"+Miasto+"',Adres_ulica ='"+Ulica+"',Adres_nr ='"+NrUlicy+"',Nazwa ='"+Nazwa+"' WHERE id_dostawcy='"+Id+"'");


        if(query.exec())
        {
            QMessageBox::information(this,"Aktualizcja","Udalo sie zaktualizowac wartosci");
            delete querymodel;
            querymodel = new QSqlQueryModel();
            querymodel->setQuery("SELECT * FROM dostawca");
            ui->tableView_AktDost->setModel(querymodel);
        }

        else
        {
            QMessageBox::information(this,"ERROR","Brak wartosci");

        }
    }
}


void MainWindow::on_pushButton_AktOfertWroc_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    delete querymodel;
}


void MainWindow::on_pushButton_PoZalAktuOferty_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

    if(db.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT * FROM oferta");
        ui->tableView_AktOfert->setModel(querymodel);
    }else {
        QMessageBox::information(this,"FAIL","Connection fail");
    }
}


void MainWindow::on_pushButton_AktOfertUsun_clicked()
{
    if(db.open())
    {
        QString Kod = ui->lineEdit_AktOfertKod->text();

        query.prepare("DELETE FROM oferta WHERE kod_oferty='"+Kod+"'"
                      );

        if(query.exec())
        {
            QMessageBox::information(this,"Usun","Usunieto wartosc");
            delete querymodel;
            querymodel = new QSqlQueryModel();
            querymodel->setQuery("SELECT * FROM oferta");
            ui->tableView_AktOfert->setModel(querymodel);


        }

        else
        {
            QMessageBox::information(this,"ERROR","Nie usunieto wartosci");


        }
    }
    else
    {
        QMessageBox::information(this,"ERROR","Nie dziala");

    }
}


void MainWindow::on_pushButton_AktOfertDodaj_clicked()
{
    if(db.open())
    {
        QString Jed = ui->lineEdit_AktOfertCenaJed->text();
        QString Szt = ui->lineEdit_AktOfertCenaSzt->text();
        QString Czas = ui->lineEdit_AktOfertCzas->text();
        QString Id = ui->lineEdit_AktOfertIdDostawcy->text();



        query.prepare("INSERT INTO oferta (cena_za_jedn,cena_za_szt,czas_realizacji_w_dniach,id_dostawcy)"
                      "VALUES (:Jed,:Szt,:Czas,:Id)");


        query.bindValue(":Jed",Jed);
        query.bindValue(":Szt",Szt);
        query.bindValue(":Czas",Czas);
        query.bindValue(":Id",Id);



        if(query.exec())
        {
            QMessageBox::information(this,"Wartosci","Wpisano wartosci");
            delete querymodel;
            querymodel = new QSqlQueryModel();
            querymodel->setQuery("SELECT * FROM oferta");
            ui->tableView_AktOfert->setModel(querymodel);
        }

        else
        {
            QMessageBox::information(this,"ERROR","Brak wartosci");

        }
    }
}


void MainWindow::on_pushButton_AktOfertAktu_clicked()
{
    if(db.open())
    {
        QString Jed = ui->lineEdit_AktOfertCenaJed->text();
        QString Szt = ui->lineEdit_AktOfertCenaSzt->text();
        QString Czas = ui->lineEdit_AktOfertCzas->text();
        QString Id = ui->lineEdit_AktOfertKod->text();

        query.prepare("UPDATE oferta SET cena_za_jedn='"+Jed+"',cena_za_szt ='"+Szt+"',czas_realizacji_w_dniach ='"+Czas+"' WHERE kod_oferty='"+Id+"'");


        if(query.exec())
        {
            QMessageBox::information(this,"Aktualizcja","Udalo sie zaktualizowac wartosci");
            delete querymodel;
            querymodel = new QSqlQueryModel();
            querymodel->setQuery("SELECT * FROM oferta");
            ui->tableView_AktOfert->setModel(querymodel);
        }

        else
        {
            QMessageBox::information(this,"ERROR","Brak wartosci");

        }
    }
}


void MainWindow::on_pushButton_PoZalRap1_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    if(db.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT * FROM oferta");
        ui->tableView_Rap1->setModel(querymodel);
    }else {
        QMessageBox::information(this,"FAIL","Connection fail");
    }
}


void MainWindow::on_pushButton_Rap1Wroc_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    delete querymodel;
}


void MainWindow::on_pushButton_Rap2Wroc_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    delete querymodel;
}


void MainWindow::on_pushButton_PoZalRap2_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);

    if(db.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT * FROM oferta");
        ui->tableView_Rap2->setModel(querymodel);
    }else {
        QMessageBox::information(this,"FAIL","Connection fail");
    }
}

