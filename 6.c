//Compute Quotient and Remainder
#include <stdio.h>
#include <math.h>
void main()
{
	double num,div;
	printf("Enter a number and divisor\n");
	scanf("%lf %lf", &num, &div);
	printf("The quotient is %lf, the remainder is %lf\n", num/div, fmod(num,div));
}
/* The % is only for int, for float we have to use fmod(double x, double y)
cc 6.c -lm has to be used check https://stackoverflow.com/questions/11336477/gcc-will-not-properly-include-math-h 
Only use whole numbers, else fun stuff like this happens
Enter a number and divisor
0.9
3
The quotient is 0.300000, the remainder is 0.900000
*/

