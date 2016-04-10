#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
 char elegirA = 'n', elegirB = 'n', volverMenu = 's';
 int opcion = 0;
 float a, b, resultado;


 while (volverMenu == 's')
 {
  printf("\n\n\t\ ****** MENU ****** \n\n");
  if (elegirA == 'n' && elegirB == 'n') {
   printf("operando A: \n");
   printf("operando B: \n\n");
   printf("1- Ingresar operando(A)\n");
   printf("2- Ingresar operando(B)\n");
   printf("3- Calcular la suma (A+B)\n");
   printf("4- Calcular la resta (A-B)\n");
   printf("5- Calcular la division (A/B)\n");
   printf("6- Calcular la multiplicacion (AxB)\n");
   printf("7- Calcular el factorial (A!)\n");
  }
  else {
   if (elegirA == 's' && elegirB == 'n') {
    printf("operando A: %.2f\n", a);
    printf("operando B: \n\n");
    printf("1- Ingresar operando(A) (%.2f)\n", a);
    printf("2- Ingresar operando(B)\n");
    printf("3- Calcular la suma (%.2f + B)\n", a);
    printf("4- Calcular la resta (%.2f - B)\n", a);
    printf("5- Calcular la division (%.2f / B)\n", a);
    printf("6- Calcular la multiplicacion (%.2f x B)\n", a);
    printf("7- Calcular el factorial (%.2f!)\n", a);
   }
   else {
    if (elegirA == 'n' && elegirB == 's') {
     printf("operando A: A\n");
     printf("operando B: %.2f\n\n", b);
     printf("1- Ingresar operando(A)\n");
     printf("2- Ingresar operando(B) (%.2f)\n", b);
     printf("3- Calcular la suma (A + %.2f)\n", b);
     printf("4- Calcular la resta (A - %.2f)\n", b);
     printf("5- Calcular la division (A / %.2f)\n", b);
     printf("6- Calcular la multiplicacion (A x %.2f)\n", b);
     printf("7- Calcular el factorial (A)\n");
    }
    else {
     if (elegirA == 's' && elegirB == 's') {
      printf("operando A: %.2f\n",a);
      printf("operando B: %.2f\n\n", b);
      printf("1- Ingresar operando(A) (%.2f)\n", a);
      printf("2- Ingresar operando(B) (%.2f)\n", b);
      printf("3- Calcular la suma (%.2f + %.2f)\n", a, b);
      printf("4- Calcular la resta (%.2f - %.2f)\n", a, b);
      printf("5- Calcular la division (%.2f / %.2f)\n", a, b);
      printf("6- Calcular la multiplicacion (%.2f x %.2f)\n", a, b);
      printf("7- Calcular el factorial (%.2f)\n", a);
     }
    }
   }
  }
  printf("8- Calcular todas las operaciones\n");
  printf("9- Salir\n\n");
  printf("OPCION: ");
  scanf("%d", &opcion);

  //    ****** FIN MENU ******

  switch (opcion)
  {
   case 1: // INGRESO DE NUMERO
    system("cls");
    a=pedirNumero();
    system("cls");
    elegirA = 's';
    break;

   case 2: // INGRESO DE NUMERO
    system("cls");
    b=pedirNumero();
    system("cls");
    elegirB = 's';
    break;

   case 3:	// SUMA
    if (elegirA == 's' && elegirB == 's') {
     system("cls");
     resultado = suma(a,b);
     printf("suma: %.2f", resultado);
    }
    else {
     system("cls");
     printf("primero ingrese operandos");
    }
    break;

   case 4:	// RESTA
    if (elegirA == 's' && elegirB == 's') {
     system("cls");
     resultado = resta(a,b);
     printf("resta: %.2f", resultado);
    }
    else {
     system("cls");
     printf("primero ingrese operandos");
    }
    break;

   case 5:	// DIVISION
    if (elegirA == 's' && elegirB == 's') {
    	if(b!=0){
    		system("cls");
            resultado = dividir(a,b);
             printf("division: %.2f", resultado);
	        	}else{
		        	system("cls");
		        	printf("no se puede dividir por cero");
	            	 }
		    }
       else {
     system("cls");
     printf("primero ingrese operandos");
    }
    break;

   case 6:	// MULTIPLICACION
	if (elegirA == 's' && elegirB == 's') {
     system("cls");
     resultado = multiplicar(a,b);
      printf("multiplicacion: %.2f", resultado);
    }
    else {
     system("cls");
     printf("primero ingrese operandos");
    }
    break;

   case 7:	// FACTORIAL
    if (elegirA == 's') {
     system("cls");
     resultado= factorial(a);
      printf("factorial de %.0f: %.0f ",a,resultado);
    }
    else {
     system("cls");
     printf("primero ingrese operando A");
    }
    break;

   case 8:	//TODAS LAS OPERACIONES
    if (elegirA == 's' && elegirB == 's') {
     system("cls");

     printf("suma(%.2f + %.2f): ",a,b);
     resultado = suma(a,b);
     printf("%.2f\n\n", resultado);

     printf("resta(%.2f - %.2f): ", a, b);
     resultado = resta(a,b);
     printf("%.2f\n\n", resultado);

     printf("division(%.2f / %.2f): ", a, b);
     if(b!=0){
     resultado = dividir(a,b);
     printf("%.2f\n\n", resultado);
	 }else{
	 resultado = printf("el dividendo no puede ser cero \n\n");
	 }

     printf("multiplicacion(%.2f x %.2f): ", a, b);
     resultado = multiplicar(a,b);
     printf("%.2f\n\n", resultado);

     printf("factorial(%.0f): ",a);
     resultado = factorial(a);
      printf("%.0f\n\n", resultado);
    }
    else {
     system("cls");
     printf("primero ingrese operandos\n\n");
    }
    break;

   case 9:	//  SALIR
    system("cls");
    volverMenu = 'n';
    break;
   default:
    system("cls");
    printf("vuelva a ingresar una opcion\n\n");
  }  // ****** FIN SWITCH ******
 }			  // ****** FIN WHILE ******
 return 0;
}

