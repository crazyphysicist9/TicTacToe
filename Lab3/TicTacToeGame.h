//	TicTacToeGame.h
//	Author: Joseph Li
//	Email: josephli@wustl.edu
//	This file declares the functions and attributes of the TicTacToeGame class.

#pragma once
#include "Lab2.h"
#include "gamepieces.h"

class TicTacToeGame
{
	friend ostream& operator<<(ostream& out, const TicTacToeGame& g);
public:
	TicTacToeGame(); //Constructor
	bool done(); //returns true if game is won by x or o
	bool draw(); //returns true if game has ended in a draw
	int prompt(unsigned int &a, unsigned int &b); //prompts user for a coordinate pair for x or o to initialize a and b to
	int turn(); //keeps track of current player and calls prompt to record move into the gameboard vectors
	int play(); //play game until a user wins, draws, or quits

private:
	unsigned int width;
	unsigned int height;
	vector<game_piece> pieces;
	bool xturn = true;
	vector<tuple<int,int>> xmoves;
	vector<tuple<int,int>> omoves;
	game_piece winner;
};

//prints out gameboard with cout
ostream& operator<<(ostream& out, const TicTacToeGame& g);
