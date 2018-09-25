// This program uses nested structures.
#include <iostream>
#include <string>
using namespace std;

// The Date structure holds data about a date.
struct Date
{
   int month;
   int day;
   int year;
};

// The Place structure holds a physical address.
struct Place
{
   string address;
   string city;
   string state;
   string zip;
};

// The EmployeeInfo structure holds an employee's data.
struct EmployeeInfo
{
   string name;
   int employeeNumber;
   Date birthDate;           // Nested structure
   Place residence;          // Nested structure
};

int main()
{
   // Define a structure variable to hold info about the manager.
   EmployeeInfo manager;

   // Get the manager's name and employee number
   cout << "Enter the manager's name: ";

   // Using istream getline method to initialize manager name

   cout << "Enter the manager's employee number: ";

   // Initialize manager employee number

   
   // Get the manager's birth date
   cout << "Now enter the manager's date of birth.\n";
   cout << "Month (up to 2 digits): ";
   cin >> manager.birthDate.month;
   cout << "Day (up to 2 digits): ";
   cin >> manager.birthDate.day;
   cout << "Year: ";
   cin >> manager.birthDate.year;
   cin.ignore();  // Skip the remaining newline character
   
   // Get the manager's residence information using istream
   // getline
   cout << "Enter the manager's street address: ";

   cout << "City: ";

   cout << "State: ";

   cout << "ZIP Code: ";

   
   // Display the information just entered
   cout << "\nHere is the manager's information:\n";
   cout << manager.name << endl;
   cout << "Employee number " << manager.employeeNumber << endl;
   cout << "Date of birth: ";
   cout << manager.birthDate.month << "-";
   cout << manager.birthDate.day << "-";
   cout << manager.birthDate.year << endl;
   cout << "Place of residence:\n";
   cout << manager.residence.address << endl;
   cout << manager.residence.city << ", ";
   cout << manager.residence.state << "  ";
   cout << manager.residence.zip << endl;
   return 0;
}