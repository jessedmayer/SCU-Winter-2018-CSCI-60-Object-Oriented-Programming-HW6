#include <iostream>
using namespace std;

int fac(int n) {
    int temp;

    if (n <= 1) return 1;

    temp = n * fac(n - 1);
    return temp;
}

int C(int n, int r){               //returns number of ways to choose r different things from a set of n things
    return fac(n)/(fac(r)*fac(n-r));
}

int main(){
    cout << fac(2) <<endl;
    cout << fac(3) <<endl;
    cout << fac(4) <<endl;
    cout << "" <<endl;
    cout << C(3,2) <<endl;
    cout << C(4,2) <<endl;
    cout << C(6,3) <<endl;

    return 0;
}