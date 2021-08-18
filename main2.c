// gcc main2.c operation.c
// gcc main2.c operation.o
#include <stdio.h>

// INI YANG DITAMBAHKAN
double operation(double a, double b);

int main(int argc, char **argv) {
     double a = 5;
     double b = 3;
     printf("Result of operation (%.2f, %.2f) is: %.2f\n", a, b, operation(a, b));

     return 0;
}
