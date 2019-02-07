#include <iostream>

using namespace std;

int FibArr(int n)   //uses an array of size n to store the fibonacci numbers to more efficiently determine the nth fibonacci number
{
    int A[n];
    A[0]=1;
    A[1]=1;

    if (n <= 1) {
        return 1;
    }

    for(int i=2; i<n; i++){
        A[i]=A[i-1] + A[i-2];   //a given value in the array is a sum of its two proceeding values in the array
    }

    return A[n-1] + A[n-2];




}

int main() {
    int n=0;
    cout << FibArr(n) <<endl;       //1
    n=1;
    cout << FibArr(n) <<endl;       //1
    n=2;
    cout << FibArr(n) <<endl;       //2
    n=3;
    cout << FibArr(n) <<endl;       //3
    n=4;
    cout << FibArr(n) <<endl;       //5
    n=5;
    cout << FibArr(n) <<endl;       //8
    return 0;
}

