#pragma once

#include <iostream>

class TicTacToe
{
public:
	int turn = 0;

	int boxes[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	bool player1Turn = false;
	bool player2Turn = false;

	int box = 0;

	bool gameover = false;

	void Round();

	bool has_won(int symbol_to_check);
};

