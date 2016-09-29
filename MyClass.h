//Header File
#include <string>
using namespace std;

class MyClass
{
   private:
    int num=0;
     string room="";
     bool fun=true;

   public:
    MyClass();//Constructor
    MyClass (int n , string s);
    MyClass (int n);

    //Destructor
    ~MyClass();

    void setNum(int v);
    int getNum();

    void setRoom (string v);
    string getRoom ();

    void setFun (bool x);
    bool getFun ();
};
