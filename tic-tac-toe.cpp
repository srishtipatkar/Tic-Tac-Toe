#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};//for tic-tac-toe grid

int checkwin();
void board();
void newgame();

int main()
{
	int ch=1;
	while(ch!=0)
	{	
		int player = 1,i,choice;
		char mark;
   		do
    		{
       			board();
			player=(player%2)?1:2;
			cout << "Hey Player " << player << "! Choose a block number:  ";
        		cin >> choice;
			mark=(player == 1) ? 'X' : 'O';
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
				cout<<"Invalid move ";
				player--;
				cin.ignore();
				cin.get();
			}
			i=checkwin();
			player++;
		}while(i==-1);
		board();
		if(i==1)
		{
			if(player==2)
			{
				cout<<"XXXXXXXXXXXXXXX\n";
				cout<<"==>\aPlayer "<<--player<<" win \n";
				cout<<"XXXXXXXXXXXXXXX\n";
        		}
        		else
        		{
            			cout<<"OOOOOOOOOOOOOOO\n";
            			cout<<"==>\aPlayer "<<--player<<" win \n";
            			cout<<"OOOOOOOOOOOOOOO\n";
        		}
        
    		}
    		else
		{
			cout<<"OXOXOXOXOXOXOXO\n";
        		cout<<"==>\aGame draw\n";
        		cout<<"OXOXOXOXOXOXOXO\n";
    		}
  		cin.ignore();
    		cin.get();
		cout<<"New game? \n1-Yes!\t0-No.\n";
		cin>>ch;
		newgame();

	}
	return 0;
}

int checkwin()//gives the status of the game
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

        return 1;//1 if player 1 or player 2 wins 
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;//0 for draw
    else
        return -1;//-1 to continue the game
}

void board()//draws the tic-tac-toe grid
{
    system("cls");
    cout << "\t\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  V/S  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}

void newgame()//to clear the grid and make it ready for new game
{
    square[1]='1';
    square[2]='2';
    square[3]='3';
    square[4]='4';
    square[5]='5';
    square[6]='6';
    square[7]='7';
    square[8]='8';
    square[9]='9';
    
}
