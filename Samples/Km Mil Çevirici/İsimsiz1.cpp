#include <stdio.h>           /* printf, scanf tan�mlar� buradad�r */

#define Kmde_Mil 0.6215      /* D�n��t�rme sabiti                 */

int main(void) {

      double km,    /* girdi - kilometre olarak uzakl�k */

             mil;   /* ��kt� - mil olarak uzakl�k       */

 

      /* Uzakl��� Km olarak al�n: */

      printf("Uzakl��� Km olarak giriniz> ");

      scanf("%lf", &km);

      /* Uzakl��� mile d�n��t�r�n: */

      mil = Kmde_Mil * km;

      /* Mil olarak sonucu g�sterin: */

      printf("Bu mil olarak %f a e�ittir.\n", mil);

      return (0);

}
