#include <stdio.h>
float c2f(float celcius);
float c2f(float celcius){
    return (celcius*9 / 5) + 32;
}

int main() {
 float c = 45;
    printf("Celcius to fahrenheit of %f is %f\n", c, c2f(c) );
 return 0 ;
 }
