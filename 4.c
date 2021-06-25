//Multiply Two Floating-Point Numbers
#include <stdio.h>
void main()
{
	double num1, num2;
	printf("Enter two numbers\n");
	scanf("%lf %lf", &num1, &num2);
	printf("The product is %lf\n", num1*num2);
}

/*Fun Fact : using float instead of double (and %f instead of %lf) gives floating point errors
Enter two numbers
881.1
0.1
The product is 88.110001
https://www.youtube.com/watch?v=PZRI1IfStY0 Floating Point Numbers - Computerphile explains it quite well*/
