#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

#include "complex.h"


int main() {
    ComplexNumber z1 = { 1, 1 };
    ComplexNumber z2 = { 1, -sqrt(3) };
    ComplexNumber z = divide(z1, z2);
    printf("z в алгебраической: %s\n", complexToString(z, Default));
    printf("z в показательной: %s\n", complexToString(z, Exponential));
    printf("z в тригонометрической: %s\n", complexToString(z, Polar));

    ComplexNumber zPow = complexPow(z, -30);
    printf("z в степени -30 в показательной: %s\n", complexToString(zPow, Exponential));
    printf("z в степени -30 в тригонометрической: %s\n", complexToString(zPow, Polar));
    printf("z в степени -30 в алгебраической: %s\n", complexToString(zPow, Default));

    printf("\nw(k), k=0..2 - значения корня степени 3 из z\n");
    ComplexNumber* roots = complexRoot(z, 3);
    for(int i = 0; i < 3; ++i) {
        printf("w(%d) = %s (показ.) = %s (триг.)\n", i, complexToString(roots[i], Exponential), complexToString(roots[i], Polar) );
    }
    
}