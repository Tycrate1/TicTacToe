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

	bool box1Open = true;
	bool box2Open = true;
	bool box3Open = true;
	bool box4Open = true;
	bool box5Open = true;
	bool box6Open = true;
	bool box7Open = true;
	bool box8Open = true;
	bool box9Open = true;

	bool player1Turn = false;
	bool player2Turn = false;

	int box = 0;

	bool gameover = false;

	void Round();
};

