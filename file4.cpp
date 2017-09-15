#include <iostream>
using namespace std;

int evod(int x)
{ if(x>=0&&x%2==0)
  cout<<"the number entered is even"<<endl;
  else
      if(x>0&&x%2==1)
      cout<<"The number entered is odd"<<endl;
      else
      cout<<"invalid entry"<<endl;
 return 1;
}

int main()
{ int x;
  cout<<"Enter any positive integer"<<endl;
  cin>>x;
  evod(x);
  return 0;
}
