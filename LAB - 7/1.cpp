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
class B: public A 
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
class C: public A 
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
    B b;
    C c;
}