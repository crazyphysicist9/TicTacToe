//	Lab2.cpp
//	Author: Joseph Li
//	Email: josephli@wustl.edu
//	This file calls a program that runs a game of tic tac toe.

#include <iostream>
#include "Lab2.h"
#include "gamepieces.h"
#include "TicTacToeGame.h"

//Parses board pieces onto a board game and prints out board game visual
int main(int argc, char* argv[])
{
	string str = "TicTacToeGame";
	if (argc != (int)argnum || argv[name]!=str) {
		return usagemessage(argv[(int)program], " TicTacToeGame");
	}

	TicTacToeGame test;
	return test.play();

}

//Prints out the proper command line format to use this program.
int usagemessage(string name, string instruct) {
	cout << name << instruct << endl;
	return (int)ret::wrongnumcommands;
}

//Converts a string to all lowercase
void tolowercase(string& a) {
	for (int i = 0; i < (signed)a.length(); i++) {
		if ((char)a[i] > 64 && (char)a[i] < 91) {
			a[i] += 32;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
