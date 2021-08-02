#include "TicTacToe.h"

void TicTacToe::Round()
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
		std::cout << "Player1's Turn" << std::endl;
		std::cout << "Enter the number of one of these open spots: ";
		
		if (box1Open == true)
		{
			std::cout << "Box1, ";
		}
		if (box2Open == true)
		{
			std::cout << "Box2, ";
		}
		if (box3Open == true)
		{
			std::cout << "Box3, ";
		}
		if (box4Open == true)
		{
			std::cout << "Box4, ";
		}
		if (box5Open == true)
		{
			std::cout << "Box5, ";
		}
		if (box6Open == true)
		{
			std::cout << "Box6, ";
		}
		if (box7Open == true)
		{
			std::cout << "Box7, ";
		}
		if (box8Open == true)
		{
			std::cout << "Box8, ";
		}
		if (box9Open == true)
		{
			std::cout << "Box9, ";
		}

		std::cout << " Format: #" << std::endl;

		std::cin >> box;

		std::cout << " " << std::endl;

		if (box == 1)
		{
			box1 = 1;
			box1Open = false;
		}
		else if (box == 2)
		{
			box2 = 1;
			box2Open = false;
		}
		else if (box == 3)
		{
			box3 = 1;
			box3Open = false;
		}
		else if (box == 4)
		{
			box4 = 1;
			box4Open = false;
		}
		else if (box == 5)
		{
			box5 = 1;
			box5Open = false;
		}
		else if (box == 6)
		{
			box6 = 1;
			box6Open = false;
		}
		else if (box == 7)
		{
			box7 = 1;
			box7Open = false;
		}
		else if (box == 8)
		{
			box8 = 1;
			box8Open = false;
		}
		else if (box == 9)
		{
			box9 = 1;
			box9Open = false;
		}

		box = 0;

		player2Turn = false;
		player1Turn = false;
	}
	else if (player2Turn == true)
	{
		std::cout << "Player2's Turn" << std::endl;
		std::cout << "Enter the number of one of these open spots: ";

		if (box1Open == true)
		{
			std::cout << "Box1, ";
		}
		if (box2Open == true)
		{
			std::cout << "Box2, ";
		}
		if (box3Open == true)
		{
			std::cout << "Box3, ";
		}
		if (box4Open == true)
		{
			std::cout << "Box4, ";
		}
		if (box5Open == true)
		{
			std::cout << "Box5, ";
		}
		if (box6Open == true)
		{
			std::cout << "Box6, ";
		}
		if (box7Open == true)
		{
			std::cout << "Box7, ";
		}
		if (box8Open == true)
		{
			std::cout << "Box8, ";
		}
		if (box9Open == true)
		{
			std::cout << "Box9, ";
		}

		std::cout << " Format: #" << std::endl;

		std::cin >> box;

		std::cout << " " << std::endl;

		if (box == 1)
		{
			box1 = 2;
			box1Open = false;
		}
		else if (box == 2)
		{
			box2 = 2;
			box2Open = false;
		}
		else if (box == 3)
		{
			box3 = 2;
			box3Open = false;
		}
		else if (box == 4)
		{
			box4 = 2;
			box4Open = false;
		}
		else if (box == 5)
		{
			box5 = 2;
			box5Open = false;
		}
		else if (box == 6)
		{
			box6 = 2;
			box6Open = false;
		}
		else if (box == 7)
		{
			box7 = 2;
			box7Open = false;
		}
		else if (box == 8)
		{
			box8 = 2;
			box8Open = false;
		}
		else if (box == 9)
		{
			box9 = 2;
			box9Open = false;
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

	std::cout << " " << std::endl;

	if (box1 == 1 && box2 == 1 && box3 == 1)
	{
		gameover = true;
		std::cout << "Game Over! Player1 Wins!" << std::endl;
	}
	else if (box1 == 1 && box4 == 1 && box7 == 1)
	{
		gameover = true;
		std::cout << "Game Over! Player1 Wins!" << std::endl;
	}
	else if (box3 == 1 && box6 == 1 && box9 == 1)
	{
		gameover = true;
		std::cout << "Game Over! Player1 Wins!" << std::endl;
	}
	else if (box7 == 1 && box8 == 1 && box9 == 1)
	{
		gameover = true;
		std::cout << "Game Over! Player1 Wins!" << std::endl;
	}
	else if (box2 == 1 && box4 == 1 && box8 == 1)
	{
		gameover = true;
		std::cout << "Game Over! Player1 Wins!" << std::endl;
	}
	else if (box4 == 1 && box5 == 1 && box6 == 1)
	{
		gameover = true;
		std::cout << "Game Over! Player1 Wins!" << std::endl;
	}
	else if (box3 == 1 && box5 == 1 && box7 == 1)
	{
		gameover = true;
		std::cout << "Game Over! Player1 Wins!" << std::endl;
	}
	else if (box1 == 1 && box5 == 1 && box9 == 1)
	{
		gameover = true;
		std::cout << "Game Over! Player1 Wins!" << std::endl;
	}

	///////////////////////////////////////////////////////////

	if (box1 == 2 && box2 == 2 && box3 == 2)
	{
		gameover = true;
		std::cout << "Game Over! Player2 Wins!" << std::endl;
	}
	else if (box1 == 2 && box4 == 2 && box7 == 2)
	{
		gameover = true;
		std::cout << "Game Over! Player2 Wins!" << std::endl;
	}
	else if (box3 == 2 && box6 == 2 && box9 == 2)
	{
		gameover = true;
		std::cout << "Game Over! Player2 Wins!" << std::endl;
	}
	else if (box7 == 2 && box8 == 2 && box9 == 2)
	{
		gameover = true;
		std::cout << "Game Over! Player2 Wins!" << std::endl;
	}
	else if (box2 == 2 && box4 == 2 && box8 == 2)
	{
		gameover = true;
		std::cout << "Game Over! Player2 Wins!" << std::endl;
	}
	else if (box4 == 2 && box5 == 2 && box6 == 2)
	{
		gameover = true;
		std::cout << "Game Over! Player2 Wins!" << std::endl;
	}
	else if (box3 == 2 && box5 == 2 && box7 == 2)
	{
		gameover = true;
		std::cout << "Game Over! Player2 Wins!" << std::endl;
	}
	else if (box1 == 2 && box5 == 2 && box9 == 2)
	{
		gameover = true;
		std::cout << "Game Over! Player2 Wins!" << std::endl;
	}
}