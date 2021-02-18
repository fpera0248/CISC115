
// Wind Chill Factor Program
// F.Peralta (Nov. 7, 2020)

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

char temp_scale; 
double celsius; 
double fahr;
double V;
double c;
double f;
double ctof; // variable for Celsius to Fahrenheit
double ftoc; 
double windchill;
double windchill1; // Variable for equation that converts Celsius to Fahrenheit to calculate wind chill factor

// Prompts user to input temperature scale
  cout << "Enter the temperature scale: " << endl;
  cout << "1. Celsius to Fahrenheit(Enter as c)" << endl;
  cout << "2. Fahrenheit to Celsius (Enter as f)" << endl;
  cin >> temp_scale;

// If statment that calculates if the temperature scale is Celsius
if (temp_scale == 'c')
{
   // temperature conversion formula

  cout << "Input the current temperature in degrees Celsius:" << endl;
  cin >> celsius;

  // Equation that converts Celsius to Fahrenheit
  ctof = (1.8 * celsius) + 32.0;

  cout << "The temperature in Celsius was " << celsius << " and when converted to degrees Fahrenheit it is: " << ctof << " F" << endl;

  //Prompts user to input wind speed
  cout << "Input the wind speed" << endl;
  cin >> V;

  // Equation for windchill factor
   windchill = 35.74 + (0.6215*ctof)- 35.75 * pow(V, 0.16)+(0.4275 *ctof * pow(V ,0.16));

  //Outputs wind chill factor after being calculated
  cout << "The wind chill factor is: " << windchill << " F" << endl;

} //If statment that calculates the variables when the temperature scale if Fahrenheit
else if (temp_scale == 'f')
   {

      cout << "Input the current temperature in degrees Fahrenheit:" << endl;
      cin >> fahr;

      //Equation for temperature conversion from Fahrenheit to Celsius
      ftoc = (fahr - 32) / 1.8; 

      cout << "The temperature in Fahrenheit was " << fahr << " and when converted to degrees Celsius it is: " << ftoc << " C" << endl;

      cout << "Input the wind speed" << endl;
      cin >> V;

      //Equation that converts wind chill factor from Celsius to Fahrenheit
      windchill1 = (1.8 * ftoc) + 32.0 ; 

      windchill = 35.74 + (0.6215* windchill1)- 35.75 * pow(V, 0.16)+(0.4275 * windchill1 * pow(V ,0.16));
 

      cout << "The wind chill factor is: " << windchill << " F" << endl;
      
   }
   else
      cout << "Error Wrong Input. Try to run the program again" << endl;

return 0;

}

