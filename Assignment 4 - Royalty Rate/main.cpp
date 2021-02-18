
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()

{

//naming constants for special values 
const double option_one_royalties = 25000;
const double OPTION_TWO_ROYALTY_RATE = 0.125;
const double OPTION_THREE_ROYALTY_RATE_UNDER_4000 = 0.10;
const double OPTION_THREE_ROYALTY_RATE_OVER_4000 = 0.14;

//declare variables for user input
double bookPrice; 
int copiesSold;

//declare variables to store royalty calculations
double option_two_royalties, option_three_royalties;

//declare variable to store best option 
string bestOption;

//get user input and store in declared input variables
cout << "Input the price for each individual copy and then input the amount of copies sold: " << endl;
cin >> bookPrice >> copiesSold;

cout << endl;

//calcuate royalties for second option
option_two_royalties = (bookPrice * OPTION_TWO_ROYALTY_RATE) * copiesSold;

//calculate royalties for third option
if (copiesSold <= 4000)
	option_three_royalties = (bookPrice * OPTION_THREE_ROYALTY_RATE_UNDER_4000) * copiesSold;

else if (copiesSold > 4000)
	option_three_royalties =((bookPrice *OPTION_THREE_ROYALTY_RATE_UNDER_4000) * 4000) 
	+ ((bookPrice * OPTION_THREE_ROYALTY_RATE_OVER_4000) * (copiesSold - 4000));
else 
	cout << "There is an error with your program. Please try again. " << endl;
	

//calculate the best option
if (option_one_royalties >       
option_two_royalties && option_one_royalties > option_three_royalties)
	bestOption = "Option One";

else if (option_two_royalties > option_one_royalties && option_two_royalties > option_three_royalties)
	bestOption = "Option Two";

else
	bestOption = "Option Three";
	
//output the royalties for the three options

cout << fixed << setprecision(2);

cout << "The royalties for option 1 are: $" << option_one_royalties << endl;

cout << "The royalties for option 2 are: $" << option_two_royalties << endl;

cout << "The royalties for option 3 are: $" << option_three_royalties << endl;

cout << endl;

//output the best option
cout << "The best option is: " << bestOption << endl;

return 0;

}
