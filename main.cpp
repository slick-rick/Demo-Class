//complete me

#include "MyClass.h"
#include <string>
#include <iostream>
using namespace std;


int main()
{
 MyClass myvar;
 MyClass myvar2;
 int var = 10;
 string str;

 cin>>var;
 cout<<"var = "<< var <<endl;

 cin>>str;
 cout<<"str = "<< str;
 myvar = myvar2;

 myvar.setNum(32);
 myvar.getNum(); 

}
