#pragma once
#include "TicTacToe.h"
#include <iostream>



TicTacToe::TicTacToe()
{
}


TicTacToe::~TicTacToe()
{
}

bool TicTacToe::sendMove(int row, int col, char player)
{
	if (board[row - 1][col - 1] == '#') {
		board[row - 1][col - 1] = player;
		return true;
	} 
	else {
		return false;
	}
	
}

bool TicTacToe::checkWin(char player)
{
	//Horizontal
	if (board[0][0] == player && board[0][1] == player && board[0][2] == player) { return true; }
	if (board[1][0] == player && board[1][1] == player && board[1][2] == player) { return true; }
	if (board[2][0] == player && board[2][1] == player && board[2][2] == player) { return true; }

	//Vertical
	if (board[0][0] == player && board[1][0] == player && board[2][0] == player) { return true; }
	if (board[0][1] == player && board[1][1] == player && board[2][1] == player) { return true; }
	if (board[0][2] == player && board[1][2] == player && board[2][2] == player) { return true; }

	//Diagonal
	if (board[0][0] == player && board[1][1] == player && board[2][2] == player) { return true; }
	if (board[0][2] == player && board[1][1] == player && board[2][0] == player) { return true; }

	return false;
}

void TicTacToe::printBoard()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << "|" << board[i][j] << "|";
		}
		std::cout << std::endl;
	}
}

