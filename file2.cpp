#include <iostream>
#include <math.h>
using namespace std;

int diameter(int r)
{ int d;
  d=r*2;
  cout<<"the diameter of circle is"<<d<<endl;
  return 3;
}
int circumference(int r)
{ double c;
  c=2*3.1416*r;
  cout<<"The circumference of circle is"<<c<<endl;
   return 2;
}
int area(int r)
{ double a;
  a=3.1416*r*r;
  cout<<"The area of circle is"<<a<<endl;
   return 1;
}

int main()
{ int r;
  cout<<"enter the radius of circle"<<endl;
  cin>>r;
  diameter(r);
  circumference(r);
  area(r);
  return 0;
}
