//Check Leap Year
#include <stdio.h>
void main()
{
	int year;
	printf("Enter year\n");
	scanf("%d", &year);
	if(year % 4 == 0)
	{
		if(year % 400 == 0)
			printf("Leap\n");
		else if(year % 100 == 0)
			printf("Not Leap\n");
		else
			printf("Leap\n");
	}
	else
		printf("Not Leap\n");
}
