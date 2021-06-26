//Check Whether a Number is Even or Odd
#include <stdio.h>
void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d", &num);
	if(num % 2 == 0)
		printf("Even\n");
	else
		printf("Odd\n");
}

