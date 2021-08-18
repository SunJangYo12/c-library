/* to static library, banyak object diarchifkan
*
* $ gcc -c operation2.c
*
* $ ar rcs libop.a operation.o
*       atau
* $ ar rcs libop.a operation.o operation2.o
*
*  Manual ar:
*  c: untuk membuat library (create)
*  r: untuk menggantikan (replace)
*  s: untuk membuat indexs
*  t: dan parameter untuk "t" untuk test
*
*  example:
*  $ ar t libop.a
*
*
*  To shared library
*  $ gcc -fPIC -shared operation.c operation2.c -o libop.so
*  $ gcc main3.c -L. -lop
*       atau
*  $ gcc main3.c libop.so
*  $ ./a.out (INI ERROR)
*
*  FIX
*  $ export LD_LIBRARY_PATH=.
*
*/

#include <stdio.h>

double operation2(double a, double b) {
    printf("Minus operation\n");
    return a - b;
}
