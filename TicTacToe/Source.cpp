#include "TicTacToe.h"

int main() {
	TicTacToe game;
	std::cout << game;
	int row, col;
	while (true) {
		std::cout << std::endl << "Player 1 move (ROW/COL): ";
		std::cin >> row >> col;
		while (!game.sendMove(row, col, 'X')) {
			std::cout << std::endl << "Invaid move, please try again (ROW/COL): ";
			std::cin >> row >> col;
		}
		if (game.checkWin('X')) {
			std::cout << std::endl << "Player 1 Wins!";
			break;
		}
		std::cout << game;
		std::cout << std::endl << "Player 2 move (ROW/COL): ";
		std::cin >> row >> col;
		while (!game.sendMove(row, col, 'O')) {
			std::cout << std::endl << "Invalid move, please try again: ";
			std::cin >> row >> col;
		}
		if (game.checkWin('O')) {
			std::cout << std::endl << "Player 2 Wins! (ROW/COL)";
			break;
		}
		game.sendMove(row, col, 'O');
		std::cout << game;
	}
}