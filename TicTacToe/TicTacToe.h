#pragma once
#include <iostream>
class TicTacToe
{
private:
	char board[3][3] = {
		{ '#', '#', '#' },
		{ '#', '#', '#' },
		{ '#', '#', '#' }
	};
public:
	TicTacToe();
	~TicTacToe();
	bool sendMove(int row, int col, char player);
	bool checkWin(char player);
	friend std::ostream& operator<<(std::ostream& os, TicTacToe& game);
};

