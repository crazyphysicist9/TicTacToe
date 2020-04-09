//	gamepieces.h
//	Author: Joseph Li
//	Email: josephli@wustl.edu
//	This file declares a container to hold the attributes for a gamepiece

#pragma once
#include "Lab2.h"

//Piece options for gamepiece
enum piece { x, o, invalid };

//Attributes for a gamepiece
struct game_piece {
	piece type;
	string display;
};

//Takes in piece, an enum, and converts it to its lowercase string representation
string typestring(piece a);

//Takes in a string and returns its enum equivalent
piece typeenum(string a);
