/* to object code, source tidak terlihat orang
*
*  gcc -c operation.c
*  geting name function:
   $ nm opreation.o
*/

#include <stdio.h>

double operation(double a, double b) {
    printf("Plus operation\n");
    return a + b;
}
