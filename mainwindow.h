#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include"pacman.h"
#include<fstream>
#include<QFile>
#include<QPaintEvent>
#include<QPainter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *event);
    pacman *abc;


private:
    QLabel *a;
    QPixmap pix;
    QPixmap c;
    QPixmap power;
    QPixmap ppac;
    QPixmap gr;
    QPixmap go;
    QPixmap gp;
    QPixmap gb;
    QPixmap pu;
    QPixmap pd;
    QPixmap pl;

    Ui::MainWindow *ui;
    int countmove;
    char map[36][30];
    int m[36][30];
    QTimer *myTimer;
    QTimer *timepower;
    QTimer *tt;
    QLabel *d[200];
    QLabel *p[4];
    int score=0;
    int h=0;//bool if power
    int ctime=0;
  public slots:
   void r();
   void bepower();
   void nopower();
   void ct();
   void stop();
};

#endif // MAINWINDOW_H
