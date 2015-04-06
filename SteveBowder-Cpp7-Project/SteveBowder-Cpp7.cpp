/**
 Steve Bowder
 8/11/13
 Assignment 7
 This program uses pointers to
 manipulate arrays.
**/

#include <iostream>
#include <cstdlib>
using namespace std;

// Declare functions used
void printArray(int *, int);
void fillArray(int *, int);
void reverse(int *, int);

int main()
{
	// Set up the array of ints
	const int MAX = 43;
	int a[MAX];

	// Display name
	cout << "Steve Bowder" << endl << endl;
	
	fillArray(a, MAX);	
	cout << "Array a:\n";
	printArray(a, MAX);
	cout << endl; // Added an extra whitespace for easier reading

	// Reverse the array and then display it
	reverse(a, MAX);
	cout << "\nArray a reversed:\n";
	printArray(a, MAX);
	cout << endl;
	
	//Return that the program has finished
	return 0;
}

/******************************************************

	The function printArray outputs an array
	to the console.

	@param *aPoint Pointer to the array being printed
	@param max How many elements are in the array

******************************************************/

void printArray(int *aPoint, int max)
{
	// Set the constant for how many items per line
	const int LINE_BREAK = 5;

	// Variables for looping
	int i = 0, j;

	// Loop to print all the elements
	while (i < max)
	{
		// Check to see if a linebreak is necessary
		if (i % LINE_BREAK == 0)
		{
			// Insert a line break
			cout << endl;
		}

		// Print the value stored at the current pointer position
		cout << *aPoint << "\t";

		// Increase pointer's position and loop control
		aPoint++;
		i++;		
	}
}

/******************************************************

	The function fillArray loops to fill an array
	with integers.

	@param *aPoint Pointer to array being filled
	@param max How many elements are in the array

******************************************************/

void fillArray(int *aPoint, int max)
{
	// Constants for the random numbers' range and minimum
	const int RAND_RANGE = 100, RAND_MIN = 1;

	// Variable used for looping
	int i = 0;

	// Loop through the array via pointer
	while (i < max)
	{
		// Set the value of the pointer's position to a random number
		// within the range
		*aPoint = rand() % RAND_RANGE + RAND_MIN;

		// Increase pointer's position
		aPoint++;

		// Increase loop control
		i++;
	}
}

/******************************************************

	The function reverse reverses an array

	@param *aPoint Pointer to array to be reversed
	@param max How many elements are in the array

******************************************************/

void reverse(int *aPoint, int max)
{
	// Variables
	// Set second pointer to be at the opposite end of the array
	int *aPoint2 = aPoint + max - 1, tempInt, i = 0;
	
	// While the two pointers aren't pointing to the same address
	while (aPoint != aPoint2)
	{
		// Swap the two elements stored at the two pointer positions
		tempInt = *aPoint;
		*aPoint = *aPoint2;
		*aPoint2 = tempInt;

		// Increase first pointer, decrease second pointer
		aPoint++;		
		aPoint2--;
	}
}

/************* Output *************

Steve Bowder

Array a:
42      68      35      1       70
25      79      59      63      65
6       46      82      28      62
92      96      43      28      37
92      5       3       54      93

Array a reversed:
93      54      3       5       92
37      28      43      96      92
62      28      82      46      6
65      63      59      79      25
70      1       35      68      42

Press any key to continue . . .

***********************************

Steve Bowder

Array a:

42      68      35      1       70
25      79      59      63      65
6       46      82      28      62
92      96      43      28      37
92      5       3       54      93
83      22      17      19      96
48      27      72      39      70
13      68      100     36      95
4       12      23

Array a reversed:

23      12      4       95      36
100     68      13      70      39
72      27      48      96      19
17      22      83      93      54
3       5       92      37      28
43      96      92      62      28
82      46      6       65      63
59      79      25      70      1
35      68      42
Press any key to continue . . .

**********************************/