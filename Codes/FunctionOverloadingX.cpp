#include <iostream>
using namespace std;

class Hello
{
public:
    // Addition@2ii
    int Addition(int a, int b)
    {
        return a + b;
    }

    // Addition@3iii
    int Addition(int a, int b, int c)
    {
        return a + b + c;
    }

    // Addition@4iiii
    int Addition(int a, int b, int c, int d)
    {
        return a + b + c + d;
    }
};

int main()
{

    Hello hobj;

    cout << hobj.Addition(10, 20) << "\n";
    cout << hobj.Addition(10, 20, 30) << "\n";
    cout << hobj.Addition(10, 20, 30, 40) << "\n";

    return 0;
}
