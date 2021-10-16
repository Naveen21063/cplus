#include<iostream>
using namespace std;

class student
{
    string name;
    int id;
    int sub[6];
    
public:
    void getdata();
    int result();
};

void student :: getdata()
{
    int i;
    cout<<"\nenter the name and rollno ";
    cin>>name>>id;
    cout<<"\nenter the marks in 6 subjects ";
    for(i=0;i<6;i++)
        cin>>sub[i];
}

int student :: result()
{
    int total=0,avg,i;
    cout<<"name "<<name<<" "<<"id "<<id<<endl;
    for(i=0;i<6;i++)
        total+=sub[i];
    avg=total/6.0;
    cout<<"total marks are "<<total<<"average marks "<<avg;
    for(i=0;i<6;i++)
    {
        if(sub[i]<35)
        {
            cout<<"\nfail";
            goto last;
        }
    }
    cout<<"\npass";
    

    last:
        return 0;
}

int main()
{
    student stu;
    stu.getdata();
    stu.result();
}
