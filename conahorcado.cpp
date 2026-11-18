//ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
//CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
//MATERIA--PROGRAMACION ESTRUCTURADA
//NOMBRE--LUIS ENRIQUE LOPEZ GARCIA 
//ESTE PROGRAMA CAPTURA UNA VARIABLE Y SU DIRECCION DE MEMORIA, LUEGO CAPTURA OTRA VARIABLE Y
//SU DIRRECCION DE MEMORIA, Y FINALMENTE CAPTURA UN ARREGLO DE CARACTERES Y SU DIRRECCION DE MEMORIA

#include <stdio.h>

int main()
{
	int A;
	int B;
	int* aptr = &A;
	char texto[] = ¨luis¨;
	*aptr = 20;
	B = 15;
	printf(¨El valor de A es : % \n y su direccion de memoria es : % x\n¨, A, (unsigned int)aptr);
		aptr = &B;
	printf(""El valor de B es : % \n y su direccion de memoria es : % x\n¨, B, (unsigned int)aptr);
	for (int i = 0; i < 10; i++)
	{
		printf(¨%c y su dirreccion de memoria es : % x\n, *()¨)
