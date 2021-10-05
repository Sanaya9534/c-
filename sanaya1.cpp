//#include<iostream>
//#include<conio.h>
//using namespace std;
//naming space std
//int main()
//{
  //  cout<<"hello world";
    //return 0;
//}
#include<iostream>
using namespace std;
class gparent
{
public:
void show()
    {
        cout<<"it is a class parentg";
    }
};
class cparent: public gparent
{
    public:
    void show()
    {
        cout<<"it is class parentc";
    }
};
int main()
{
    cparent c;
    c.show();
    return 0;
}
    

