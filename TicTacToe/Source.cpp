#include "TicTacToe.h"
#include <cstdlib>
#include <iostream>

int main() {
	TicTacToe game;
	game.printBoard();
	while (true) {
		int row, col;
		std::cout << std::endl << "Player 1 move: ";
		std::cin >> row >> col;
		while (!game.sendMove(row, col, 'X')) {
			std::cout << std::endl << "Invaid move, please try again: ";
			std::cin >> row >> col;
		}
		if (game.checkWin('X')) {
			std::cout << std::endl << "Player 1 Wins!";
			break;
		}
		game.printBoard();
		std::cout << std::endl << "Player 2 move: ";
		std::cin >> row >> col;
		while (!game.sendMove(row, col, 'O')) {
			std::cout << std::endl << "Invalid move, please try again: ";
			std::cin >> row >> col;
		}
		if (game.checkWin('O')) {
			std::cout << std::endl << "Player 2 Wins!";
			break;
		}
		game.sendMove(row, col, 'O');
		game.printBoard();
	}
	system("pause");
}