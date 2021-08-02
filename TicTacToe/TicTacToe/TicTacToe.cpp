#include "TicTacToe.h"

TicTacToe::TicTacToe()
{
	turn += 1;

	if (turn % 2 == 0)
	{
		player2Turn = true;
		player1Turn = false;
	}
	else
	{
		player1Turn = true;
		player2Turn = false;
	}

	if (player1Turn == true)
	{
		std::cout << "Player1 Turn" << std::endl;
		std::cin >> box;

		if (box == 1)
		{
			box1 = 1;
		}
		else if (box == 2)
		{
			box2 = 1;
		}
		else if (box == 3)
		{
			box3 = 1;
		}
		else if (box == 4)
		{
			box4 = 1;
		}
		else if (box == 5)
		{
			box5 = 1;
		}
		else if (box == 6)
		{
			box6 = 1;
		}
		else if (box == 7)
		{
			box7 = 1;
		}
		else if (box == 8)
		{
			box8 = 1;
		}
		else if (box == 9)
		{
			box9 = 1;
		}

		box = 0;

		player2Turn = false;
		player1Turn = false;
	}
	else if (player2Turn == true)
	{
		std::cout << "Player2 Turn" << std::endl;
		std::cin >> box;

		if (box == 1)
		{
			box1 = 2;
		}
		else if (box == 2)
		{
			box2 = 2;
		}
		else if (box == 3)
		{
			box3 = 2;
		}
		else if (box == 4)
		{
			box4 = 2;
		}
		else if (box == 5)
		{
			box5 = 2;
		}
		else if (box == 6)
		{
			box6 = 2;
		}
		else if (box == 7)
		{
			box7 = 2;
		}
		else if (box == 8)
		{
			box8 = 2;
		}
		else if (box == 9)
		{
			box9 = 2;
		}

		box = 0;

		player2Turn = false;
		player1Turn = false;
	}
	else
	{
		std::cout << "Error: player1Turn & player2Turn are both false" << std::endl;
	}

	std::cout << box1 << " . " << box2 << " . " << box3 << std::endl;
	std::cout << ". . . . ." << std::endl;
	std::cout << box4 << " . " << box5 << " . " << box6 << std::endl;
	std::cout << ". . . . ." << std::endl;
	std::cout << box7 << " . " << box8 << " . " << box9 << std::endl;
}

TicTacToe::~TicTacToe() {}