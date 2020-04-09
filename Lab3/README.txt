Joseph Li
Lab 3

Warnings:
1>H:\repository332\LabTres\Lab3\TicTacToeGame.cpp(170,31): warning C4018:  '<': signed/unsigned mismatch

Test cases: 

Command Line:
Works:
Lab2.exe TicTacToeGame

Doesn't work:
Lab2.exe 1
Lab2.exe
Lab2.exe hey dude


Game tests:
1)

4
3
2
1
0
  0 1 2 3 4

Type a valid coordinate pair or quit.
1,1
Player X has just gone.
4
3
2
1   X
0
  0 1 2 3 4

Player X: 1, 1;
----
Type a valid coordinate pair or quit.
2,1
Player O has just gone.
4
3
2
1   X O
0
  0 1 2 3 4

Player O: 2, 1;
----
Type a valid coordinate pair or quit.
1,2
Player X has just gone.
4
3
2   X
1   X O
0
  0 1 2 3 4

Player X: 1, 1; 1, 2;
----
Type a valid coordinate pair or quit.
2,2
Player O has just gone.
4
3
2   X O
1   X O
0
  0 1 2 3 4

Player O: 2, 1; 2, 2;
----
Type a valid coordinate pair or quit.
1,3
Player X has just gone.
4
3   X
2   X O
1   X O
0
  0 1 2 3 4

Player X: 1, 1; 1, 2; 1, 3;
----
X has won the game



2)
4
3
2
1
0
  0 1 2 3 4

Type a valid coordinate pair or quit.
1,2
Player X has just gone.
4
3
2   X
1
0
  0 1 2 3 4

Player X: 1, 2;
----
Type a valid coordinate pair or quit.
2,2
Player O has just gone.
4
3
2   X O
1
0
  0 1 2 3 4

Player O: 2, 2;
----
Type a valid coordinate pair or quit.
3,1
Player X has just gone.
4
3
2   X O
1       X
0
  0 1 2 3 4

Player X: 1, 2; 3, 1;
----
Type a valid coordinate pair or quit.
3,3
Player O has just gone.
4
3       O
2   X O
1       X
0
  0 1 2 3 4

Player O: 2, 2; 3, 3;
----
Type a valid coordinate pair or quit.
3,2
Player X has just gone.
4
3       O
2   X O X
1       X
0
  0 1 2 3 4

Player X: 1, 2; 3, 1; 3, 2;
----
Type a valid coordinate pair or quit.
1,1
Player O has just gone.
4
3       O
2   X O X
1   O   X
0
  0 1 2 3 4

Player O: 2, 2; 3, 3; 1, 1;
----
O has won the game


3)
4
3
2
1
0
  0 1 2 3 4

Type a valid coordinate pair or quit.
1,1
Player X has just gone.
4
3
2
1   X
0
  0 1 2 3 4

Player X: 1, 1;
----
Type a valid coordinate pair or quit.
2,2
Player O has just gone.
4
3
2     O
1   X
0
  0 1 2 3 4

Player O: 2, 2;
----
Type a valid coordinate pair or quit.
3,3
Player X has just gone.
4
3       X
2     O
1   X
0
  0 1 2 3 4

Player X: 1, 1; 3, 3;
----
Type a valid coordinate pair or quit.
3,1
Player O has just gone.
4
3       X
2     O
1   X   O
0
  0 1 2 3 4

Player O: 2, 2; 3, 1;
----
Type a valid coordinate pair or quit.
1,3
Player X has just gone.
4
3   X   X
2     O
1   X   O
0
  0 1 2 3 4

Player X: 1, 1; 3, 3; 1, 3;
----
Type a valid coordinate pair or quit.
1,2
Player O has just gone.
4
3   X   X
2   O O
1   X   O
0
  0 1 2 3 4

Player O: 2, 2; 3, 1; 1, 2;
----
Type a valid coordinate pair or quit.
3,2
Player X has just gone.
4
3   X   X
2   O O X
1   X   O
0
  0 1 2 3 4

Player X: 1, 1; 3, 3; 1, 3; 3, 2;
----
Type a valid coordinate pair or quit.
2,3
Player O has just gone.
4
3   X O X
2   O O X
1   X   O
0
  0 1 2 3 4

Player O: 2, 2; 3, 1; 1, 2; 2, 3;
----
Type a valid coordinate pair or quit.
2,1
Player X has just gone.
4
3   X O X
2   O O X
1   X X O
0
  0 1 2 3 4

Player X: 1, 1; 3, 3; 1, 3; 3, 2; 2, 1;
----
9 moves were played. The game is a draw.


4)

4
3
2
1
0
  0 1 2 3 4

Type a valid coordinate pair or quit.
ls
Type a valid coordinate pair or quit.
1,2
Player X has just gone.
4
3
2   X
1
0
  0 1 2 3 4

Player X: 1, 2;
----
Type a valid coordinate pair or quit.
quit
1 moves were played. The user quit.


Overall:
Program handles incorrect inputs from user by continuing to prompt for a valid input.
Allows user to quit game.
Successfully determines a winner or draw game.