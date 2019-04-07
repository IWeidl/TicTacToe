#pragma once
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
	void printBoard();
};

