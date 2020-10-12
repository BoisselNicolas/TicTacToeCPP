#include <iostream>

using namespace std;

char number[10] = {'1','2','3','4','5','6','7','8','9'};

void drawTheBoard();

int main(){
    drawTheBoard();

    return 0;
}



// Function to draw the board 

void drawTheBoard(){

    cout << "            |      " << "      |            " << endl;
    cout << "     " << number[0] << "      |     " << number[1] << "      |     " << number[2] << endl;
    cout << "            |      " << "      |            " << endl;
    cout << "-------------------------------------" << endl;
    cout << "            |      " << "      |            " << endl;
    cout << "     " << number[3] << "      |     " << number[4] << "      |     " << number[5] << endl;
    cout << "            |      " << "      |            " << endl;
    cout << "-------------------------------------" << endl;
    cout << "            |      " << "      |            " << endl;
    cout << "     " << number[6] << "      |     " << number[7] << "      |     " << number[8] << endl;
    cout << "            |      " << "      |            " << endl;
}