#include <assert.h>
#include "multiplicar.c"
#include "dividir.c"

int main(){

    assert(multiplicar(2, 2) == 4);
    assert(multiplicar(64,32) == 2048);

    assert(dividir(2, 2) == 1);
    assert(dividir(10, 5) == 2);

    return 0;
}