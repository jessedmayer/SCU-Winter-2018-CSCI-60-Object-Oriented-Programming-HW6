#include <iostream>
using namespace std;

double Fib_iter(int num)
{
    int p(1),c(1),n(1);
    for (int i = 3; i <= num; ++i)      //finds the nth fibonacci number through iteration
    {
        n = c + p;
        p = c;
        c = n;
    }
    return n;
}

int main()
{
    int n=10;

    cout<<"The " << n <<"th Fibonacci number is : " <<Fib_iter(n)<<endl;

    return 0;
}

