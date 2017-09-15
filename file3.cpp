#include <iostream>
using namespace std;
int max(int x,int y)
{  if(x>y)
    cout<<x<<" is greater than "<<y<<endl;
   
   else
     if(y>x)
       cout<<y<<" is greater than "<<x<<endl;
      
      else
       cout<<"both are equal"<<endl;
      
   
   return 1;
}
 
int main()
{  int x,y;
  cout<<"Enter 1st number"<<endl;
  cin>>x;
  cout<<"Enter 2nd number"<<endl;
  cin>>y;
  max(x,y);
  return 0;
}
