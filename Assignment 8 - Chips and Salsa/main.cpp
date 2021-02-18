
//F.Peralta
//Chips and Salsa Program

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  //Declare arrays and its content
	int jars = 5;
	const string salsa[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int sales[jars];

	// Prompt user to enter the number of jars sold of each type
	cout << "Enter the number of jars sold for each type of salsa.\n";
	for (int i = 0; i < jars; i++)
	{
		int num;
		do
		{
			cout << salsa[i] << ": "; 
			cin  >> num;

			if (num < 0)
				cout << "Error! Jars sold must be greater then 0.\n";

		} while (num < 0);
		sales[i] = num; 
	}

	// Produce and display report
	int high, low, tot = 0;
	high = low = sales[0];

	cout << "\nSalsa Sales Report\n"
	    <<"------------------\n";
	     
  //Display types of salsa and amount of jars sold in a ordered column
	for (int i = 0; i < jars; i++)
	{
    cout.width(1000);

    cout << fixed << setw(6) << left << salsa[i] << " ";

    cout << fixed << setw(5) << right << sales[i] << endl;

		tot += sales[i];

		if(sales[i] > high)
		{
			high = sales[i];
		}
		else if (sales[i] < low)
		{
			low = sales[i]; 
		}
	}
  cout << "        -----";
  cout << endl;

  // Output total number of salsas sold
  cout.width(100);
	cout << fixed << setw(5) << left << "Total: ";
  cout << fixed << setw(5) << right << tot << endl << endl;

  // Output best selling salsa
	cout << "Best selling product is ";

	for (int i = 0; i < jars; i++)
	{
		if (sales[i] == high)
			cout << salsa[i] << " ";
	}

	return 0;
}
