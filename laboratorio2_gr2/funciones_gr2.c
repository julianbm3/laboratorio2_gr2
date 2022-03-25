
#include "lib_gr2.h"



void insertion_sort(double *valor_i,uint32_t  cant_i)
{
	int conta_i_1 = 0, conta_i_2 = 1;
	double key = 0;
	/*
		conta_i_1 = i en el seudo código 
		conta_i_2 = j en el seudo código 
	*/
	//printf("%d \n %d \n %d ", conta_i_2, cant_i, conta_i_1);

	for(conta_i_2 = 1 ; cant_i > conta_i_2; conta_i_2++)
	{
		key = *(valor_i + conta_i_2);
		//printf("\n key %f \n", key);
		conta_i_1 = conta_i_2-1;
		//printf("conta_i_1: %d \n", conta_i_1);
		while(conta_i_1+1 > 0 && *(valor_i+conta_i_1) > key)
		{
			*(valor_i+conta_i_1+1) = *(valor_i+conta_i_1);
			//printf("valor_i+conta_i_1: %f \n", *(valor_i+conta_i_1));
			//printf("valor_i+conta_i_1+1: %f \n", *(valor_i+conta_i_1+1));
			conta_i_1 --;
			//printf("conta_i_1: %d \n",conta_i_1);
			//printf("cant_i: %d \n",cant_i);
		}

		*(valor_i+conta_i_1+1) = key;
		//printf("key: %f \n", key);
	}
	orga(valor_i, cant_i);
}

//Función que organiza de mayor a menor los número dentro de un vector 
void bubble_sort(double *valor_b,uint32_t cant_b)
{
	int conta_b_1 = 0, conta_b_2 = 0;
	/*
		conta_b_1 = i en el seudo código 
		conta_b_2 = j en el seudo código 
	*/

	for(conta_b_1 = 0; cant_b-1 >= conta_b_1; conta_b_1++) 
	{
		for(conta_b_2 = cant_b-1; conta_b_2 >= conta_b_1+1 ;conta_b_2 --) 
		{
			if(*(valor_b+conta_b_2) < *(valor_b+conta_b_2-1))
			{
				//printf("\n 111");
				//printf("\n %p\n %p", valor_b+conta_b_2, valor_b+conta_b_2-1);
				//printf("\n 222");
				swap_d((valor_b+conta_b_2), (valor_b+conta_b_2-1));// se cambio el & ----> 
			}
		}
	}
	orga(valor_b, cant_b);
}

//Función que intercambia dos vectores 
void swap_d(double *num1,double *num2)
{
	double temp = *num1;// se quito el * de num1 por incompatibilidad de double con double
	//printf("\n%p \n%p \n%f", num1, num2, temp);
	*num1 = *num2;
	*num2 = temp;// se agrego el * a temp---------->
	//printf("\n%p \n%p", num1, num2);
}

//Función para leer el vector de números 
void orga(double* valor_o, uint32_t cant_o)
{
	int contador_f;
	for(contador_f = 0; contador_f < cant_o; contador_f++)
	{
		printf("\n%f\n", valor_o[contador_f]);
	}
	printf("\n");
}
