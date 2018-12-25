#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QVBoxLayout>
#include <QComboBox>
#include <QLayoutItem>
#include <QWidget>
#include <QSpinBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->numberlineEdit,&QLineEdit::textChanged,this,&Dialog::idtextchanged);
    connect(ui->namelineEdit,&QLineEdit::textChanged,this,&Dialog::nametextchanged);
}

Dialog::~Dialog()
{
    delete ui;
}

/**
 * @brief Dialog::setquery
 */
void Dialog::setquery(QSqlDatabase getdb, QStringList getcourselist, QStringList getnamelist)
{
    test=getdb;
    allcourselist2=getcourselist;
    allnamelist=getnamelist;
    if(test.isOpen())
            test.close();

        if(!test.open())
        {
            QMessageBox::critical((this),tr("错误"),tr("无法连接到数据库！\n请检查数据库连接配置"));
            return;
        }

}

void Dialog::on_chooseButton_clicked()
{
    count++;
    if(count>1)
    {
        addcourse<<combo->currentText();
//        addgradepoint<<lineedit->text();
        addgradepoint<<combo1->currentText();
        qDebug()<<addgradepoint<<addcourse;
    }


    ui->chooseButton->setEnabled(false);
    QWidget *widget = new QWidget(this);
    combo = new QComboBox(this); combo->setMinimumWidth(100);
//    lineedit = new QLineEdit(this);
//   spinBox =new QSpinBox(this);
//  spinBox->setRange(0, 100);
    combo1=new QComboBox(this);
    combo1->setWindowTitle("成绩输入");
    QStringList s;
    for(int i=0;i<101;i++){
        s<<QString("%1").arg(i);
    }
    combo1->addItems(s);

    QHBoxLayout *hlayout = new QHBoxLayout;
    hlayout->addWidget(combo);
//    hlayout->addWidget(lineedit);
//    hlayout->addWidget(spinBox);
    hlayout->addWidget(combo1);
    widget->setLayout(hlayout);
    ui->verticalLayout->addWidget(widget);
    combo->addItems(allcourselist2);

//    void (QSpinBox:: *spinBoxSignal)(int) = &QSpinBox::valueChanged;
    connect(combo1,&QComboBox::currentTextChanged,this,&Dialog::gradetextchanged);

}


/**
 * @brief Dialog::gradeedited
 */
//void Dialog::gradeedited()
//{
//    //gradepoints<<lineedit->text();
//    qDebug()<<"1111111"<<gradepoints;
//}

/**
 * @brief Dialog::gradetextchanged
 */
void Dialog::gradetextchanged()
{
    ui->chooseButton->setEnabled(true);
}


void Dialog::idtextchanged()
{
            QString str;
            str=QString("where sNumber='%1'").arg(ui->numberlineEdit->text());

                QString stb ;
                stb=QString("select *from t_stud_info"
                            " %1;").arg(str);
                QSqlQuery query(test);
                query.exec(stb);//qDebug()<<stb;
                while(query.next()){
//                            qDebug()<<query.value(0).toString()<<query.value(1).toString()
//                                   <<query.value(2).toString()<<query.value(3).toString()
//                                     <<query.value(4).toString()<<query.value(5).toString();
                            ui->namelineEdit->setText(query.value(1).toString());
                            ui->majorlineEdit->setText(query.value(2).toString());
                            ui->gradelineEdit->setText(query.value(3).toString());
                            ui->timelineEdit->setText(query.value(4).toString());
                            ui->phonelineEdit->setText(query.value(5).toString());
                }
}


/**
 * @brief Dialog::nametextchanged
 */
void Dialog::nametextchanged()
{
    QString str;
    str=QString("where sName='%1'").arg(ui->namelineEdit->text());

        QString stb ;
        stb=QString("select *from t_stud_info"
                    " %1;").arg(str);
        QSqlQuery query(test);
        query.exec(stb);
        while(query.next()){
                    qDebug()<<query.value(0).toString()<<query.value(1).toString()
                           <<query.value(2).toString()<<query.value(3).toString()
                             <<query.value(4).toString()<<query.value(5).toString();
                    ui->numberlineEdit->setText(query.value(0).toString());
                    ui->majorlineEdit->setText(query.value(2).toString());
                    ui->gradelineEdit->setText(query.value(3).toString());
                    ui->timelineEdit->setText(query.value(4).toString());
                    ui->phonelineEdit->setText(query.value(5).toString());
        }
}

/**
 * @brief Dialog::on_okButton_clicked
 */

void Dialog::on_okButton_clicked()
{
    ui->okButton->setEnabled(false);
    addcourse<<combo->currentText();
    addgradepoint<<combo1->currentText();
    qDebug()<<addgradepoint<<addcourse;

    QSqlQuery query(test);
    for(int i=0;i<addgradepoint.size();i++)
    {
        QString str;
        str=QString("where courseName='%1'").arg(addcourse.at(i));

            QString stb ;
            stb=QString("select courseID from t_courses "
                        " %1;").arg(str);
            //qDebug()<<stb;
            query.exec(stb);
            while(query.next()){
                addcoursenum<<query.value(0).toString();
            }
    }
    QString stb ;
    Number=QString("%1").arg(ui->numberlineEdit->text());
    Name=QString("%1").arg(ui->namelineEdit->text());
    Major=QString("%1").arg(ui->majorlineEdit->text());
    Class=QString("%1").arg(ui->gradelineEdit->text());
    EnrolledYear=QString("%1").arg(ui->timelineEdit->text());
    Phone=QString("%1").arg(ui->phonelineEdit->text());
    QString InsertStr = QString("insert into test.t_stud_info (sNumber, sName, sMajor, sClass, sEnrolledYear, sPhone) values ('%1','%2','%3','%4','%5','%6')").arg(Number).arg(Name).arg(Major).arg(Class).arg(EnrolledYear).arg(Phone);
    InsertStudentInfo(InsertStr);

    for(int i=0;i<addgradepoint.size();i++)
    {
        stb=QString("insert into t_stud_course_info value ('','%1','%2','%3','','');").arg(ui->numberlineEdit->text(),addcoursenum.at(i),addgradepoint.at(i));
        query.exec(stb);
    }
    if(!query.exec(stb))
    {
        qDebug()<<query.lastError();
    }
    else{
        QMessageBox::information(NULL, tr("Info"),tr("插入成功"));
        this->close();
    }

}

void Dialog::on_cancelButton_clicked()
{
    this->close();
}
void Dialog::InsertStudentInfo(QString sql){
     QSqlQuery insert(sql);
}

