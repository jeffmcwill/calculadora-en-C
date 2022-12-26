#include <stdio.h>
#include <conio.h>
void suma();
void resta();
void multiplicacion();
void division();

//Calculadora hecha en C. 26/12/12
//subido por si a alguien le sirve.

int main()
{
	int user;
	
	do{
		printf("--------------- \n");
		printf("Calculadora V1 \n");
		printf("--------------- \n");
		printf("1. Suma.\n");
		printf("2. Resta.\n");
		printf("3. Multiplicacion.\n");
		printf("4. Division.\n");
		printf("--------------- \n");
		printf("5. Salir.\n");
		
		printf("> ");
		fflush(stdin);
		scanf("%i",&user);
		
		switch(user)
		{
			case 1 : printf("Eligiendo suma...\n"),suma();
				break;
			case 2 : printf("Eligiendo resta...\n"),resta();
				break;
			case 3 : printf("Eligiendo multiplicacion...\n"),multiplicacion();
				break;
			case 4 : printf("Eligiendo division...\n"),division();
				break;
			case 5 : printf("Saliendo.\n");
				break;
			default : printf("Error: letra o numero no soportado por el programa...\n");
		}	
	}while(user != 5);
	
	
	
	system("pause");
	return 0;
}

void suma()
{
	int n1,n2,res;
	printf("Dime el primer numero: ");
	scanf("%i",&n1);
	
	printf("Dime el segundo numero: ");
	scanf("%i",&n2);
	
	res = n1 + n2;
	
	printf("La suma de %i y %i es: %i.\n",n1,n2,res);
	
}

void resta()
{
	int n1,n2,res;
	
	printf("Dime el primer numero a restar: ");
	scanf("%i",&n1);
	
	printf("Dime el segundo numero a restar: ");
	scanf("%i",&n2);
	
	res = n1 - n2;
	
	printf("La resta de %i y %i es: %i.\n",n1,n2,res);
}

void multiplicacion()
{
	int n1,n2,res;
	printf("Dime el primer numero a multiplicar: ");
	scanf("%i",&n1);
	
	printf("Dime el segundo numero a multiplicar: ");
	scanf("%i",&n2);
	
	res = n1 * n2;
	
	printf("La multiplicacion de %i y %i es: %i.\n",n1,n2,res);
}

void division()
{
	int n1,n2,res;
	printf("Dime el primer numero a division: ");
	scanf("%i",&n1);
	
	printf("Dime el segundo numero a division: ");
	scanf("%i",&n2);
	
	res = n1 / n2;
	
	printf("La division entre %i y %i es: %i.\n",n1,n2,res);
	
}
