#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QScroller>
#include<QString>
#include<userdata.h>
#include <QDesktopServices>
#include <QMessageBox>
#include<QScrollBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralWidget->setContentsMargins(0,0,0,0);
    ui->groupBox->setContentsMargins(0,0,0,0);
    this->setContentsMargins(0,0,0,0);

    ui->groupBox->setStyleSheet("QGroupbox QWidget{background-color: transparent}");
    ui->groupBox_2->setStyleSheet("QGroupbox QWidget{background-color: transparent}");

    ui->textBrowser->setOpenExternalLinks(true);
    QScroller::grabGesture(ui->textBrowser,QScroller::LeftMouseButtonGesture);


    current = &dummy;
    mainMenu();
 }

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::openPage()
{

    QDesktopServices::openUrl(QUrl(current->getWeb()));

}
void MainWindow::firstLayout()
{
    ui->textBrowser->setStyleSheet("background-color: #009999");
    this->setStyleSheet("background-color: #0099FF");
    current->setIndex(0);
    if (current->getSize()<=1)
    {ui->loadButton->setVisible(false);
    ui->groupBox_2->setTitle("");
    }
    else{ui->groupBox_2->setTitle(current->ScoreString());
        ui->loadButton->setVisible(true);
        }


    ui->moreInfo->setVisible(false);



    ui->groupBox->setVisible(false);
    ui->groupBox_2->setVisible(true);
    ui->groupBox_3->setVisible(false);

    ui->showMe->setVisible(false);

    fileLoader(current->getAnFile(),current->IndexToString());

    if(current->getActive())
    {ui->moreInfo->setVisible(true);}


}
void MainWindow::forwardLayout()
{
    current->incIndex();

    ui->groupBox_2->setTitle(current->ScoreString());
    if(current->getIndex() <current->getSize()-1 )
    {
    ui->groupBox->setVisible(false);
    ui->groupBox_2->setVisible(true);
    ui->groupBox_3->setVisible(false);
    if(current->getAnswered())
    ui->showMe->setVisible(false);
    ui->moreInfo->setVisible(false);
    ui->loadButton->setVisible(true);
    if(current->getAnswered())
      {fileLoader(current->getAnFile(),current->IndexToString());
        ui->showMe->setVisible(false);}
    else if(!current->getAnswered())
    {fileLoader(current->getQuFile(),current->IndexToString());
        ui->showMe->setVisible(true);}
   }
    else if(current->getIndex() < current->getSize())
    {
        ui->groupBox->setVisible(false);
        ui->groupBox_2->setVisible(true);
        ui->groupBox_3->setVisible(false);

        ui->moreInfo->setVisible(false);
        ui->loadButton->setVisible(false);
        if(current->getAnswered())
          {fileLoader(current->getAnFile(),current->IndexToString());
            ui->showMe->setVisible(false);}
        else if(!current->getAnswered())
        {fileLoader(current->getQuFile(),current->IndexToString());
            ui->showMe->setVisible(true);}

    }

}
void MainWindow::backLayout()
{
    current->decIndex();
    if (current->getIndex()== 0)
        firstLayout();
    else if(current->getIndex()>0)
    {
        ui->groupBox_2->setTitle(current->ScoreString());

        ui->groupBox->setVisible(false);
        ui->groupBox_2->setVisible(true);
        ui->groupBox_3->setVisible(false);



        ui->showMe->setVisible(false);
        ui->moreInfo->setVisible(false);
        ui->loadButton->setVisible(true);

        if(current->getAnswered())
        {fileLoader(current->getAnFile(),current->IndexToString());
            ui->showMe->setVisible(false);}

        else
        {fileLoader(current->getQuFile(),current->IndexToString());
            ui->showMe->setVisible(true);}
    }
    else
    {mainMenu();}


}
void MainWindow::mainMenu()
{
 this->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(51, 51, 255, .3), stop:1 rgba(153, 255, 204, .3)) ");
    ui->groupBox->setVisible(true);
    ui->groupBox_2->setVisible(false);
    if(AHC.getActive())
    ui->pushButton->setText(" Access To Health Care "+AHC.ScoreString());
    else {ui->pushButton->setText(" Access To Health Care ");}
    if(SIMB.getActive())
    ui->pushButton_2->setText("     Sex, Intimacy, Maybe A Baby "+SIMB.ScoreString());
    else{ui->pushButton_2->setText("     Sex, Intimacy, Maybe A Baby ");}
    if(HE.getActive())
    ui->pushButton_3->setText("Healthy Eating "+HE.ScoreString());
     else{ui->pushButton_3->setText("Healthy Eating ");}
    if(PA.getActive())
    ui->pushButton_4->setText("Physical Activity "+PA.ScoreString());
     else{ui->pushButton_4->setText("Physical Activity ");}
    if(smoke.getActive())
    ui->pushButton_5->setText("Smoking "+smoke.ScoreString());
    else{ui->pushButton_5->setText("Smoking ");}
    if(MH.getActive())
    ui->pushButton_6->setText("Mental Health "+MH.ScoreString());
     else{ui->pushButton_6->setText("Mental Health ");}
    if(IPV.getActive())
    ui->pushButton_7->setText("Intimate Partner Violence "+IPV.ScoreString());
     else{ui->pushButton_7->setText("Intimate Partner Violence ");}
    if(AandD.getActive())
    ui->pushButton_8->setText("Alcohol And Drugs "+AandD.ScoreString());
     else{ui->pushButton_8->setText("Alcohol And Drugs ");}
    if(HENV.getActive())
    ui->pushButton_9->setText("Healthy Environment "+HENV.ScoreString());
     else{ui->pushButton_9->setText("Healthy Environment ");}
}

void MainWindow::fileLoader(QString infile, QString prompt)
{
    ui->textBrowser->clear();
   QString temp1 ="{"+prompt;
   QString temp2;
   QString temp3;
    QFile file(infile);
        if(!file.open(QIODevice::ReadOnly))
        {ui->textBrowser->setText("FILE NOT FOUND");}
    else{
        QTextStream in(&file);
        while (!in.atEnd())
        {temp2 = in.readLine();
            if (temp2 == temp1)
                break;
        }
        if (temp2 == temp1)
             {while (!in.atEnd())
            {
                temp3 = in.readLine();
                if (temp3 == prompt+ "}")
                    break;
                else
                {

                ui->textBrowser->append(temp3);}

            }
        }

 ui->textBrowser->verticalScrollBar()->setValue(0);


}
}

void MainWindow::loadAnswer()
{
    fileLoader(current->getAnFile(),current->IndexToString());

    if (current->getAnswered())
        ui->groupBox_3->hide();
}
void MainWindow::loadWeb()
{// slot to varify there is a link and then show  the more info button, slot to actually open webpage is openPage()
    if (current->getWeb()!= "")//for implementation in later versions
    {ui->moreInfo->setVisible(true);}

}
void MainWindow::keyPressEvent(QKeyEvent* event)
{// handles android back button
    if ((event->key() == Qt::Key_Back)&& !ui->groupBox->isVisible()) {
       mainMenu();
    }

    else {mainMenu();}
}
void MainWindow::setRadio1()
{
    if (!current->getAnswered())
    {current->setScore(1);}
        current->setAnswered(true);
        ui->groupBox_3->hide();
        current->setActive(true);
        ui->groupBox_2->setTitle(current->ScoreString());
}
void MainWindow::setRadio2()
{ if (!current->getAnswered())
    {current->setScore(2);}
        current->setAnswered(true);
         ui->groupBox_3->hide();
         current->setActive(true);
         ui->groupBox_2->setTitle(current->ScoreString());
}
void MainWindow::setradio3()
{
    if (!current->getAnswered())
        {current->setScore(3);}
        current->setAnswered(true);
         ui->groupBox_3->hide();
         current->setActive(true);
         ui->groupBox_2->setTitle(current->ScoreString());
}
void MainWindow::resetCurrentQuiz()
{
    if (current == &dummy)
        return;
    QMessageBox msgBox;

    msgBox.setText("Are you sure you want to rest this score?");
    msgBox.setText("Reset Quiz?.");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    int choice = msgBox.exec();
    if ( choice ==QMessageBox::Yes)
    {
        current->resetQuiz();
        ui->groupBox_2->setTitle(current->ScoreString());
    }
    else {msgBox.close();}

}
void MainWindow::quizReset()
{
    if (current == &dummy)
        return;
    QMessageBox msgBox;
   
    msgBox.setText("Are you sure you want to rest all quiz scores?");
    msgBox.setText("Reset all Quizes?.");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    int choice = msgBox.exec();
    if ( choice ==QMessageBox::Yes)
    {   AHC.resetQuiz();
        SIMB.resetQuiz();
        HE.resetQuiz();
        PA.resetQuiz();
        smoke.resetQuiz();
        MH.resetQuiz();
        IPV.resetQuiz();
        HENV.resetQuiz();
        AandD.resetQuiz();
        msgBox.close();
        mainMenu();
    }
    else {msgBox.close();}


}
void MainWindow::initSIMB()
{
    if(!SIMB.getExist())
    {
        SIMB.vecInit(47);
        SIMB.setAnFile(":SIMBA");
    SIMB.setQuFile(":SIMBQ");
    SIMB.setSize(47);
    SIMB.setExist(true);
    }


    SIMB.setIndex(0);
    current = &SIMB;
    firstLayout();

}

void MainWindow::initAHC()
{
    if(!AHC.getExist())
    {
        AHC.vecInit(19);
        AHC.setAnFile(":AHCA");
    AHC.setQuFile(":AHCQ");
    AHC.setSize(19);
    AHC.setExist(true);
    }


    AHC.setIndex(0);
    current = &AHC;
    firstLayout();
}
void MainWindow::initHE()
{
    if(!HE.getExist())
    {
        HE.vecInit(27);
        HE.setAnFile(":HEA");
    HE.setQuFile(":HEQ");
    HE.setSize(27);
    HE.setExist(true);
    }


    HE.setIndex(0);
    current = &HE;
    firstLayout();
}
void MainWindow::initPA()
{
    if(!PA.getExist())
    {
        PA.vecInit(8);
        PA.setAnFile(":PAA");
    PA.setQuFile(":PAQ");
    PA.setSize(8);
    PA.setExist(true);
    PA.setScore(0);
    }


    PA.setIndex(0);
    current = &PA;
    firstLayout();
}
void MainWindow::initSmoke()
{
    if(!smoke.getExist())
    {
        smoke.vecInit(12);
        smoke.setAnFile(":SMOKEA");
    smoke.setQuFile(":SMOKEQ");
    smoke.setSize(12);
    smoke.setExist(true);
    }


    smoke.setIndex(0);
    current = &smoke;
    firstLayout();
}
void MainWindow::initMH()
{
    if(!MH.getExist())
    {
        MH.vecInit(29);
        MH.setAnFile(":MHA");
    MH.setQuFile(":MHQ");
    MH.setSize(29);
    MH.setExist(true);
    }


    MH.setIndex(0);
    current = &MH;
    firstLayout();
}
void MainWindow::initIPV()
{
    if(!IPV.getExist())
    {
        IPV.vecInit(16);
        IPV.setAnFile(":IPVA");
    IPV.setQuFile(":IPVQ");
    IPV.setSize(16);
    IPV.setExist(true);
    }


    IPV.setIndex(0);
    current = &IPV;
    firstLayout();
}
void MainWindow::initAandD()
{
    if(!AandD.getExist())
    {
        AandD.vecInit(7);
        AandD.setAnFile(":ADA0");
    AandD.setQuFile(":ADQ0");
    AandD.setSize(7);
    AandD.setExist(true);
    }


    AandD.setIndex(0);
    current = &AandD;
    firstLayout();

}
void MainWindow::initHENV()
{
    if(!HENV.getExist())
    {
        HENV.vecInit(40);
        HENV.setAnFile(":HENVA");
    HENV.setQuFile(":HENVQ");
    HENV.setSize(40);
    HENV.setExist(true);
    }


    HENV.setIndex(0);
    current = &HENV;
    firstLayout();
}
void MainWindow::initAbout()
{
    if(!about.getExist())
    {
        about.vecInit(1);
        about.setAnFile(":about");
    about.setQuFile(":about");
    about.setSize(1);
    about.setExist(true);
    }


    about.setIndex(0);
    current = &about;
    firstLayout();
}
