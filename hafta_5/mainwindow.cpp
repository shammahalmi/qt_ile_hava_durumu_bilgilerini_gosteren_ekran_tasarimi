#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QNetworkRequest>
#include <QtDebug>
#include <ui_mainwindow.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    m_networkManager= new QNetworkAccessManager(this);
    m_networkReply= m_networkManager->get(QNetworkRequest(QUrl("https://qtfirebaseentegre-default-rtdb.firebaseio.com/lisans öğrencisi.json")));

   


}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

     // hava durumu bilgilerini openweathermap'tan alınca aşağıdaki gibi değiştirilebilir.

    ui->sicaklik_9->setText("5/5");
    //yolu kopyaladıktan sonra slash'ların tersini yazmamız gerek

    //bilgisayardan path alınması istenmiyoursa bunu takip edebiliriz:
    //Create a .qrc file with File > New File > Files and Classes > Qt > Qt Resource File, add a "prefix" (some name),
    //add your image file there, and then use QPixmap newIcon(":/yourprefix/new.png") to access it in your application.
    QPixmap pix(":/new/prefix1/cloudy_sun.jpg");
    //aşağıdaki gibi istenilen foto'yu değiştirebiliriz
    ui->label_pic->setPixmap(pix);
}

