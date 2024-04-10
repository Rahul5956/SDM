#include<iostream>
using namespace std;

class date{

public: int dd,mm,yy;

date()
{
    cout<<"---Default constructor--"<<endl;

    dd=12;
    mm=3;
    yy=2024;

}

date(int dd,int mm, int yy)
{
        cout<<"---parameterised constructor--"<<endl;
        this->dd=dd;
        this->mm=mm;
        this->yy=yy;

}
void display()
{
    cout<<"date = "<<dd<<"/"<<mm<<"/"<<yy<<endl;

}

void setDay(int dd)
{
    this->dd=dd;

}

void setMonth(int mm)
{
    this->mm=mm;

}

void setyear(int yy)
{
    this->yy=yy;
}

int getday()
{
    return this->dd=dd;
}

int getmonth()
{
    return this->mm=mm;
}

int getyear()
{
    return this->yy=yy;
}
};

int main()
{

    date d1;
    d1.display();
    date d2(12,4,1999);
    d2.display();

    cout<<d2.getyear()<<endl<<d2.getday()<<endl<<d2.getmonth()<<endl;
}