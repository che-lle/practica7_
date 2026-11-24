1   /*Yañez Perez Michelle
2   Ejercicio 2 de clases
3   Comprobar si es falso o verdadero*/
4
5   #include<stdio.h>
6
7   int main()
8   {
9       if (0)
10      {
11          printf("Esta instrucción nunca se ejecuta\n");
12          printf("porque la condición siempre es falsa (0).\n");
13      }
14      if (-38) // El bloque de código de esta estructura if
15      // solo consta de una línea porque los comentarios
16      // no son tomados en cuenta por el compilador.
17      // La condición siempre es verdadera (diferente de 0)
18          printf("Esta instrucción siempre se ejecuta.\n");
19      return 0;
20  }
