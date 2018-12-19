#include "model.h"
model::model()
{
    num1=0;
    num2=0;
    flag="";
}
void model::setNum1(int num)
{
    this->num1=num;
}
void model::setNum2(int num)
{
    this->num2=num;
}
void model::setFlag(QString flag)
{
    this->flag=flag;
}
QString model::calculte()
{
    int result=0;
        if(flag=="+")
            result=num1+num2;
        else if (flag == "-")
            result=num1-num2;
        else if (flag == "*")
            result=num1*num2;
        else if (flag == "/")
        {
            if (num2 == 0)
                return "ERROR";
            else
                result = num1 / num2;
        }
         else
            return QString::number(num1) ;
        return QString::number(result);
}
