#include <stdio.h>

#include "lib1.h"
#include "lib2.h"

int main()
{
    printf("Hello World App 2\n");
    printf("Result from lib1: %d\n", lib1_test_function());
    printf("Result from lib2: %d\n", lib2_test_function());
}