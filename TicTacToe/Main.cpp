#include <iostream>

#include "TicTacToe.h"

int main()
{
	TicTacToe tictactoe;

	std::cout << "TicTacToe!" << std::endl << std::endl;

	while (tictactoe.gameover == false)
	{
		tictactoe.Round();
	}

	return 0;
}