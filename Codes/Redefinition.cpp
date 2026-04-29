#include <iostream>
using namespace std;

class Base
{
public:
    int i, j;

    void fun()
    {
        cout << "Inside Base fun\n";
    }

    void gun()
    {
        cout << "Inside Base gun\n";
    }

    void sun()
    {
        cout << "Inside Base sun\n";
    }
}; // 8 Bytes

class Derived : public Base
{
public:
    int x, y;

    void fun()
    {
        cout << "Inside Derived fun\n";
    } // Redefinition

    void sun()
    {
        cout << "Inside Derived sun\n";
    } // Redefinition

    void run()
    {
        cout << "Inside Derived run\n";
    } // Definition
}; //  16 Bytes

int main()
{

    Base *bp = NULL;

    bp = new Derived(); // Upcasting (Allowed)

    bp->fun(); // Base fun
    bp->gun(); // Base gun
    bp->sun(); // Base sun
    // bp->run(); // Error

    return 0;
}