/* $ gcc -fPIC -shared operation-mult.c -o libop.so
*  $ cd ..
*  $ gcc main2.c libop.so (NOTE: this lib is old)
*  $ LD_LIBRARY_PATH=./op-mult ./a.out (this use op-mult/libop.so)
*
*/
#include <stdio.h>

double operation(double a, double b) {
    printf("Multiply operation\n");
    return a * b;
}
