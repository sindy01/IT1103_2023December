//Lecture 6 Slide 22 - Practice Question 3

#include <iostream>

using namespace std;

void greet();
int calculate_sum(int a ,int b);

int main()
{
	greet();
	
	int num1, num2, sum;
	cout << "Enter the two numbers : ";
	cin >> num1 >> num2;
	
	sum = calculate_sum(num1,num2);
	cout << "The summation of numbers is " << sum << endl;
		
	return 0;
}

void greet()
{
   cout<<"Hello World"<<endl;
}


int calculate_sum(int a ,int b)
{   
    int sum ; 
    sum = a + b;
    return sum;
}

