#include <QCoreApplication>
#include<QDebug>
#include<QVector>
#include<QList>
#include<QString>
#include <iostream>

using namespace std;
class stu                                                              //生成stu类
{
public:
    int number;
    QString name;
    int score1;
    int score2;

};

bool comparename(const stu stu1,const stu stu2)                        //生成排序函数
{
    return stu1.name> stu2.name;
}
bool comparescore1(const stu stu1,const stu stu2)
{
    return stu1.score1> stu2.score1;
}
bool comparescore2(const stu stu1,const stu stu2)
{
    return stu1.score2> stu2.score2;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    stu stu1,stu2,stu3,stu4;                                          //给类赋予初值

    stu1.number=1403130209; stu1.name="鲁智深"; stu1.score1=80; stu1.score2=72;

    stu2.number=1403140101; stu2.name="林冲";   stu2.score1=82; stu2.score2=76;

    stu3.number=1403140102; stu3.name="宋江";   stu3.score1=76; stu3.score2=85;

    stu4.number=1403140103; stu4.name="武松";   stu4.score1=88; stu4.score2=80;

    QList<stu> list;                                                  //用QList函数创建数组
    list<<stu1<<stu2<<stu3<<stu4;

    qDebug("原表格为:");
    qDebug("学号\t\t 姓名\t\t课程一\t课程二");
    for(int i=0;i<4;i++)                                              //输出每一列数值
    qDebug()<<list.at(i).number<<"\t"<<list.at(i).name<<"\t"<<list.at(i).score1<<"\t"<<list.at(i).score2;
    qDebug("\n");

    std:: sort(list.begin(),list.end(),comparename);                  //按姓名排序
    qDebug("按姓名排序:");
    qDebug("学号\t\t 姓名\t\t课程一\t课程二");
    for(int i=0;i<4;i++)
    qDebug()<<list.at(i).number<<"\t"<<list.at(i).name<<"\t"<<list.at(i).score1<<"\t"<<list.at(i).score2;
    qDebug("\n");

    std:: sort(list.begin(),list.end(),comparescore1);                //按课程一排序
    qDebug("按课程一排序:");
    qDebug("学号\t\t 姓名\t\t课程一\t课程二");
    for(int i=0;i<4;i++)
    qDebug()<<list.at(i).number<<"\t"<<list.at(i).name<<"\t"<<list.at(i).score1<<"\t"<<list.at(i).score2;
    qDebug("\n");

    std:: sort(list.begin(),list.end(),comparescore2);                //按课程二排序
    qDebug("按课程二排序:");
    qDebug("学号\t\t 姓名\t\t课程一\t课程二");
    for(int i=0;i<4;i++)
    qDebug()<<list.at(i).number<<"\t"<<list.at(i).name<<"\t"<<list.at(i).score1<<"\t"<<list.at(i).score2;

    return a.exec();
    }
