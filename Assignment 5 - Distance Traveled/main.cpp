
#include <iostream>
using namespace std;

int main()
{
    int distance,
            speed,
            hours_traveled,
            counter=1;


    cout << "This program will display the total distance travel each hour.\n\n";

    cout << " Enter the speed of the vehicle:  ";
    cin >> speed;

    while(speed < 10) 
    {
        cout << " Speed must be greater than 10 mph. Please enter another number: ";
        cin >> speed;
    }

    while (speed > 120 )
    {
      cout << " Speed must be less than 120 mph. Please enter another number: ";
      cin >> speed;
         
    }

    cout << " How many hours has it traveled?   ";
    cin >> hours_traveled;

    while(hours_traveled < 1) 
    {
        cout << " Hours traveled must be greater than 1. Please enter another number: ";
        cin >> hours_traveled;
    }

    while (hours_traveled > 24)
    {
      cout << " Hours traveled must be less than 24 hours. Please enter anohther number: ";
      cin >> hours_traveled;
    }


    cout << "Hour   Distance" << endl;
   cout <<"-----  ---------" << endl;

    while(counter <= hours_traveled)
    {
        distance = speed * counter;
        cout << counter << "\t\t" << distance << endl;
        counter++;

    }

    return 0;
}
