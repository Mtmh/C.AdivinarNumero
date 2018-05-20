#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preparaRandom(void)
{
    srand(time(NULL));
}

int main(void)
{
    preparaRandom();

    int numero;
    int numeroAdivinado = 0;
    int numeroParaAdivinar = rand() % 10 + 1;
    int cantidadOportunidades = 0;

    while (!numeroAdivinado){
        if (cantidadOportunidades > 2){
            printf("La cantidad de oportunidades fue superada!!!\n");
            printf("El numero correcto era: %d\n", numeroParaAdivinar);
            return 0;
        }

        printf("Escribe un numero entre 1 y 10:  ");
        scanf("%d", &numero);

        if (numeroParaAdivinar == numero){
            numeroAdivinado = 1;
        }
        ++cantidadOportunidades;
    }
    printf("Excelente!!!\n");
    return 0;
}
