#include <stdio.h>

double operation(double a, double b) {
     printf("Plus operation\n");
     return a + b;
}

int main(int argc, char **argv) {
     double a = 5;
     double b = 3;
     printf("Result of operation (%.2f, %.2f) is: %.2f\n", a, b, operation(a, b));

     return 0;
}
