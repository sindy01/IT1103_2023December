#include <stdio.h>

int main(void){
	char c;
	float base, height, area;
	
	printf("Enter the first letter : ");
	scanf("%c",&c);
	
	if(c == 'T'){
		printf("Enter the base : ");
		scanf("%f",&base);
		
		printf("Enter the height : ");
		scanf("%f",&height);
		
		area = base * height/2;
		printf("Area = ", area);
	}
	
	
	return 0;
	
} 
