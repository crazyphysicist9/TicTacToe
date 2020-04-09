//	gamepieces.cpp
//	Author: Joseph Li
//	Email: josephli@wustl.edu
//	This file defines the methods for gamepieces.

#include "gamepieces.h"

//Takes in piece, an enum, and converts it to its lowercase string representation
string typestring(piece a) {
	string b;
	switch (a) {
	case x: b = "X";
	case o: b = "O";
	default: b = " ";
	}
	tolowercase(b);
	return b;
}

//Takes in a string and returns its enum equivalent
piece typeenum(string a) {
	if (a.compare("x") || a.compare("X") == 0) {
		return x;
	}
	if (a.compare("o") || a.compare("O") == 0) {
		return o;
	}
	else {
		return invalid;
	}

}