//Check Whether a Character is a Vowel or Consonant
#include <stdio.h>
void main()
{
	char c;
	printf("Enter a char\n");
	scanf("%c", &c);
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		printf("Vowel\n");
	else
		printf("Consonant\n");
}

