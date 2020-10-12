#include <iostream>

using namespace std;

char number[10] = {'1','2','3','4','5','6','7','8','9'};
bool result = false;
char symbole = 'X'; 
int player = 1;
int choice ;

void drawTheBoard();
bool weHaveAWinner();

//      Loop of the game

int main(){

    while (result == false)
    {
        cout << "           Au tour de Player " << player << endl;
        cout << endl;
        drawTheBoard();
        cin >> choice ;
        choice = choice - 1 ;
        number[choice] = symbole;
        weHaveAWinner();
    }
    return 0;
}

//        Function with the rules for the win 

bool weHaveAWinner(){

    if(number[0] == number[1] && number[1] == number[2]){
        result = true;
    }else if(number[3] == number[4] && number[4] == number[5]){
        result = true;
    }else if(number[6] == number[7] && number[7] == number[8]){
        result = true;
    }else if(number[0] == number[3] && number[3] == number[6]){
        result = true;
    }else if(number[1] == number[4] && number[4] == number[7]){
        result = true;
    }else if(number[2] == number[5] && number[5] == number[8]){
        result = true;
    }else if(number[0] == number[4] && number[8] == number[5]){
        result = true;
    }else if(number[2] == number[4] && number[4] == number[6]){
        result = true;
    }

    switch (player)
    {
    case 1:
        symbole = 'O';
        player = 2;
        break;
    
    case 2:
        symbole =  'X';
        player = 1;
        break;
    }

    return result;
}

//          Function to draw the board 

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