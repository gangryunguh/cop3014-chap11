// This program uses an array of structures.
#include <iostream>
#include <iomanip>
using namespace std;

struct PayInfo
{
   int hours;        // Hours Worked
   double payRate;   // Hourly Pay Rate
};

int main()
{
   const int NUM_WORKERS = 3;    // Number of workers

   // Create an array of 3 PayInfo and name it as "workers"

   int index;                    // Loop counter

   // Get employee pay data.
   cout << "Enter the hours worked by " << NUM_WORKERS 
        << " employees and their hourly rates.\n";

   // Create a for loop that initializes each worker object
   // by iterating over "workers" array using a pointer
   // arithmetic.

   // Display each employee's gross pay.
   cout << "Here is the gross pay for each employee:\n";
   cout << fixed << showpoint << setprecision(2);
   for (index = 0; index < NUM_WORKERS; index++)
   {
      double gross;
      gross = workers[index].hours * workers[index].payRate;
      cout << "Employee #" << (index + 1);
      cout << ": $" << gross << endl;
   }
   return 0;
}