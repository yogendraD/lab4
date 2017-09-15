#include <iostream>
using namespace std;
int main()
{   
   float cube(float);
                           //function prototype
   float a,cu;
   cout<<"Enter any number"<<endl;
   cin>>a;                      //function calling
                                 
   cu=cube(a);
   
   cout<<"The cube of number"<<a<<" is"<<cu<<endl;
   return 0;
}

float cube(float a)
{  
   float cu;
   cu=a*a*a;
   return(cu);
}
