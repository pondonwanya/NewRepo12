#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, ber, a, b;
	printf ("Enter first number :");
	scanf("%d", &num);
	printf ("Enter second number :");
	scanf("%d", &ber);
	for (a = 1; (a < num) && (a < ber); a++)
		if ((num % a == 0) && (ber % a == 0))
			b = a;
	printf("Greatest common divisor = %d", b);
}