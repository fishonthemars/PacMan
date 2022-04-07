#ifndef PACMAN_H
#define PACMAN_H
#include <QMainWindow>
#include <QObject>
#include <QPainter>
#include <QPen>
#include <QLabel>
#include <QPixmap>
#include <QKeyEvent>
#include <QTimer>

class pacman
{

public:
    pacman();
     void keyPressEvent(QKeyEvent *event);
    // void apac();
    QLabel *a;
    QPixmap pix;
    QPixmap pu;
    QPixmap pd;
    QPixmap pl;
    int start1;
    int start2;
    int countmove=0;
    QTimer *myTimer;
public slots:
    void run(int countmove,QLabel *a,QPixmap pix,QPixmap pl,QPixmap pu, QPixmap pd);

};

#endif // PACMAN_H
