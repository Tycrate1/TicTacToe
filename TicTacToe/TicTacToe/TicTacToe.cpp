#include "TicTacToe.h"

#include <array>;

std::array<std::array<int, 3>, 8> lines_to_check
{ {
	{{1,2,3}}, {{4,5,6}}, {{7,8,9}},

	{{1,4,7}}, {{2,5,8}}, {{3,6,9}},

	{{1,5,9}}, {{3,5,7}}
} };

bool TicTacToe::has_won(int symbol_to_check)
{
	for (auto line : lines_to_check)
	{
		int have_symbol = 0;
		for (auto cell_num : line)
		{
			if (boxes[cell_num] == symbol_to_check) ++have_symbol;
		}
		if (have_symbol == 3) return true;
	}
	return false;
}

void TicTacToe::Round()
{
	turn += 1;

	player2Turn = (turn % 2 == 0);
	player1Turn = !player2Turn;

	if (player1Turn == true)
	{
		std::cout << "Player1's Turn" << std::endl;

		std::cin >> box;

		for (int i = 1; i < 10; i++) {
			if (i == box)
			{
				boxes[i] = 1;
			}
		}

		box = 0;

		player2Turn = false;
		player1Turn = false;

		if (has_won(1) == true)
		{
			gameover = true;
			std::cout << "Game Over! Player1 Wins!" << std::endl;
		}
	}
	else if (player2Turn == true)
	{
		std::cout << "Player2's Turn" << std::endl;

		std::cin >> box;

		for (int i = 1; i < 10; i++) {
			if (i == box)
			{
				boxes[i] = 2;
			}
		}

		box = 0;

		player2Turn = false;
		player1Turn = false;

		if (has_won(2) == true)
		{
			gameover = true;
			std::cout << "Game Over! Player2 Wins!" << std::endl;
		}
	}
	else
	{
		std::cout << "Error: player1Turn & player2Turn are both false" << std::endl;
	}

	std::cout << boxes[1] << " . " << boxes[2] << " . " << boxes[3] << std::endl;
	std::cout << ". . . . ." << std::endl;
	std::cout << boxes[4] << " . " << boxes[5] << " . " << boxes[6] << std::endl;
	std::cout << ". . . . ." << std::endl;
	std::cout << boxes[7] << " . " << boxes[8] << " . " << boxes[9] << std::endl;
}