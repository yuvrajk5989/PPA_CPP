#include <iostream>
using namespace std;

class Base
{
public:
    int i, j;
}; // 8 Bytes

class Derived : public Base
{
public:
    int x, y;
}; //  16 Bytes

int main()
{

    Base *bp = NULL;
    Derived dobj;

    bp = &dobj; // Upcasting (Allowed)

    return 0;
}