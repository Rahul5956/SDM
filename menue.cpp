#include<iostream>
using namespace std;

int main()
{
    int ch,r,l,w,h,b,area;

    cout<<"1: Area of cicle 2: Area of rectangle 3: Area of triangle 4: Exit"<<endl;
   do
   {

    cout<<"Enter your choice"<<endl;
    cin>>ch;  
   
   
    switch (ch)
    {
    case 1: cout<<"enter the radius of circle"<<endl;
            cin>>r;

            area=3.14*r;
            cout<<"area of circle is = "<<area<<endl;
      
        break;

     case 2:   cout<<"enter the length and width of rectangle"<<endl;
            cin>>l>>w;

            area=l*w;
            cout<<"area of rectangle is = "<<area<<endl;
      
        break;

    case 3:   cout<<"enter the base and height of triangle"<<endl;
            cin>>b>>h;

            area=(b*h)/2;
            cout<<"area of triangle is = "<<area<<endl;
            break;

    case 4:   exit;


    
    default: cout<<"enter the valid choice"<<endl;
        break;
    }
    } while (ch!=4);
}