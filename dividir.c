
int dividir (dividendo, divisor) {
    int quociente=0;

    if (divisor == 0) {
    
        return 1;
    }

    while (dividendo >= divisor) {
        quociente++;
        dividendo -= divisor; 
    }

    return quociente;
}