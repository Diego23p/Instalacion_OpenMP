# Instalacion de OpenMP

1. Se necesita instalar un IDE como [CodeBlocks](http://www.codeblocks.org/downloads).
2. También es necesario descargar [MinGW](https://sourceforge.net/projects/mingw/files) el cual contiene DLL necesarias para compilar y ejecutar el programa.

# Compilación y Ejecución

3. Debido a que aún no se tienen ni los instaladores, ni las librerías OMP y GCC necesarias para ejecutar programación paralela:
    - En el ```Installation Manager``` de MinGW, se seleccionan todos los SetUps básicos.
    - Aplicar los cambios: ```Installation > Apply Changes > Apply```.
4. Luego de haber instalado estas librerías, se vincularán en CodeBlocks: 
    - Seleccionar ```Settings >  Compiler > Other compiler options``` y escribir ```-fopenmp```.
    - Seleccionar ```Settings >  Compiler > Linker Settings``` y vincular la librería ```libgomp-1.dll``` de MinGW que permitirá ejecutar los archivos con OMP.
- Ahora es posible importar la librería omp ```#include <omp.h>```, y usarla en el desarrollo del programa HelloWorld.c

- Al realizar cambios en el archivo, se debe seleccionar ```Build and run``` que posteriormente mostrará los resultados en una consola.
- ```omp_get_num_procs()``` permite conocer el número de núcleos de su computador.
- ```omp_set_num_threads(n)``` permite definir el número de hilos a usar en el programa.
- ```#pragma omp parallel``` permite definir funcionamiento paralelo de dichos hilos.