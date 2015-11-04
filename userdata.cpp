#include "userdata.h"
UserData::UserData():index(0),score(0),exist(false),active(false){}
UserData::UserData(int s):index(0),score(0),exist(false),active(false){size= s;}
UserData::~UserData(){delete this;}
void UserData::setSize(int s){size=s;}
void UserData::setAnFile(QString s){answerFile= s;}
void UserData::setQuFile(QString s){questFile = s;}
void UserData::setWebPage(QString s){webpage[index]=s;}
void UserData::setAnswered(bool s){answered[index]=s;}
void UserData::setRadio(bool s){radio[index]= s;}
void UserData::setIndex(int s){index =s;}
void UserData::setScore(int s){score = score+s;}
void UserData::incIndex(){++index;}
void UserData::decIndex(){--index;}
QString UserData::getWeb()const{return webpage[index];}
QString UserData::getAnFile()const {return answerFile;}
QString UserData::getQuFile()const{return questFile;}
bool UserData::getAnswered()const{return answered[index];}
bool UserData::getRadio()const{return radio[index];}
int UserData::getScore()const{return score;}
int UserData::getIndex()const{return index;}
int UserData::getSize()const{return size;}
bool UserData::getExist()const{return exist;}
bool UserData::getActive()const{return active;}
void UserData::setExist(bool s){exist = s;}
void UserData::setActive(bool s){active = s;}
void UserData::vecInit(int s)
{
    answered.resize(s);
    radio.resize(s);
    //prompt.resize(s);
}
void UserData::resetQuiz()
{
    score = 0;

    for (int i=0;i<answered.size();++i)
        answered[i]= false;
    active=false;
    index = 0;

}
QString UserData::IndexToString()
{
    QString s = QString::number(index);
    return s;
}
QString UserData::ScoreString()
{
    int complete=0;
    int tmpScore = (score*100)/((size-1)*3);
    for(int i=0;i<answered.size();++i)
    {if (answered[i]==true)
            ++complete;}
    QString sComplete = QString::number(complete);
    QString sScore = QString::number(tmpScore);
    QString sSize = QString::number(size-1);


    return "["+sComplete+"/"+sSize+"]"+" "+sScore+"%";
}
