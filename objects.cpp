#include<iostream>
using namespace std;

class object
{
    static int c;
    
public:
   void getobjects();
   static int result()
   {
        cout<<"\nnumber of objects are "<<c;
   }
};
int object :: c;

void object:: getobjects()
{
    c++;
}


int main()
{
    int i;
    object a[5];
    
    for(i=0;i<5;i++)
        a[i].getobjects();
    cout<<"\nno. of objects are "<<object::result();
}
  
