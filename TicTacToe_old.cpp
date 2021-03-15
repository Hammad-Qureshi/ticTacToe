#include <iostream>
#include <stdlib.h>
using namespace std;
void graphics(void); //funtion for interface of the board
void welcum(void); //function for the welcum screen
void credits(void); //credits for the creators
void player(void); //all the player logic in this fuction
int c_1(int x); //all the player 1[X] choice logic in this fuction
int c_2(int x); //all the player 2[O] choice logic in this fuction
char board[9] = {'1','2','3','4','5','6','7','8','9'}; //array for the moves of player
int game_win1(int choice);
int game_win2(int choice);
char turn = 'X'; //variable for the turn of the player
int number;
int choice;


int main()
{
    int i = 0;
    welcum();
    graphics();
    while (i<=9)
    {
    player();
    switch (choice)
    {
    case 1:
        number = 0;
        break;
    case 2:
        number = 1;
        break;
    case 3:
        number = 2;
        break;
    case 4:
        number = 3;
        break;
    case 5:
        number = 4;
        break;
    case 6:
        number = 5;
        break;
    case 7:
        number = 6;
        break;
    case 8:
        number = 7;
        break;
    case 9:
        number = 8;
        break;
    default:
        cout<<"invalid input"<<endl;
        break;
    }
    if (choice == 'X')
    {
        board[number] = 'X';
        turn = 'O';
    }
    else if (choice == 'O')
    {
        board[number] = 'O';
        turn = 'X';
    }
    //system("cls");
    }
    return 0;
}

void graphics(void)
{
    cout<<endl;
    cout<<"\t\t     |      |                    "<<endl;
    cout<<"\t\t  "<< board[0] <<"  |  "<< board[1] <<"   | "<< board[2] <<"  "<<endl;
    cout<<"\t\t_____|______|_____"<<endl;
    cout<<"\t\t     |      |     "<<endl;
    cout<<"\t\t  "<< board[3] <<"  |  "<< board[4] <<"   | "<< board[5] <<"  "<<endl;
    cout<<"\t\t_____|______|_____"<<endl;
    cout<<"\t\t     |      |     "<<endl;
    cout<<"\t\t  "<< board[6] <<"  |  "<< board[7] <<"   | "<< board[8] <<"  "<<endl;
    cout<<"\t\t     |      |     "<<endl;
    cout<<endl; 
}

void welcum(void)
{
    cout<<endl<<endl<<endl; 
    cout<<"\tWelcome to:"<<endl;
    cout<<"\tT I C - T A C - T O E"<<endl;
    cout<<"\tPlayer 1 [X] ";
    cout<<"\tPlayer 2 [O] ";
    cout<<endl<<endl;
}

void  credits(void)
{
    cout<<endl;
    cout<<"\tMade by Hammad Qureshi, Aarij Irfan and Faraz Ahmed Kharal."<<endl;
    cout<<endl;
}

void player(void)
{
    cout<<"\tPlayer 1 [X] turn: ";
    cin>>choice;
    c_1(choice);
    game_win1(choice);
    cout<<"\tPlayer 2 [O] turn: ";
    cin>>choice;
    c_2(choice);
    game_win2(choice);
    cout<<endl<<endl;
}

int c_1(int x)
{
    switch (x)
    {
    case 1:
        board[0]= 'X';
        break;
    case 2:
        board[1]='X';
        break;
    case 3:
        board[2]='X';
        break;
    case 4:
        board[3]='X';
        break;
    case 5:
        board[4]='X';
        break;
    case 6:
        board[5]='X';
        break;
    case 7:
        board[6]='X';
        break;
    case 8:
        board[7]='X';
        break;
    case 9:
        board[8]='X';
        break; 
    default:
    cout<<"\t\tInvalid choice"<<endl;
        break;
    }
    system("CLS");
    welcum();
    graphics();
    return x; 
}

int c_2(int x)
{
    switch (x)
    {
    case 1:
        board[0]= 'O';
        break;
    case 2:
        board[1]='O';
        break;
    case 3:
        board[2]='O';
        break;
    case 4:
        board[3]='O';
        break;
    case 5:
        board[4]='O';
        break;
    case 6:
        board[5]='O';
        break;
    case 7:
        board[6]='O';
        break;
    case 8:
        board[7]='O';
        break;
    case 9:
        board[8]='O';
        break;
    default:
    cout<<"\t\tInvalid choice"<<endl;
        break;
    }
    system("CLS");
    welcum();
    graphics();
    return x; 
}

int game_win1(int choice)
{
    if(board[0]=='X' && board[1]== 'X' && board[2]=='X')
    {
        cout<<"\t\tPlayer 1[X] wins"<<endl;
        credits();
        abort();
    }
    if(board[3]=='X' && board[4]== 'X' && board[5]=='X')
    {
        cout<<"\t\tPlayer 1[X] wins"<<endl;
        credits();
        abort();
    }
    if(board[6]=='X' && board[7]== 'X' && board[8]=='X')
    {
        cout<<"\t\tPlayer 1[X] wins"<<endl;
        credits();
        abort();
    }
    if(board[0]=='X' && board[3]== 'X' && board[6]=='X')
    {
        cout<<"\t\tPlayer 1[X] wins"<<endl;
        credits();
        abort();
    }
    if(board[1]=='X' && board[4]== 'X' && board[7]=='X')
    {
        cout<<"\t\tPlayer 1[X] wins"<<endl;
        credits();
        abort();
    }
    if(board[2]=='X' && board[5]== 'X' && board[8]=='X')
    {
        cout<<"\t\tPlayer 1[X] wins"<<endl;
        credits();
        abort();
    }
    if(board[2]=='X' && board[4]== 'X' && board[6]=='X')
    {
        cout<<"\t\tPlayer 1[X] wins"<<endl;
        credits();
        abort();
    }
    if(board[0]=='X' && board[4]== 'X' && board[8]=='X')
    {
        cout<<"\t\tPlayer 1[X] wins"<<endl;
        credits();
        abort();
    }
    return 0;
}

int game_win2(int choice)
{
    if(board[0]=='O' && board[1]== 'O' && board[2]=='O')
    {
        cout <<"Player 2[O] wins"<<endl;
        credits();
        abort();
    }
    if(board[3]=='O' && board[4]== 'O' && board[5]=='O')
    {
        cout<<"Player 2[O] wins"<<endl;
        credits();
        abort();
    }
    if(board[6]=='O' && board[7]== 'O' && board[8]=='O')
    {
        cout<<"Player 2[O] wins"<<endl;
        credits();
        abort();
    }
    if(board[0]=='O' && board[3]== 'O' && board[6]=='O')
    {
        cout <<"Player 2[O] wins"<<endl;
        credits();
        abort();
    }
    if(board[1]=='O' && board[4]== 'O' && board[7]=='O')
    {
        cout<<"Player 2[O] wins"<<endl;
        credits();
        abort();
    }
    if(board[2]=='O' && board[5]== 'O' && board[8]=='O')
    {
        cout<<"Player 2[O] wins"<<endl;
        credits();
        abort();
    }
    if(board[2]=='O' && board[4]== 'O' && board[6]=='O')
    {
        cout <<"Player 2[O] wins"<<endl;
        credits();
        abort();
    }
    if(board[0]=='O' && board[4]== 'O' && board[8]=='O')
    {
        cout<<"Player 2[O] wins"<<endl;
        credits();
        abort();
    }
    return 0;
}