#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

//Prototipado de funcion
void ord(int Con[]);

//Funcion principal
int main(void){
	int Con[50], i;

	puts("\n\t>> Este programa genera 10 nuemeros aleatorios (entre 1 y 30) <<\n");

	srand(time(NULL)); //semilla para rand
	for (i = 0; i < 10; i++) { //Genera los valores aleatorios y los asigna al arreglo
		Con[i] = rand() % 30 + 1;
		printf("Numero generado: %d \n", Con[i]);
	}

    ord(Con); // llamado a funcion de ordenamiento con metodo de insercion
    system("pause");
}

//Funcion de ordenamiento y localizacion el maximo
void ord(int Con[]){ 
    int i, j, aux;

    for (i = 0; i < 9; i++) // hasta n - 1
    {
        for (j = 0; j < 9; j++)
        {
            if (Con[j] > Con[j+1]) // hasta n - 1
            {
                aux = Con[j];
                Con[j] = Con[j+1];
                Con[j+1] = aux;
            }            
        }        
    }

    for (i = 0; i < 10; i++) { //Genera los valores aleatorios y los asigna al arreglo
        printf("\nordenado: %d", Con[i]);
    }
        printf("\n\n\tEl valor maximo del arreglo es: %d \n\n", Con[9]);
}


