//	TicTacToeGame.cpp
//	Author: Joseph Li
//	Email: josephli@wustl.edu
//	This file defines the functions of the TicTacToeGame class.

#include "TicTacToeGame.h"

//Constructor
TicTacToeGame::TicTacToeGame() : width(5), height(5) {
	for (size_t i = 0; i < width * height; ++i) {
		pieces.push_back(game_piece{ invalid, " " });
	}
}

//returns true if game is won by x or o
bool TicTacToeGame::done() {
	game_piece p;
	for (size_t i = 1; i < width-1; ++i) {
		if (pieces[height * i + 1].type != invalid) {
			p = pieces[height * i + 1];
			for (size_t j = 1; j < height-1; ++j) {
				if (pieces[height * i + j].type == p.type) {
					if (j == height - 1 - 1) {
						winner = p;
						return true;
					}
				}
				else {
					break;
				}
			}
		}
	}
	for (size_t j = 1; j < height-1; ++j) {
		if (pieces[height * 1 + j].type != invalid) {
			p = pieces[height * 1 + j];
			for (size_t i = 1; i < width-1; ++i) {
				if (pieces[height * i + j].type == p.type) {
					if (i == width - 1 - 1) {
						winner = p;
						return true;
					}
				}
				else {
					break;
				}
			}
		}
	}
	if (pieces[height * 1 + 1].type != invalid) {
		p = pieces[height * 1 + 1];
		for (size_t i = 1; i < height-1; i++) {
			if (pieces[height * i + i].type == p.type) {
				if (i == height - 1 - 1) {
					winner = p;
					return true;
				}
			}
			else {
				break;
			}
		}
	}
	if (pieces[height * 1 + height - 1 - 1].type != invalid) {
		p = pieces[height * 1 + height - 1 - 1];
		for (size_t i = 1; i < height-1; i++) {
			if (pieces[height * i + (height - 1 - i)].type == p.type) {
				if (i == height - 1 - 1) {
					winner = p;
					return true;
				}
			}
			else {
				break;
			}
		}
	}
	return false;
}

//returns true if game has ended in a draw
bool TicTacToeGame::draw() {
	bool a = true;
	if (done() == true) {
		return false;
	}
	for (size_t j = 1; j < height-1; ++j) {
		for (size_t i = 1; i < width-1; ++i) {
			if (pieces[height * i + j].type == invalid) {
				a = false;
			}
		}
	}
	return a;
}

//prompts user for a coordinate pair for x or o to initialize a and b to
int TicTacToeGame::prompt(unsigned int &a, unsigned int &b) {
	a = 0; b = 0;
	while (!(a > 0 && a < width-1 && b > 0 && b < height-1 && pieces[height*a+b].type==invalid)) {
		cout << "Type a valid coordinate pair or quit." << endl;
		string s;
		cin >> s;
		if (s == "quit") {
			return quit;
		}
		replace(s.begin(), s.end(), ',', ' ');
		istringstream iss(s);
		iss >> a;
		iss >> b;
	}
	return success;
}

//keeps track of current player and calls prompt to record move into the gameboard vectors
int TicTacToeGame::turn() {
	unsigned int a;
	unsigned int b;
	int result = prompt(a, b);
	if (result == quit) {
		return quit;
	}
	else if (result == success) {
		if (xturn) {
			cout << "Player X has just gone." << endl;
			xmoves.push_back({ a,b });
			pieces[height*a+b] = (game_piece{ x, "X" });
			cout << *this << endl;
			cout << "Player X: ";
			for (size_t i = 0; i < xmoves.size(); i++) {
				cout << get<0>(xmoves[i]) << ", " << get<1>(xmoves[i]) << "; ";
			}
			cout << endl;
			cout << "----" << endl;
		}
		else {
			cout << "Player O has just gone." << endl;
			omoves.push_back({ a,b });
			pieces[height*a+b] = (game_piece{ o, "O" });
			cout << *this << endl;
			cout << "Player O: ";
			for (size_t i = 0; i < omoves.size(); i++) {
				cout << get<0>(omoves[i]) << ", " << get<1>(omoves[i]) << "; ";
			}
			cout << endl;
			cout << "----" << endl;
		}
		xturn = !xturn;
		return success;
	}
	return extractfail;
}

//play game until a user wins, draws, or quits
int TicTacToeGame::play() {
	cout << *this << endl;
	while (true) {
		int result = turn();
		if (result == quit) {
			cout << xmoves.size() + omoves.size() << " moves were played. The user quit." << endl;
			return quit;
		}
		else if (result == extractfail) {
			return extractfail;
		}
		else {
			if (done()) {
				cout << winner.display << " has won the game" << endl;
				return success;
			}
			else if (draw()) {
				cout << xmoves.size() + omoves.size() << " moves were played. The game is a draw." << endl;
				return drawgame;
			}
		}
	}
	return debug;
}

//prints out gameboard with cout
ostream& operator<<(ostream& out, const TicTacToeGame& g) {

	for (size_t j = g.height - 1; j < g.height; --j) {
		cout << j << " ";
		for (size_t i = 0; i < g.width; ++i) {
			cout << g.pieces[g.height * i + j].display << " ";
		}
		cout << endl;
	}
	cout << "  0 1 2 3 4" << endl;
	return out;
}
