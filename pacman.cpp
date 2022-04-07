#include "pacman.h"
#include <QDebug>

pacman::pacman()
{
}
/*void pacman::apac(){
    pix = QPixmap(":/new/prefix1/pacman_PNG99.png");
    a=new QLabel(this);
    a->setGeometry(250,365,25,25);
    a->setStyleSheet("border:none");
    a->setPixmap(pix);
    a->setScaledContents(true);}
*/
/*
void pacman::keyPressEvent(QKeyEvent *event){
       switch (event->key()) {
       case Qt::Key_Right:
           countmove=1;
        break;
       case Qt::Key_Left:
           countmove=2;
        break;
       case Qt::Key_Up:
           countmove=3;
        break;
       case Qt::Key_Down:
           countmove=4;
        break;
    }

}
*/
void pacman::run(int countmove,QLabel *a,QPixmap pix, QPixmap pl, QPixmap pu, QPixmap pd){
   if (countmove==1)

 {  a->setPixmap(pix);
    if(a->x()==0&&a->y()==320){
        a->setGeometry(535,a->y(),20,20);
        }
    else if(a->x()==540&&a->y()==320){
        a->setGeometry(5,a->y(),20,20);
    }
    else if(a->y()==320){
           a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==60&&a->x()>=20&&a->x()<240){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==60&&a->x()>=300&&a->x()<520){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==140&&a->x()>=20&&a->x()<520){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==200&&a->x()>=20&&a->x()<120){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==200&&a->x()>=180&&a->x()<240){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==200&&a->x()>=300&&a->x()<360){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==200&&a->x()>=420&&a->x()<520){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==260&&a->x()>=180&&a->x()<360){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==260&&a->x()>=180&&a->x()<360){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==380&&a->x()>=180&&a->x()<360){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==440&&a->x()>=20&&a->x()<240){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==440&&a->x()>=300&&a->x()<520){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==500&&a->x()>=20&&a->x()<60){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==500&&a->x()>=120&&a->x()<420){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==500&&a->x()>=480&&a->x()<520){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==560&&a->x()>=60&&a->x()<120){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==560&&a->x()>=180&&a->x()<360){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
    else if(a->y()==560&&a->x()>=420&&a->x()<480){
                       a->setGeometry(a->x()+5,a->y(),20,20);}
}

   else if (countmove==2){
       a->setPixmap(pl);
    if(a->x()==0&&a->y()==320){
        a->setGeometry(535,a->y(),20,20);}
    else if(a->x()==540&&a->y()==320){
        a->setGeometry(5,a->y(),20,20); }
    else if(a->y()==320){
           a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==60&&a->x()>20&&a->x()<=240){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==60&&a->x()>300&&a->x()<=520){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==140&&a->x()>20&&a->x()<=520){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==200&&a->x()>20&&a->x()<=120){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==200&&a->x()>180&&a->x()<=240){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==200&&a->x()>300&&a->x()<=360){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==200&&a->x()>420&&a->x()<=520){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==260&&a->x()>180&&a->x()<=360){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==380&&a->x()>180&&a->x()<=360){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==440&&a->x()>20&&a->x()<=240){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==440&&a->x()>300&&a->x()<=520){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==500&&a->x()>20&&a->x()<=60){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==500&&a->x()>120&&a->x()<=420){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==500&&a->x()>480&&a->x()<=520){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==560&&a->x()>60&&a->x()<=120){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==560&&a->x()>180&&a->x()<=360){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
    else if(a->y()==560&&a->x()>420&&a->x()<=480){
                       a->setGeometry(a->x()-5,a->y(),20,20);}
}
   else if (countmove==3){
        a->setPixmap(pu);
     if(a->x()==20&&a->y()>60&&a->y()<=200){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==20&&a->y()>440&&a->y()<=500){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==60&&a->y()>500&&a->y()<=560){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==120&&a->y()>60&&a->y()<=560){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==180&&a->y()>140&&a->y()<=200){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==180&&a->y()>260&&a->y()<=440){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==180&&a->y()>500&&a->y()<=560){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==240&&a->y()>60&&a->y()<=140){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==240&&a->y()>200&&a->y()<=260){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==240&&a->y()>440&&a->y()<=500){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==300&&a->y()>60&&a->y()<=140){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==300&&a->y()>440&&a->y()<=500){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==300&&a->y()>200&&a->y()<=260){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==420&&a->y()>60&&a->y()<=560){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==500&&a->y()>500&&a->y()<=560){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==360&&a->y()>140&&a->y()<=200){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==360&&a->y()>260&&a->y()<=440){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==360&&a->y()>500&&a->y()<=560){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==520&&a->y()>60&&a->y()<=200){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==520&&a->y()>440&&a->y()<=500){
     a->setGeometry(a->x(),a->y()-5,20,20);}
     else if(a->x()==480&&a->y()>500&&a->y()<=560){
     a->setGeometry(a->x(),a->y()-5,20,20);}

}
   else if (countmove==4){
        a->setPixmap(pd);
       if(a->x()==20&&a->y()>=60&&a->y()<200){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==20&&a->y()>=440&&a->y()<500){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==60&&a->y()>=500&&a->y()<560){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==120&&a->y()>=60&&a->y()<560){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==180&&a->y()>=140&&a->y()<200){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==180&&a->y()>=260&&a->y()<440){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==180&&a->y()>=500&&a->y()<560){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==240&&a->y()>=60&&a->y()<140){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==240&&a->y()>=200&&a->y()<260){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==240&&a->y()>=440&&a->y()<500){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==300&&a->y()>=60&&a->y()<140){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==300&&a->y()>=440&&a->y()<500){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==300&&a->y()>=200&&a->y()<260){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==420&&a->y()>=60&&a->y()<560){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==500&&a->y()>=500&&a->y()<560){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==360&&a->y()>=140&&a->y()<200){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==360&&a->y()>=260&&a->y()<440){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==360&&a->y()>=500&&a->y()<560){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==520&&a->y()>=60&&a->y()<200){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==520&&a->y()>=440&&a->y()<500){
       a->setGeometry(a->x(),a->y()+5,20,20);}
       else if(a->x()==480&&a->y()>=500&&a->y()<560){
       a->setGeometry(a->x(),a->y()+5,20,20);}

}
}
