#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager> //to make requests
#include <QNetworkReply> // to handle replies
#include <QPixmap>


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
    void on_pushButton_clicked();

private:
     QString myUrl="";
    Ui::MainWindow *ui;
    QNetworkAccessManager * m_networkManager;
             QNetworkReply * m_networkReply;


};
#endif // MAINWINDOW_H
