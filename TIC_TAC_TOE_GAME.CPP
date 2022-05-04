#include <bits/stdc++.h>
using namespace std;

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void GAME(string player1, string player2);
int checkWin();
void display(string player1, string player2);

int main()
{
    system("cls");

    cout << "\n\n\tTic Tac Toe\n\n";

    string player1, player2;

    cout << "Enter name of player 1 :\n";
    getline(cin, player1);

    cout << "Enter name of player 2 : \n";
    getline(cin, player2);

    display(player1, player2);

    GAME(player1, player2);
}

void display(string player1, string player2)
{

    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << player1 << " (X)  -  " << player2 << " (O)\n\n\n";

    cout << "     |     |     \n";
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3];

    cout << "\n_____|_____|_____\n";
    cout << "     |     |     \n";

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6];

    cout << "\n_____|_____|_____\n";
    cout << "     |     |     \n";

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9];

    cout << "\n     |     |     \n\n";
}

void GAME(string player1, string player2)
{
    int player = 1, choice;

    char mark;

    do
    {

        display(player1, player2);

        player = (player % 2) ? 1 : 2;

        if (player == 1)
        {
            cout << "Player " << player1 << ", enter a number:  ";
        }
        else
        {
            cout << "Player " << player2 << ", enter a number:  ";
        }

        cin >> choice;

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout << "Invalid move ";
            player--;
            cin.ignore();
            cin.get();
        }

        player++;

    } while (checkWin() == -1);

    display(player1, player2);

    if (checkWin())
    {
        if (--player == 1)
        {
            system("cls");
            cout << "\n\n\tTic Tac Toe\n\n";
            cout << player1 << " win \n\n";
        }
        else
        {
            system("cls");
            cout << "\n\n\tTic Tac Toe\n\n";
            cout << player2 << " win \n\n";
        }
    }
    else
    {
        system("cls");
        cout << "\n\n\tTic Tac Toe\n\n";
        cout << "\tGame draw\n\n";
    }
}

int checkWin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}
