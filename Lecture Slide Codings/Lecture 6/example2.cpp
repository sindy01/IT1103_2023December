//Lecture 6 Slide 18 - Practice Question 2

#include <iostream>

using namespace std;

int calculate_sum(int a ,int b);

int main()
{
	int num1, num2, sum;
	cout << "Enter the two numbers : ";
	cin >> num1 >> num2;
	
	sum = calculate_sum(num1,num2);
	cout << "The summation of numbers is " << sum << endl;
		
	return 0;
}

int calculate_sum(int a ,int b)
{   
    int sum ; 
    sum = a + b;
    return sum;
}

