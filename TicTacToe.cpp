#include <iostream>
#include <string>
#include <cctype>

using namespace std;
bool xTurn = true;
bool winner = false;
bool tie = false;
int x;
int y;
int count = 0;
string board[3][3];

int printBoard(string board[3][3]);
int resetBoard(string board[3][3]);
bool checkWinner(string board[3][3], bool tie);

int main() {
    cout << "Welcome to Tic Tac Toe";
    resetBoard(board);
    while(winner == false) {
        cout << "Here is the current board\n";
        printBoard(board);
        if(xTurn == true) {
            cout << "It is x turn \nPick the x axis spot ";
            cin >> x;
            cout << "Pick the y axis spot ";
            cin >> y;
            board[x][y] = "x ";
            xTurn = false;
        } else {
            cout << "It is o turn \nPick the x axis spot ";
            cin >> x;
            cout << "Pick the y axis spot ";
            cin >> y;
            board[x][y] = "o ";
            xTurn = true;
        }
        cout << "Done" << endl;
        winner = true;
    }

}

int printBoard(string board[3][3]) {
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 3; y++) {
            cout << board[x][y];
        }
        cout << "\n";
    }
}

int resetBoard(string board[3][3]) {
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 3; y++) {
            board[x][y] = "_ ";
        }
    }
}

bool checkWinner(string board[3][3], bool tie) {
    if (count == 9) {
        tie = true;
        return tie;
    }
    if(board[0][0] == "x " && board[0][1] == "x " && board)
}