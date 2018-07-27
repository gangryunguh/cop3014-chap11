// This program demonstrates the use of structures.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct PayRoll
{
   int empNumber;    // Employee number
   string name;		 // Employee's name
   double hours;     // Hours worked
   double payRate;   // Hourly payRate
   double grossPay;  // Gross Pay
};

int main()
{
   PayRoll employee; // employee is a PayRoll structure.

   // Get the employee's number.
   cout << "Enter the employee's number: ";

   // Get the employee's name.
   cout << "Enter the employee's name: ";
    	// To skip the remaining '\n' character

   // Get the hours worked by the employee.
   cout << "How many hours did the employee work? ";


   // Get the employee's hourly pay rate.
   cout << "What is the employee's hourly payRate? ";

   // Calculate the employee's gross pay.

   // Display the employee data.
   cout << fixed << showpoint << setprecision(2);
   cout << "Here is the employee's payroll data:\n";

   cout << "\n\nPrint using printPayrollRecord specialized routine for PayRoll ADT\n";
   // Display the employee data using a specialzed ADT operator

   return 0;
}