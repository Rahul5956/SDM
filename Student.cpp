#include<iostream>
using namespace std;

class student{

public: int rollno;
float total,m1,m2,m3,per,grd;
//total=0.0;

student()
{
    cout<<"--Get started default constructor--"<<endl;
    rollno=12;
    m1=40;
    m2=56;
    m3=90;

}

student(int rollno, float m1, float m2, float m3)
{
    cout<<"----get started parameterised constructor--"<<endl;
    this->rollno=rollno;
    this->m1=m1;
    this->m2=m2;
    this->m3=m3;
    
}


 void display()
 {
    total=m1+m2+m3;
   per=total/3;
    if(per>35)
    {
        if(per>=60)
        {
            if(per>=80)
            {
                cout<<"Grade is A"<<endl;
            }
            else
            cout<<"Grade is b"<<endl;
        }
        else
         cout<<"Grade is c"<<endl;
    }
    else
      cout<<"Your fail"<<endl;

      cout<<"roll no = "<<rollno<<endl;
      cout<<"mark1 = "<<m1<<endl<<"mark2 = "<<m2<<endl<<"mark 3 = "<<m3<<endl;
      cout<<"total = "<<total<<endl;
      cout<<"percentage = "<<per<<endl;
 }

 void set(int rollno)
 {
    this->rollno=rollno;
 }
 int get()
 {
    return this->m2=m2;

 }


};

int main()
{
    student s1;
    s1.display();
    student s2(22,60,56.5,70);
    s2.display();
    cout<<s2.get()<<endl;


}