#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<userdata.h>
#include <QMainWindow>
#include "QKeyEvent"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void fileLoader(QString,QString);
    UserData SIMB;
    UserData AHC;
    UserData HE;
    UserData PA;
    UserData smoke;
    UserData MH;
    UserData IPV;
    UserData AandD;
    UserData HENV;
    UserData about;

    UserData * current;
    UserData dummy;
    void firstLayout();
    void keyPressEvent( QKeyEvent*);
    void mainMenu();
    void setScore();
public slots:


    void openPage();
    void forwardLayout();
    void backLayout();

    void loadAnswer();
    void loadWeb();
    void setRadio1();
    void setRadio2();
    void setradio3();
    void quizReset();
    void resetCurrentQuiz();
    void initSIMB();
    void initAHC();
    void initHE();
    void initPA();
    void initSmoke();
    void initMH();
    void initIPV();
    void initAandD();
    void initHENV();
    void initAbout();
};

#endif // MAINWINDOW_H
