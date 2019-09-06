/*
Nick Thoms
c++ 2019
Due 9/12/19
Lab 2 Exploring Outputs pt. 2
Lab Description: Output a checkered sequence to the screen by utilizing contant strings.
*/

#include<iostream>

using namespace std;

/* The first variable represents the first line of the checkered sequence and the
 second variable represents the second line.*/
const string line1 = "    *       *       *       *";
const string line2 = "*\t*\t*\t*\t";

/*In this main function The checkered sequence is being outputted to the sqcreen by 
the use of altering variables every other line.*/

int main()
{
	cout << line1 << endl << line2 << endl << line1 << endl << line2 << endl 
		 << line1 << endl << line2 << endl << line1 << endl << line2 << endl;
	return 0;
}