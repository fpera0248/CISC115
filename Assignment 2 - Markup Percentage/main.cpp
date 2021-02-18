// This is a program that shows Price Markup
//F. Peralta Sept 19 2020

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
double originalPrice;  // Created identifier for the Original Price 
double markupPercentage; // Created Identifier for the Markup Percentage
double retailPrice;
const double salesTaxrate = 0.06;
double salesTax;
double totalPrice;
cout << fixed << setprecision(2);

cout << "Enter the Original Price and then enter the Markup Percentage" << endl;  // Prompts the user to enter a value for Original Price and Markup Percentage

cin >>  originalPrice >> markupPercentage; // Allows user to input the values for Original Price and Markup Percentage

cout << endl;

markupPercentage = markupPercentage * .01; // Turns the value of the Markup Percentage into percentage form

retailPrice = originalPrice + (markupPercentage * originalPrice); // Equation for finding the retail price

cout << "The retail price of the item is $" << retailPrice << endl;

salesTax = retailPrice * salesTaxrate; // Equation for sales tax

cout << "The sales tax that will be charged for the item is $" << salesTax << endl;

totalPrice = retailPrice + salesTax; // Equation for total price

cout << "The total price including tax is $" << totalPrice;

return 0;

}
