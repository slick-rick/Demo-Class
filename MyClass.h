//Header File
#include <string>
using namespace std;

class MyClass
{
   private:
    int num;
     string room;
     bool fun;

   public:
    void setNum(int v);
    int getNum();

    void setRoom (string v);
    string getRoom ();

    void setFun (bool x);
    bool getFun ();
};
