// This program demonstrates partially initialized
// structure variables.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct EmployeePay
{
   string name;			// Employee name
   int empNum;          // Employee number
   double payRate;      // Hourly pay rate
   double hours;        // Hours worked
   double grossPay;     // Gross pay
};

int main()
{
   // Create employee1 with name as "Tom", empNum as 1000,
   //             payRate as 40, hours 40000
   // Create employee2 with name as "Jerry", empNum as 1001,
   //             payRate as 40, hours 50000


   cout << fixed << showpoint << setprecision(2);

   // Calculate pay for employee1
   cout << "Name: " << employee1.name << endl;
   cout << "Employee Number: " << employee1.empNum << endl;
   cout << "Enter the hours worked by this employee: ";
   cin >> employee1.hours;

   // Calculate grossPay for employee1 and print the grossPay


   cout << "Gross Pay: " << employee1.grossPay << endl << endl;


   // Calculate pay for employee2
   cout << "Name: " << employee2.name << endl;
   cout << "Employee Number: " << employee2.empNum << endl;
   cout << "Enter the hours worked by this employee: ";
   cin >> employee2.hours;

   // Calculate grossPay for employee2 and print grossPay


   return 0;
}