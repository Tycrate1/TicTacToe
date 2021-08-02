#pragma once

#include <iostream>

class TicTacToe
{
public:
	int turn = 0;

	int box1 = 0;
	int box2 = 0;
	int box3 = 0;
	int box4 = 0;
	int box5 = 0;
	int box6 = 0;
	int box7 = 0;
	int box8 = 0;
	int box9 = 0;

	bool player1Turn = false;
	bool player2Turn = false;

	int box = 0;

	TicTacToe();
	~TicTacToe();
};

