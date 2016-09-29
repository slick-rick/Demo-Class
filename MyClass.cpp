//Implementation File
#include "MyClass.h"
#include <string>
using namespace std;
//constructors
MyClass::MyClass()
{

}

MyClass::MyClass(int n, string s)
{
   num =n;
   room = s;
}

MyClass::MyClass(int n)
{
   num = n;
}

//My Own constructor
MyClass::MyClass(string v)
{
   room = v;
}

//Destructor
MyClass::~MyClass()
{

}

//Mutator
void MyClass::setNum (int v)
{
    num = v;
}
//Accessor
int MyClass::getNum ()
{
  return num;
}

void MyClass::setRoom (string x)
{
    room = x;
}

string MyClass::getRoom ()
{
  return room;
}

void MyClass::setFun (bool y)
{
     fun = y;
}

bool MyClass::getFun ()
{
  return fun;
}
