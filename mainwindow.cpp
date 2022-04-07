#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"pacman.h"
#include<QDebug>


using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
  { c = QPixmap(":/new/prefix1/dot_PNG4.png");
    power = QPixmap(":/new/prefix1/s.png");
    ppac = QPixmap(":/new/prefix1/pacman_PNG99.png");
    gr = QPixmap(":/new/prefix1/aX5WGaeiEK6P1F60eNBdcEZjX.png");
    go = QPixmap(":/new/prefix1/orange.png");
    gb = QPixmap(":/new/prefix1/blue.png");
    gp = QPixmap(":/new/prefix1/pink.png");
    pu = QPixmap(":/new/prefix1/pu.png");
    pd = QPixmap(":/new/prefix1/pd.png");
    pl = QPixmap(":/new/prefix1/pl.png");
    //dot
     for(int i=1;i<11;i++){
        d[i]=new QLabel(this);
        d[i]->setGeometry(20+(20*i),60,20,20);
        d[i]->setStyleSheet("border:none");
        d[i]->setPixmap(c);
        d[i]->setScaledContents(true);
    }
     for(int i=1;i<11;i++){
        d[10+i]=new QLabel(this);
        d[10+i]->setGeometry(300+(20*i),60,20,20);
        d[10+i]->setStyleSheet("border:none");
        d[10+i]->setPixmap(c);
        d[10+i]->setScaledContents(true);
    }
     for(int i=1;i<25;i++){
        d[20+i]=new QLabel(this);
        d[20+i]->setGeometry(20+(20*i),140,20,20);
        d[20+i]->setStyleSheet("border:none");
        d[20+i]->setPixmap(c);
        d[20+i]->setScaledContents(true);
    }
     for(int i=1;i<11;i++){
        d[44+i]=new QLabel(this);
        d[44+i]->setGeometry(20+(20*i),440,20,20);
        d[44+i]->setStyleSheet("border:none");
        d[44+i]->setPixmap(c);
        d[44+i]->setScaledContents(true);
    }
     for(int i=1;i<9;i++){
        d[54+i]=new QLabel(this);
        d[54+i]->setGeometry(20,60+(20*(i-1)),20,20);
        d[54+i]->setStyleSheet("border:none");
        d[54+i]->setPixmap(c);
        d[54+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[62+i]=new QLabel(this);
        d[62+i]->setGeometry(120,60+(20*i),20,20);
        d[62+i]->setStyleSheet("border:none");
        d[62+i]->setPixmap(c);
        d[62+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[65+i]=new QLabel(this);
        d[65+i]->setGeometry(420,60+(20*i),20,20);
        d[65+i]->setStyleSheet("border:none");
        d[65+i]->setPixmap(c);
        d[65+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[68+i]=new QLabel(this);
        d[68+i]->setGeometry(240,440+(20*(i-1)),20,20);
        d[68+i]->setStyleSheet("border:none");
        d[68+i]->setPixmap(c);
        d[68+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[71+i]=new QLabel(this);
        d[71+i]->setGeometry(300,440+(20*(i-1)),20,20);
        d[71+i]->setStyleSheet("border:none");
        d[71+i]->setPixmap(c);
        d[71+i]->setScaledContents(true);
    }
     for(int i=1;i<15;i++){
        d[74+i]=new QLabel(this);
        d[74+i]->setGeometry(120,160+(20*(i-1)),20,20);
        d[74+i]->setStyleSheet("border:none");
        d[74+i]->setPixmap(c);
        d[74+i]->setScaledContents(true);
    }
     for(int i=1;i<15;i++){
        d[88+i]=new QLabel(this);
        d[88+i]->setGeometry(420,160+(20*(i-1)),20,20);
        d[88+i]->setStyleSheet("border:none");
        d[88+i]->setPixmap(c);
        d[88+i]->setScaledContents(true);
    }
     for(int i=1;i<11;i++){
        d[102+i]=new QLabel(this);
        d[102+i]->setGeometry(300+(20*i),440,20,20);
        d[102+i]->setStyleSheet("border:none");
        d[102+i]->setPixmap(c);
        d[102+i]->setScaledContents(true);
    }
     for(int i=1;i<5;i++){
        d[112+i]=new QLabel(this);
        d[112+i]->setGeometry(20+(20*i),200,20,20);
        d[112+i]->setStyleSheet("border:none");
        d[112+i]->setPixmap(c);
        d[112+i]->setScaledContents(true);
    }
     for(int i=1;i<5;i++){
        d[116+i]=new QLabel(this);
        d[116+i]->setGeometry(420+(20*i),200,20,20);
        d[116+i]->setStyleSheet("border:none");
        d[116+i]->setPixmap(c);
        d[116+i]->setScaledContents(true);
    }
     for(int i=1;i<5;i++){
        d[120+i]=new QLabel(this);
        d[120+i]->setGeometry(240,60+(20*(i-1)),20,20);
        d[120+i]->setStyleSheet("border:none");
        d[120+i]->setPixmap(c);
        d[120+i]->setScaledContents(true);
    }
     for(int i=1;i<5;i++){
        d[124+i]=new QLabel(this);
        d[124+i]->setGeometry(300,60+(20*(i-1)),20,20);
        d[124+i]->setStyleSheet("border:none");
        d[124+i]->setPixmap(c);
        d[124+i]->setScaledContents(true);
    }
     for(int i=1;i<9;i++){
        d[128+i]=new QLabel(this);
        d[128+i]->setGeometry(520,60+(20*(i-1)),20,20);
        d[128+i]->setStyleSheet("border:none");
        d[128+i]->setPixmap(c);
        d[128+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[136+i]=new QLabel(this);
        d[136+i]->setGeometry(20,440+(20*(i-1)),20,20);
        d[136+i]->setStyleSheet("border:none");
        d[136+i]->setPixmap(c);
        d[136+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[139+i]=new QLabel(this);
        d[139+i]->setGeometry(520,440+(20*(i-1)),20,20);
        d[139+i]->setStyleSheet("border:none");
        d[139+i]->setPixmap(c);
        d[139+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[142+i]=new QLabel(this);
        d[142+i]->setGeometry(180,520+(20*(i-1)),20,20);
        d[142+i]->setStyleSheet("border:none");
        d[142+i]->setPixmap(c);
        d[142+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[145+i]=new QLabel(this);
        d[145+i]->setGeometry(360,520+(20*(i-1)),20,20);
        d[145+i]->setStyleSheet("border:none");
        d[145+i]->setPixmap(c);
        d[145+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[148+i]=new QLabel(this);
        d[148+i]->setGeometry(200+(20*(i-1)),560,20,20);
        d[148+i]->setStyleSheet("border:none");
        d[148+i]->setPixmap(c);
        d[148+i]->setScaledContents(true);
    }
     for(int i=1;i<15;i++){
        d[151+i]=new QLabel(this);
        d[151+i]->setGeometry(140+(20*(i-1)),500,20,20);
        d[151+i]->setStyleSheet("border:none");
        d[151+i]->setPixmap(c);
        d[151+i]->setScaledContents(true);
    }
     for(int i=1;i<7;i++){
        d[165+i]=new QLabel(this);
        d[165+i]->setGeometry(120,460+(20*(i-1)),20,20);
        d[165+i]->setStyleSheet("border:none");
        d[165+i]->setPixmap(c);
        d[165+i]->setScaledContents(true);
    }
     for(int i=1;i<7;i++){
        d[171+i]=new QLabel(this);
        d[171+i]->setGeometry(420,460+(20*(i-1)),20,20);
        d[171+i]->setStyleSheet("border:none");
        d[171+i]->setPixmap(c);
        d[171+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[177+i]=new QLabel(this);
        d[177+i]->setGeometry(20+(20*(i-1)),500,20,20);
        d[177+i]->setStyleSheet("border:none");
        d[177+i]->setPixmap(c);
        d[177+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[180+i]=new QLabel(this);
        d[180+i]->setGeometry(480+(20*(i-1)),500,20,20);
        d[180+i]->setStyleSheet("border:none");
        d[180+i]->setPixmap(c);
        d[180+i]->setScaledContents(true);
    }
     for(int i=1;i<7;i++){
        d[183+i]=new QLabel(this);
        d[183+i]->setGeometry(260+(20*(i-1)),560,20,20);
        d[183+i]->setStyleSheet("border:none");
        d[183+i]->setPixmap(c);
        d[183+i]->setScaledContents(true);
    }
     for(int i=1;i<4;i++){
        d[189+i]=new QLabel(this);
        d[189+i]->setGeometry(60+(20*(i-1)),560,20,20);
        d[189+i]->setStyleSheet("border:none");
        d[189+i]->setPixmap(c);
        d[189+i]->setScaledContents(true);
    }
     for(int i=1;i<3;i++){
        d[192+i]=new QLabel(this);
        d[192+i]->setGeometry(60,520+(20*(i-1)),20,20);
        d[192+i]->setStyleSheet("border:none");
        d[192+i]->setPixmap(c);
        d[192+i]->setScaledContents(true);
    }
     for(int i=1;i<3;i++){
        d[194+i]=new QLabel(this);
        d[194+i]->setGeometry(480,520+(20*(i-1)),20,20);
        d[194+i]->setStyleSheet("border:none");
        d[194+i]->setPixmap(c);
        d[194+i]->setScaledContents(true);}
     for(int i=1;i<4;i++){
           d[196+i]=new QLabel(this);
           d[196+i]->setGeometry(440+(20*(i-1)),560,20,20);
           d[196+i]->setStyleSheet("border:none");
           d[196+i]->setPixmap(c);
           d[196+i]->setScaledContents(true);}
     //power
     p[0]=new QLabel(this);
     p[0]->setGeometry(20,60,20,20);
     p[0]->setStyleSheet("border:none");
     p[0]->setPixmap(power);
     p[0]->setScaledContents(true);
     p[1]=new QLabel(this);
     p[1]->setGeometry(520,60,20,20);
     p[1]->setStyleSheet("border:none");
     p[1]->setPixmap(power);
     p[1]->setScaledContents(true);
     p[2]=new QLabel(this);
     p[2]->setGeometry(60,560,20,20);
     p[2]->setStyleSheet("border:none");
     p[2]->setPixmap(power);
     p[2]->setScaledContents(true);
     p[3]=new QLabel(this);
     p[3]->setGeometry(480,560,20,20);
     p[3]->setStyleSheet("border:none");
     p[3]->setPixmap(power);
     p[3]->setScaledContents(true);
    //a==pacman
    pix = QPixmap(":/new/prefix1/pacr.png");
    a=new QLabel(this);
    a->setGeometry(250,380,20,20);
    a->setStyleSheet("border:none");
    a->setPixmap(pix);
    a->setScaledContents(true);
    myTimer = new QTimer(this);
    timepower = new QTimer(this);
    tt = new QTimer(this);
    connect(myTimer,SIGNAL(timeout()),this,SLOT(r()));
    connect(timepower,SIGNAL(timeout()),this,SLOT(bepower()));
    myTimer->start(100);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//pressevent for pacman
void MainWindow::keyPressEvent(QKeyEvent *event){
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
//to include the pacman (move)
void MainWindow::r(){abc->run(countmove,a,pix,pl,pu,pd);
                     for(int j=0;j<4;j++){
                        if((a->x()==p[j]->x())&&(a->y()==p[j]->y())){
                             p[j]->setGeometry(1200,1000,20,20);
                             h=1;
                             connect(tt,SIGNAL(timeout()),this,SLOT(bepower()));
                             timepower->start(100);
                             tt->start(100);
                             //connect(timepower,SIGNAL(timeout()),this,SLOT(bepower()));
                             //qDebug()<<h;
                         }
                     }
                     for(int i=1;i<200;i++){
                        if((a->x()==d[i]->x())&&(a->y()==d[i]->y())){
                             d[i]->setGeometry(1000,1000,20,20);
                             score++;
                             //qDebug()<<score;
                         }
                        }
                       }
void MainWindow::ct(){
    ctime++;
    qDebug()<<ctime;
    if(ctime==50){connect(timepower,SIGNAL(timeout()),this,SLOT(stop()));
                  h=0;
    }
                     }
void MainWindow::nopower(){h=0;}
void MainWindow::bepower(){
    //a->setPixmap(power);
    if(h==1){
        a->setPixmap(ppac);
        QTimer::singleShot(5000, this, SLOT(nopower()));
    }
    else if(h==0){
    a->setPixmap(pix);
    qDebug()<<h;}
 }
void MainWindow::stop(){}

//paint map
void MainWindow::paintEvent(QPaintEvent *){
    QPainter painter(this);
      painter.setPen(Qt::gray);
      painter.setBrush(Qt::gray);
      painter.drawRect(0,0,560,60);
      painter.drawRect(0,60,20,160);
      painter.drawRect(40,80,80,60);//a
      painter.drawRect(40,160,80,40);//f
      painter.drawRect(140,80,100,60);//b
      painter.drawRect(140,160,40,160);//g1
      painter.drawRect(180,220,60,40);//g2
      painter.drawRect(260,60,40,80);//e
      painter.drawRect(320,80,100,60);//c
      painter.drawRect(440,80,80,60);//d
      painter.drawRect(200,160,160,40);//h
      painter.drawRect(380,160,40,160);//i2
      painter.drawRect(320,220,60,40);//i1
      painter.drawRect(440,160,80,40);//j
      painter.drawRect(540,60,20,160);
      painter.drawRect(440,220,120,100);//k
      painter.drawRect(0,220,120,100);//l
      painter.drawRect(0,340,120,100);//m
      painter.drawRect(440,340,120,100);//n
      painter.drawRect(140,340,40,100);//o
      painter.drawRect(380,340,40,100);//p
      painter.drawRect(200,400,160,40);//v
      painter.drawRect(40,460,80,40);//q
      painter.drawRect(140,460,100,40);//r
      painter.drawRect(260,440,40,60);//s
      painter.drawRect(320,460,100,40);//t
      painter.drawRect(440,460,80,40);//u
      painter.drawRect(0,520,60,60);//w
      painter.drawRect(80,500,40,60);//x
      painter.drawRect(140,520,40,60);//y
      painter.drawRect(200,520,160,40);//z
      painter.drawRect(380,520,40,60);//A
      painter.drawRect(440,500,40,60);//B
      painter.drawRect(500,520,60,60);//C
      painter.drawRect(20,580,540,40);//D
      painter.drawRect(260,580,40,60);//E
      painter.drawRect(0,340,20,340);
      painter.drawRect(540,340,20,340);
      painter.drawRect(200,280,160,100);//8
      painter.drawRect(260,200,40,60);//6
}
