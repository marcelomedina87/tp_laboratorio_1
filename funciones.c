#include <stdio.h>
#include <stdlib.h>

/**
 * \BRIEF solicita un numero y lo retorna
 * \PARAM ninguno
 * \RETURN numero ingresado por el usuario
 */

float pedirNumero(){
	float numero;
	printf("ingrese numero: ");
	scanf("%f",&numero);
	return numero;
}

/**
 * \BRIEF realiza la suma de dos numeros
 * \PARAM dos numeros
 * \RETURN resultado de la suma
 */

float suma(float a, float b) {
  return a+b;
}

/**
 * \BRIEF realiza la resta de dos numeros
 * \PARAM dos numeros
 * \RETURN resultado de la resta
 */

float resta(float a, float b) {
  return a-b;
}


/**
 * \BRIEF realiza la multiplicacion de dos numeros
 * \PARAM dos numeros
 * \RETURN resultado de la multiplicacion
 */


float multiplicar(float a, float b) {
  return a*b;
}

/**
 * \BRIEF realiza la division de dos numeros
 * \PARAM dos numeros
 * \RETURN resultado de la division
 */

float dividir(float a, float b) {
  return a/b;
}

/**
 * \BRIEF realiza el calculo factorial de un numero
 * \PARAM un numero
 * \RETURN factorial del numero
 */

long factorial(float n)
{
  int i;
  long resultado = 1;
 if (n < 1)
    return 1;
  for (i = 1; i <= n; i++)
    resultado = resultado * i;

  return resultado;
}


