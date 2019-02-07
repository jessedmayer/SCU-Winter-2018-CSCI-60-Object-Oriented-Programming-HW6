#include <iostream>

using namespace std;

int Fib(int n)
{
    if (n <= 1)
        return 1;
    return Fib(n-1) + Fib(n-2);     //returns the sum of the two prior fibonacci numbers
}

int main() {
    int n=0;
    cout << Fib(n) <<endl;
    n=1;
    cout << Fib(n) <<endl;
    n=2;
    cout << Fib(n) <<endl;
    n=3;
    cout << Fib(n) <<endl;
    n=4;
    cout << Fib(n) <<endl;
    n=5;
    cout << Fib(n) <<endl;
    return 0;
}