/*
	Autores: Julian Ballesteros 
		 Sebastian Garavito 
	Fecha: 10/03/22
	Verción: 1.0.0
*/

#include "lib_gr2.h"
#include "lib1.h"
# define LEN 6
 

//Función principal 
void main (int argc, char *argv[])


{
	
	double *resul_num;
	unsigned int size=9000;	
	clock_t tiempo_inicio, tiempo_fin;
	double tiempo_usado = 0;
	double *dir_D;
	double valores[LEN] = {-5.2,2.4,4.5,-6.1,1.9,3.8};
	orga(valores, LEN);
	double a = 0, b = 0;










if(argc !=3)

		{
		printf("Error de cantidad de argumentos,porfavor inserte 2 argumentos o valores validos.\n\n");

}

	 else
{
if (argv[1][0] == '1') //no sirvió la validación con puntero *(argv+1)

	{

tiempo_inicio = clock();
/*tiempo_usado = (double)( tiempo_inicio) / CLOCKS_PER_SEC;
printf ("El tiempo de ejecucion inicial de la funcion insertion_sort  es: %f segundos\n\n", tiempo_usado);*/


		insertion_sort(valores,LEN);


tiempo_fin = clock();

/*tiempo_usado = (double)( tiempo_fin) / CLOCKS_PER_SEC;
printf ("El tiempo de ejecucion final de la funcion insertion_sort  es: %f segundos\n\n", tiempo_usado);*/




	tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;
		printf ("El tiempo de ejecucion de la funcion insertion_sort es: %f segundos\n\n", tiempo_usado);
	}


 else  if(argv[1][0] == '2') //no sirvió la validación con puntero *(argv+1)




	{
tiempo_inicio = clock();
/*tiempo_usado = (double)( tiempo_inicio) / CLOCKS_PER_SEC;
printf ("El tiempo de ejecucion inicial de la funcion insertion_sort  es: %f segundos\n\n", tiempo_usado);*/


		bubble_sort(valores,LEN);


tiempo_fin = clock();
/*tiempo_usado = (double)( tiempo_fin) / CLOCKS_PER_SEC;
printf ("El tiempo de ejecucion final de la funcion insertion_sort  es: %f segundos\n\n", tiempo_usado);*/




tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;
		printf ("El tiempo de ejecucion de la funcion bubble_sort programa es: %f segundos\n\n ", tiempo_usado);
//printf("1\n\n");
	}

tiempo_inicio = clock();

//if(argv[2]= *f 

//printf("%p\n",argv[2]);

*dir_D = *read_file_to_buffer (argv[2], &size);
tiempo_fin = clock();
	
tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;
		printf ("El tiempo de ejecucion de la funcion bubble_sort programa es: %f segundos\n\n ", tiempo_usado);


}


}





// *resul_num=*write_dArray_to_file ( %arr, &size,  &argv[3][0]);
	
	


	





		




