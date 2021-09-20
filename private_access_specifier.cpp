// private access specifier.cpp
#include <iostream>
using namespace std;

class base
{
    private:
        int x;

    protected:
        int y;

    public:
        int z;

    base() //constructor to initialize data members
    {
       x = 1;
       y = 2;
       z = 3;
    }
};

class derive: private base
{
    //y and z becomes private members of class derive and x remains private
    public:
        void showdata()
        {
           cout << "x is not accessible" << endl;
               cout << "value of y is " << y << endl;
               cout << "value of z is " << z << endl;
               cout << "private acess specifiers" << endl;
        }
};
int main()
{
     derive a; //object of derived class
     a.showdata();
     //a.x = 1;   not valid : private member can't be accessed outside of class
     //a.y = 2;   not valid : y is now private member of derived class
     //a.z = 3;   not valid : z is also now a private member of derived class
     return 0;
}   //end of program
