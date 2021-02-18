
//This program calculates the area of lawn on a rectangular piece of property where a house and a shed sits on the property( Assignment 1)
//F. Peralta - Sept 13 2020

#include <iostream>
using namespace std;

int main() {

int property_Length; // Created identifier for the Property Length
int property_Width; // Created identifier for the Property Width
int house_Length; // Created identifier for the House Length
int house_Width; // Created identifier for the House Width
int shed_Length; // Created the identifier for Shed Length
int shed_Width; // Created the identifier for Shed Width
int lawn_Area; // Created the identifier for the total Lawn Area

cout << "Enter the length and width of the property" << endl; // Prompts  the user to enter the dimensions of the house

 cin >> property_Length >> property_Width ; // Allows user to input the dimensions of the house

  cout << "Enter the length and width of the house"<< endl; // Prompts the user to enter the dimensions of the house

  cin >> house_Length >> house_Width; // Allows the user to enter the dimensions of the house

  cout << "Enter the length and width of the shed" << endl; // Prompts the user to enter the dimensions of the shed

  cin >> shed_Length >> shed_Width; // Allows the user to enter the dimensions of the shed

lawn_Area = (property_Length * property_Width) - (house_Length * house_Width) - (shed_Length * shed_Width); // Finds the area of the lawn by subtracting the areas of the property, house and shed  

cout << "The area of the lawn is " << lawn_Area << " square feet"; // Tells the user what the area of the lawn is based on their inputs

return 0;

}
