//	Lab2.h
//	Author: Joseph Li
//	Email: josephli@wustl.edu
//	This file contains the source files used by Lab2.cpp

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

//Basic enums
enum args { program, name, argnum };
enum ret { success, failure, wrongnumcommands, quit, extractfail, drawgame, debug};

//Prints out the proper command line format to use this program.
int usagemessage(string name, string instruct);

//Converts a string to all lowercase
void tolowercase(string& a);