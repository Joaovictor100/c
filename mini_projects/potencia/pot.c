#include <stdio.h>

extern int poten(int a, int b);

int main() {
	int number1, number2;

	printf("Digite a base: ");
	scanf("%d", &number1);

	printf("Digite a potência: ");
	scanf("%d", &number2);

	int result = poten(number1, number2);

	printf("%d elevado a %d é %d", number1, number2, result);

	return 0;
}
