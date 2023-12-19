//Lecture 5 Slide 12 - Practice Question 2
//Counter-Controlled while Loops

#include <iostream>

using namespace std;

int main() 
{
    // Declare variables
    int number;

    // Get input from the user
    cout << "Enter number: ";
    cin >> number;

    // Print the pattern using a while loop
    int i = number;
    while (i >= 1) 
	{
        cout << i << " ";
        i--;
    }

    return 0;
}

