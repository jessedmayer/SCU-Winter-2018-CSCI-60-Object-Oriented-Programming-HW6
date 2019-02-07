#include <iostream>
#include <fstream>
using namespace std;


int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };        // For searching in all 8 direction
int y[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void search2D(char grid[4][4], int row, int col)
{

    string line;
    ifstream File("words.txt");
    if(File.is_open()) {
        cout << "File found." << endl;
    }
    line=File.get();
    unsigned long vIn = line.length();
    int len = (int)vIn;        //int len = line.length();


    for (int dir = 0; dir < 8; dir++)
    {

        int k, rd = row + x[dir], cd = col + y[dir];    // Initialize starting point

        for (k = 1; k < len; k++)       //after matching first character this tries to match the rest
        {

            if (rd >= 4 || rd < 0 || cd >= 4 || cd < 0)     //breaks if it goes out of the 2-D array
                break;

            if (grid[rd][cd] != line[k])    //if last character doesn't match breaks
                break;

            rd += x[dir], cd += y[dir];     //moves in a given direction
        }


        if (k == len)       // If all character matched then the word matches
            cout << line <<endl;
        File.close();
    }
}



void patternSearch(char grid[4][4])             //  Searches given word in a given 2-D array in all 8 directions
{
    for (int row = 0; row < 4; row++) {         //treats every point as a starting point
        for (int col = 0; col < 4; col++) {
            search2D(grid, row, col);
        }
    }

}



int main(){
    char c;

    const int h(4),w(4);

    char board[4][4]; //creates a 9*9 matrix or a 2d array.

    for(int i=0; i<4; i++)    //This loops on the rows.
    {
        for(int j=0; j<4; j++) //This loops on the columns
        {
            c = (char) (rand() % 26 + 'a');
            board[i][j] = c;
        }
    }

    patternSearch(board);

    /*
    //This outputs the 2D array board
    for(int i=0; i<4; i++)    //This loops on the rows.
    {
        for(int j=0; j<4; j++) //This loops on the columns
        {
            cout << board[i][j]  << "  ";
        }
        cout << endl;
    }*/

    return 0;
}