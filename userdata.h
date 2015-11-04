#ifndef USERDATA_H
#define USERDATA_H
#include<QString>
#include<QVector>

class UserData
{
    int index;
    int score;
    int size;
    bool exist;
    bool active;
    QVector<bool> answered;
    QVector<bool> radio;
    QVector<QString> webpage;
    QString questFile;
    QString answerFile;
    //QVector<QString> prompt;


public:
    UserData();
    UserData(int);
    ~UserData();
        void setAnFile(QString);
        void setQuFile(QString);
        void setWebPage(QString);
        void setAnswered(bool);
        void setRadio(bool);
        void setIndex(int);
        void incIndex();
        void decIndex();
        void setScore(int);
        void setSize(int s);
        void setActive(bool);
        QString getWeb()const;
        QString getAnFile()const;
        QString getQuFile()const;
        bool getAnswered()const;
        bool getRadio()const;
        int getScore()const;
        int getIndex()const;
        int getSize() const;
        bool getExist()const;
        void setExist(bool);
        void vecInit(int);
        void resetQuiz();
        bool getActive()const;
        QString ScoreString();
        QString IndexToString();

};

#endif // USERDATA_H
