//Find the Roots of a Quadratic Equation
#include <stdio.h>
#include <math.h>
void main()
{
	double a,b,c;
	printf("ax^2 + bx + c. Enter a,b,c\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	double disc, root1, root2;
	disc = (b * b) - (4 * a * c);
	if(disc > 0)
	{
		root1 = ( -b + sqrt(disc)) / 2*a;
		root2 = ( -b - sqrt(disc)) / 2*a;
		printf("The roots are %lf and %lf\n", root1, root2);
	}
	else if(disc == 0)
	{
		root1 = ( -b + sqrt(disc)) / 2*a;
		printf("Only one root %lf\n", root1);
	}
	else
		printf("No real roots\n");
}
// cc 13.c -lm, math.h seems weird
