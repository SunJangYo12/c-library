// gcc main1.c operation.c
#include <stdio.h>

int main(int argc, char **argv) {
     double a = 5;
     double b = 3;
     printf("Result of operation (%.2f, %.2f) is: %.2f\n", a, b, operation(a, b));

     return 0;
}
