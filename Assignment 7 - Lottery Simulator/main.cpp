
//F. Peralta
// Program to simulate a lottery
// November 29th, 2020

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int winningDigits[5];
	int player[5];
	int digit, match = 0, num;

  // Give the random generator a seed to start with
	srand(time(NULL));					

	// Get 5 random digits and store them in winningDigits

  // Ask user to enter 5 digits and store them in player

  cout << "Enter player's numbers: ";

    for (int i = 0; i < 5; i++)
    {
      // Get 5 random digits and store them in winningDigits

        winningDigits[i] = 0 + rand() % 9;

        cin >> digit;

         player[i] = digit;
    }

	// Compare the digits in the two arrays and count how many digits match.

	for (int i = 0; i < 5; i++)
	{
		if (winningDigits[i] == player[i])
			match++;
	}

	// Display winning digits
	cout << "Winning digits : ";
	for (int i = 0; i < 5; i++)
	{
		cout << winningDigits[i] << " ";
	}
	cout << endl;

	// Display player's digits
	cout << "Player digits  : ";
	for (int i = 0; i < 5; i++)
	{
		cout << player[i] << " ";
	}
	cout << endl;

	// Display number of matching digits
	cout << "Digits matched: " << match << endl;

	return 0;
}
