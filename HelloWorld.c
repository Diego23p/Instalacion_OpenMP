#include <omp.h>
#include <stdio.h>

/*
int main(){

    omp_set_num_threads(2);
    #pragma omp parallel
    {
        printf("Hola mundo\n");
    }
    return 0;
}
*/

int main(){
    // numero de procesadores
    int p;
    p = omp_get_num_procs();

    //definir numero de hilos de acuerdo a la cantidad de procesadores
    omp_set_num_threads(p);

    //imprimir segun la cantidad de hilos
    #pragma omp parallel
    {
        printf("Hello World!!\n");
    }
     return 0;
}
