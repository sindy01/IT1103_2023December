//Lecture 5 Slide 36 - Practice Question 9

#include <iostream>

using namespace std;

int main() 
{
    for(int i = 1; i <= 5; i++)
    {
    	if(i == 3)
    	{
    		continue;
		}
		cout << i << endl;
	}
	
    return 0;
}

