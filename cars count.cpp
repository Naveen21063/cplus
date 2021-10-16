#include<iostream>
using namespace std;

class tollbooth
{
    static unsigned cars;
    static double amount;
public:
    static void paycar()
    {
        amount+=50;
        cars++;
    }
    static void nopaycar()
    {
        cars++;
    }
    static void display()
    {
    cout<<"no. of cars "<<cars<<"  "<<"amount "<<amount;
    }
};
 
unsigned tollbooth:: cars;
double tollbooth:: amount;

int main()
{
    int c;
    do 
    {
        cout<<"enter the choice:";
        cin>>c;
        if(c==1)
            tollbooth :: paycar();
        else if(c==2)
            tollbooth :: nopaycar();
        else if(c==3)
            tollbooth :: display();
        else
            break;
   }while(c>=1 && c<=3);
}
