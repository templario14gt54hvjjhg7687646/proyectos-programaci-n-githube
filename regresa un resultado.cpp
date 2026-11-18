
#include <stdio.h>
int respuesta(int a, int b, int c); [
	if (b * b - 4 * a * c >= 0)[
		return a + b + c;
	]
		return 0;
]
void desplegar (int respuesta)[
	if (respuesta == 0)[
		printf("no hay solución\n");
	]
]
int main()[
	int a, b, c;
	a = 1; b = 2; c = 3;
	desplegar(respuesta(a, b, c));
	return 0;
]