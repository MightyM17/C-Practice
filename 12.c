//Find the Largest Number Among Three Numbers
#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 nums\n");
	scanf("%d %d %d", &a, &b, &c);
	if(a >= b && a >= c)
		printf("%d is largest\n", a);
	if(b >= c && b >= a)
		printf("%d is largest\n", b);
	if(c >= b && c >= a)
		printf("%d is largest\n", c);
}

