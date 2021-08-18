/*
*  gcc main3.c operation.o operation2.o
*  gcc main3.c -lop (ini error)
*
*  untuk melihat default path library
*  $ gcc -v -Wl,verbose 2>&1|grep LIBRARY
*
*
*  FIX:
*  pindahkan libop.a kesalahsatu directory tersebut atau
*  $ gcc main3.c -L. -lop
*  $ gcc main3.c libop.a
*
*
*/
#include <stdio.h>
#include "operation.h" // INI YG DITAMBAHKAN

// ini tidak diperlukan karena sudah diinclude dari operation.h
// double operation(double a, double b);

int main(int argc, char **argv) {
     double a = 5;
     double b = 3;
     printf("Result of operation (%.2f, %.2f) is: %.2f\n", a, b, operation(a, b));
     printf("Result of operation (%.2f, %.2f) is: %.2f\n", a, b, operation2(a, b));

     return 0;
}
