#include <iostream>

using namespace std;

int main()
{cout << "LET'S PLAY TIC TAC TOE! YAY!" << endl;
    
    int x, o;
    const int ROWS = 3, COLUMNS = 3;
    char board[ROWS][COLUMNS] = {{'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}};
    
    //Here, you initialize the character board. This is how it will present to the user once it's printed. In order to print it, see below...
    
    cout << endl;
    
    int i, j;
    for (i = 0; i < ROWS; ++i)
    {for (j = 0; j < COLUMNS; ++j)
	 		{cout << board[i][j];}
        cout << endl;}
	 	 
    //This is what will brint out the board. you re-define rows and columns as 'i' and 'j', as they are what essentially produce the board using this loop.
    //You've seen this before...
    
    cout << endl;
    
    do
    {cout << "Player 'x' turn: ";
        cin >> x;
        
        if (x == 1)
        {if (board[0][0] == 'x')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (x == o)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[0][0] = 'x';
            cout << endl;}}
        
        else if (x == 2)
        {if (board[0][1] == 'x')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (x == o)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[0][1] = 'x';
            cout << endl;}}
        
        else if (x == 3)
        {if (board[0][2] == 'x')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (x == o)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[0][2] = 'x';
            cout << endl;}}
        
        else if (x == 4)
        {if (board[1][0] == 'x')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (x == o)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[1][0] = 'x';
            cout << endl;}}
        
        else if (x == 5)
        {if (board[1][1] == 'x')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (x == o)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[1][1] = 'x';
            cout << endl;}}
        
        else if (x == 6)
        {if (board[1][2] == 'x')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (x == o)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[1][2] = 'x';
            cout << endl;}}
        
        else if (x == 7)
        {if (board[2][0] == 'x')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (x == o)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[2][0] = 'x';
            cout << endl;}}
			  		 
        else if (x == 8)
        {if (board[2][1] == 'x')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (x == o)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[2][1] = 'x';
            cout << endl;}}
        
        else if (x == 9)
        {if (board[2][2] == 'x')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (x == o)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[2][2] = 'x';
            cout << endl;}}
        
        for (i = 0; i < ROWS; ++i)
        {for (j = 0; j < COLUMNS; ++j)
        {cout << board[i][j];}
            cout << endl;}
        
        cout << endl;
        
        if ('x' == board[0][0] && 'x' == board[0][1] && 'x' == board[0][2] ||
            'x' == board[1][0] && 'x' == board[1][1] && 'x' == board[1][2] ||
            'x' == board[2][0] && 'x' == board[2][1] && 'x' == board[2][2] ||
            'x' == board[0][0] && 'x' == board[1][0] && 'x' == board[2][0] ||
            'x' == board[0][1] && 'x' == board[1][1] && 'x' == board[2][1] ||
            'x' == board[0][2] && 'x' == board[1][2] && 'x' == board[2][2] ||
            'x' == board[0][0] && 'x' == board[1][1] && 'x' == board[2][2] ||
            'x' == board[0][2] && 'x' == board[1][1] && 'x' == board[2][0])
        {cout << "Player 'x' wins!" << endl;
            break;}
        
        //Player o's turn
        
        cout << "Player 'o' turn: ";
        cin >> o;
        
        if (o == 1)
        {if (board[0][0] == 'o')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (o == x)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[0][0] = 'o';
            cout << endl;}}
        
        else if (o == 2)
        {if (board[0][1] == 'o')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (o == x)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[0][1] = 'o';
            cout << endl;}}
        
        else if (o == 3)
        {if (board[0][2] == 'o')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (o == x)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[0][2] = 'o';
            cout << endl;}}
        
        else if (o == 4)
        {if (board[1][0] == 'o')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (o == x)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[1][0] = 'o';
            cout << endl;}}
        
        else if (o == 5)
        {if (board[1][1] == 'o')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (o == x)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[1][1] = 'o';
            cout << endl;}}
        
        else if (o == 6)
        {if (board[1][2] == 'o')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (o == x)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[1][2] = 'o';
            cout << endl;}}
        
        else if (o == 7)
        {if (board[2][0] == 'o')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (o == x)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[2][0] = 'o';
            cout << endl;}}
        
        else if (o == 8)
        {if (board[2][1] == 'o')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (o == x)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[2][1] = 'o';
            cout << endl;}}
        
        else if (o == 9)
        {if (board[2][2] == 'o')
        {cout << endl;
            cout << "You have already taken this space! Your turn has been skipped." << endl;
            cout << endl;}
        else if (o == x)
        {cout << endl;
            cout << "This space has already been taken and your turn has been skipped." << endl;
            cout << endl;}
        else
        {board[2][2] = 'o';
            cout << endl;}}
        
        for (i = 0; i < ROWS; ++i)
        {for (j = 0; j < COLUMNS; ++j)
        {cout << board[i][j];}
            cout << endl;}
        
        cout << endl;
        
        if ('o' == board[0][0] && 'o' == board[0][1] && 'o' == board[0][2] || 
            'o' == board[1][0] && 'o' == board[1][1] && 'o' == board[1][2] ||
            'o' == board[2][0] && 'o' == board[2][1] && 'o' == board[2][2] ||
            'o' == board[0][0] && 'o' == board[1][0] && 'o' == board[2][0] ||
            'o' == board[0][1] && 'o' == board[1][1] && 'o' == board[2][1] ||
            'o' == board[0][2] && 'o' == board[1][2] && 'o' == board[2][2] ||
            'o' == board[0][0] && 'o' == board[1][1] && 'o' == board[2][2] ||
            'o' == board[0][2] && 'o' == board[1][1] && 'o' == board[2][0])
        {cout << "Player 'o' wins!" << endl;
            break;}
							 
    } while (true);
    
}