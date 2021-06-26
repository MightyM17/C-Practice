//Swap 2 nos
#include <stdio.h>
void main()
{
	int num1,num2,temp;
	printf("Enter two numbers\n");
	scanf("%d %d", &num1, &num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Swap is %d, %d\n", num1, num2);
}

