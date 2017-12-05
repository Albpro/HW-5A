// Carlos Albert  Date: 11/20/2017
// INTRO COMP PROGRAM I - COP2000
// The purpose of this program is to allow the user to guess 3 times giving that user guesses 3 times correct and is named champion or losses 3 times.



#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>


using namespace std;

//Functions
int beginGame(int[]);

void displayBoard(int[][3]);

bool testWinner(int &, int, int[]);

void instructions();


// Outputs description of the game and the developer's name
void instructions()
{
	cout << "**************************************************************" << endl;
	cout << endl << "MISSING NUMBERS GAME" << endl;
	cout << "A fun brain game..." << endl << endl << endl;
	cout << "Please enter a whole number to guess the missing number...";
	cout << endl << "Program Developed by: Carlos Albert" << endl;
	cout << "**************************************************************" << endl;
}

//Shows Boards 1,2,3
int main()
{
	int board_1[4][3] = { 38, 11, 83,
		15, 6, 33,
		10, 2, 20,
		86, NULL, 95 };

	int board_2[4][3] = { 28, 10, 55,
		89, 17, 98,
		22, 4, 31,
		69, NULL, 78 };

	int board_3[4][3] = { 90, 9, 45,
		66, 12, 48,
		34, 7, 70,
		44, NULL, 26 };

	int ansArray[3] = { 14,15,8 };
	int usedBoards[3] = { NULL };
	int userInput, number_wins = 0, guesses = 0, boardNumber, ans, randomNum;
	bool correct; int main_board[4][3];
	instructions();
	beginGame(usedBoards);

	do
	{
		//Displays board with outputs for the user to input
		displayBoard(main_board);
		cout << endl << "Enter your guess or zero to exit";
		cin >> userInput;
		if (userInput == 0)

		{
			cout << endl << "Closing";
			return 0;

		}
		else
		{
			while (userInput < 0)
			{
				cout << endl << "Please enter a valid value";
				cin >> userInput;
			}
		}
		testWinner(userInput, boardNumber, ansArray);
		if (correct == true)
		{
			switch (boardNumber)
			{
			case 0:
				number_wins++;
				usedBoards[0] = 1;
			}
			{
		else if (correct == true && ((usedBoards[0] != NULL) || (usedBoards[1] != NULL) || (usedBoards[2] != NULL)))
			}

			//Gives user option to continue playing or exit game.
			{
				cout << endl << "Do you want to play again or exit? ";
				cin >> userInput;
				if (userInput == 0) {
					cout << endl << "Closing";
					return 0;
				}

				// Tells user to enter a valid value
				else
				{
					while (userInput < 0)
					{
						cout << endl << "Please enter a valid value";
						cin >> userInput;
					}
		else
		{
			guesses++;
			if (guesses > 3)
			{
				// Gives option to play again or exit
				cout << endl << "Do you want to play again?. 1 to play again, 0 to exit";
				cin >> userInput;
				if (userInput == 0) {
					cout << endl << "Closing";
					return 0;
				}
				else
				{
					while (userInput < 0)
					{
						// Tells user to enter a valid value  
						cout << endl << "Please enter a valid value";
						cin >> userInput;
					}
					if (userInput != 0)
					{
						beginGame(usedBoards);
					}
					{
						while (usedBoards[0] != NULL || usedBoards[1] != NULL || usedBoards[2] != NULL);
						cout << endl << "You are a number genius!!";
						return 0;
					}

					int beginGame(int playedBoards[])
					{
						int randomNum; int boardNumber; srand(time(0)); randomNum = (rand() % (3)); switch (randomNum)
						{
						case 0:
							do
							{
								randomNum = (rand() % (3));
							} while (playedBoards[0] != NULL); return randomNum; randomNum = boardNumber; break;

						case 1:
							do
							{
								randomNum = (rand() % (3));

							} while (playedBoards[1] != NULL); return randomNum; randomNum = boardNumber; break;
						case 2:
							do
							{
								randomNum = (rand() % (3));
							} while (playedBoards[2] != NULL); return randomNum; randomNum = boardNumber;
						}
					}

					// Passes the current game board and displays the playing board
					void displayBoard(int board[][3])
					{
						int randomNum; int board_1[4][3], board_2[4][3], board_3[4][3]; switch (randomNum)
						{
						case 0:
							for (int x = 0; x < 4; x++)
							{
								for (int y = 0; y < 3; y++)
								{
									cout << setw(4) << board_1[x][y] << " ";
								}
								cout << endl;
							}
						case 1:
							for (int x = 0; x < 4; x++)
							{
								for (int y = 0; y < 3; y++)
								{
									cout << setw(4) << board_2[x][y] << " ";
								}
								cout << endl;

							}
						case 2:
							for (int x = 0; x < 4; x++)
							{
								for (int y = 0; y < 3; y++)
								{
									cout << setw(4) << board_3[x][y] << " ";
								}
								cout << endl;
							}

						}
						
						//returns true or false if answered correctly or not.
						bool testWinner(int &ans, int boardNum, int ansBoard[])
					   
						{
							int userInput;
							if (userInput == ansBoard[boardNum])
							{
								cout << endl << "Great Job!!";
								return true;
							}
							else
							{
								cout << endl << "Sorry, that was incorrect";
								return false;
							}
							// Exit Program.
							std::cout << "\n\n Press any key to exit. . . ";
							std::cin.ignore();
							return 0;
						}

