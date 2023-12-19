// Tutorial 4 Question 2

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    // Declare variables
    float subject1, subject2, subject3, average;

    // Get input from the user
    cout << "Enter marks of 3 subjects: ";
    cin >> subject1 >> subject2 >> subject3;

    // Calculate average
    average = (subject1 + subject2 + subject3) / 3.0;

    // Display average with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Average mark: " << average << endl;

    // Check student's status
    if (average >= 50.0) 
	{
        cout << "Status: Pass" << endl;
    } 
	else 
	{
        cout << "Status: Fail" << endl;
    }

    return 0;
}

/*
fixed: This manipulator is used to set the floating-point 
output to a fixed-point notation. By default, floating-point 
numbers are printed in scientific notation if they are too 
large or too small. Using fixed ensures that the numbers are 
printed in standard decimal notation regardless of their magnitude.

setprecision(2): This manipulator sets the precision of 
floating-point numbers to 2 decimal places. It means that 
when a floating-point number is printed, it will show up 
to two digits after the decimal point.
*/
