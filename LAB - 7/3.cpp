#include <iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout << "A" << " ";
        }
        ~A()
        {
            cout << "~A" << " ";
        }
};
class B: virtual public A 
{
    public:
        B()
        {
            cout << "B" << " ";
        }
        ~B()
        {
            cout << "~B" << " ";
        }
};
class C: virtual public A
{
    public:
        C()
        {
            cout << "C" << " ";
        }
        ~C()
        {
            cout << "~C" << " ";
        }
};


int main()
{
    A a;
    B b;
    C c;
}