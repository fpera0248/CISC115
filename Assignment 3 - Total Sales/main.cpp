
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
ifstream myfile;
string myfile1;
string name1;
string name2;
double base_Salary;
double commission_Percent;
double total_Sales;
double expenses;
double commission; 
double total;

cout << fixed << setprecision(2);

cout << "Enter file name: " << endl;
cin >> myfile1 ;

myfile.open("salesCheck.txt");

myfile >> name1 >> name2 >> base_Salary >> commission_Percent >> total_Sales >> expenses;

commission = (commission_Percent * total_Sales) / 100;


cout << "Payroll data for " << name1 << " " << name2 << endl << endl ;

cout << "Base Salary: " << setw(8) << base_Salary << endl;

cout << "Commission:  " << setw(8) << commission << " (3.5% of 10155.00)" << endl ;

cout << "Expenses:    " << setw(8) << expenses << endl;

total = base_Salary + commission + expenses;

cout << "              --------" << endl;

cout << "Total:       " << setw(8) << total << endl;

myfile.close();



}
