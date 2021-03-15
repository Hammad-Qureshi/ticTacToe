#include<iostream>
#include<stdlib.h> //Used for clear screen function
using namespace std;

void welcome();             //Function to output welcome screen
void pattern();             //Function to print ti tac toe board
void credits();             //Function to print credits
void turn();                //Function to display players turn
void checkWin();            //Function to check if any player wins 
void tie();                 //Function to display tie message if match ties
void markerChecker();       //Function to check marker
void marker(int choice);    //Function to check marker

char board[9] = {'1','2','3','4','5','6','7','8','9'};

int choice, i=1;    //Global Variables
char sign, again;   //Global Variables

int main()
{
    system("CLS");  //Clears screen
    welcome();  //Prints welcome screen
    pattern();  //Prints board
    while (i<=9)
    {
        turn();
    }
    tie(); //If match will tie this function will run
}

void welcome()  //Function defination
{
    cout <<endl << endl << endl; 
    cout << "\tWelcome to:" << endl;
    cout << "\tT I C - T A C - T O E" << endl;
    cout << "\tPlayer 1 [X] ";
    cout << "\tPlayer 2 [O] ";
    cout << endl << endl;
}

void pattern()  //Function defination
{
    cout << endl;
    cout << "\t\t     |      |      " << endl;
    cout << "\t\t  " << board[0] << "  |  " << board[1] << "   | " << board[2] << "  " << endl;
    cout << "\t\t_____|______|_____ " <<endl;
    cout << "\t\t     |      |      " <<endl;
    cout << "\t\t  " << board[3] << "  |  " << board[4] << "   | " << board[5] << "  " << endl;
    cout << "\t\t_____|______|_____ " <<endl;
    cout << "\t\t     |      |      " <<endl;
    cout << "\t\t  " << board[6] << "  |  " << board[7] << "   | " << board[8] << "  " << endl;
    cout << "\t\t     |      |      " <<endl;
    cout << endl; 
}

void credits()  //Function defination
{
    cout << "\n\n\tMade by Hammad Qureshi. :)\n\n\n";
}

void tie()  //Function defination
{
    cout << "\n\n\tMatch drawn. :)";
    credits();
}

void marker(int choice) //Function defination
{
    if(i%2 == 0)
    {
        sign = 'O'; //If 'i' is even then 'sign' will be O
    }

    if(i%2 != 0)    //If 'i' is odd then 'sign' will be X
    {
        sign = 'X';
    }

    switch (choice)
    {
    case 1:
        board[0] = sign;
        break;
    case 2:
        board[1] = sign;
        break;
    case 3:
        board[2] = sign;
        break;
    case 4:
        board[3] = sign;
        break;
    case 5:
        board[4] = sign;
        break;
    case 6:
        board[5] = sign;
        break;
    case 7:
        board[6] = sign;
        break;
    case 8:
        board[7] = sign;
        break;
    case 9:
        board[8] = sign;
        break; 
    default:
        cout<<"\t\tInvalid choice"<<endl;
        break;
    }
}

void markerChecker()    //Function defination
{
    if(board[choice-1]!='X' && board[choice-1]!='O')
    {
        marker(choice);
        i++;
        system("CLS"); //Clears screen
        welcome();
        pattern();
    }

    else
    {
        cout << "\n\n\t--- Invalid choice ---\n\n\n";
    }
}

void checkWin() //Function defination
{
    //Player 1 [X] Wins
    if (board[0]=='X' && board[1]=='X' && board[2]=='X')    //Checks if marker X matches horizontally
    {
        cout << "\tPlayer 1 Wins [X]";
        credits();
        abort();
    }
    if (board[3]=='X' && board[4]=='X' && board[5]=='X')    //Checks if marker X matches horizontally
    {
        cout << "\tPlayer 1 Wins [X]";
        credits();
        abort();
    }
    if (board[6]=='X' && board[7]=='X' && board[8]=='X')    //Checks if marker X matches horizontally
    {
        cout << "\tPlayer 1 Wins [X]";
        credits();
        abort();
    }
    if (board[0]=='X' && board[3]=='X' && board[6]=='X')    //Checks if marker X matches vertically
    {
        cout << "\tPlayer 1 Wins [X]";
        credits();
        abort();
    }
    if (board[1]=='X' && board[4]=='X' && board[7]=='X')    //Checks if marker X matches vertically
    {
        cout << "\tPlayer 1 Wins [X]";
        credits();
        abort();
    }
    if (board[2]=='X' && board[5]=='X' && board[8]=='X')    //Checks if marker X matches vertically
    {
        cout << "\tPlayer 1 Wins [X]";
        credits();
        abort();
    }
    if (board[0]=='X' && board[4]=='X' && board[8]=='X')    //Checks if marker X matches diagonally
    {
        cout << "\tPlayer 1 Wins [X]";
        credits();
        abort();
    }
    if (board[2]=='X' && board[4]=='X' && board[6]=='X')    //Checks if marker X matches diagonally
    {
        cout << "\tPlayer 1 Wins [X]";
        credits();
        abort();
    }

    //Player 2 [O] Wins
    if (board[0]=='O' && board[1]=='O' && board[2]=='O')    //Checks if marker O matches horizontally
    {
        cout << "\tPlayer 2 Wins [O]";
        credits();
        abort();
    }
    if (board[3]=='O' && board[4]=='O' && board[5]=='O')    //Checks if marker O matches horizontally
    {
        cout << "\tPlayer 2 Wins [O]";
        credits();
        abort();
    }
    if (board[6]=='O' && board[7]=='O' && board[8]=='O')    //Checks if marker O matches horizontally
    {
        cout << "\tPlayer 2 Wins [O]";
        credits();
        abort();
    }
    if (board[0]=='O' && board[3]=='O' && board[6]=='O')    //Checks if marker O matches vertically
    {
        cout << "\tPlayer 2 Wins [O]";
        credits();
        abort();
    }
    if (board[1]=='O' && board[4]=='O' && board[7]=='O')    //Checks if marker O matches vertically
    {
        cout << "\tPlayer 2 Wins [O]";
        credits();
        abort();
    }
    if (board[2]=='O' && board[5]=='O' && board[8]=='O')    //Checks if marker O matches vertically
    {
        cout << "\tPlayer 2 Wins [O]";
        credits();
        abort();
    }
    if (board[0]=='O' && board[4]=='O' && board[8]=='O')    //Checks if marker O matches diagonally
    {
        cout << "\tPlayer 2 Wins [O]";
        credits();
        abort();
    }
    if (board[2]=='O' && board[4]=='O' && board[6]=='O')    //Checks if marker O matches diagonally
    {
        cout << "\tPlayer 2 Wins [O]";
        credits();
        abort();
    }
}

void turn() //Function defination
{
    checkWin(); //Checks if any player wins or not

    if(i%2 != 0)
    {
        cout << "\tPlayer 1 turn [X]: ";
    }

    if(i%2 == 0)
    {
        cout << "\tPlayer 2 turn [O]: ";
    }

    cin >> choice;

    if(choice>=1 && choice<=9)
    {
        markerChecker(); //Checks which marker to print 
    }
    else
    {
        cout << "\n\n\t--- Enter number between 1-9 ---\n\n\n";
    }
    
}