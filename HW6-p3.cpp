#include <iostream>
using namespace std;

void towerOfHanoi(int n, char startRod, char endRod, char midRod)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << startRod << " to rod " << endRod <<endl;
        return;
    }

    towerOfHanoi(n-1, startRod, midRod, endRod);
    cout << "Move disk " << n << " from rod " << startRod << " to rod " << endRod <<endl;
    towerOfHanoi(n-1, midRod, endRod, startRod);
}

int main()
{
    int n = 4;
    towerOfHanoi(n, 'A', 'C', 'B');     //'A' is the starting rod, 'C' is the ending rod, and 'B' is the middle rod
    return 0;
}



