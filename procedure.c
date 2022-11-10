#include <stdio.h>
// permuter a et b

void main(){
    // permuter a et b
    int c,d;
    printf("entrer 1er entier: ");
    scanf("%d",&c);
    printf("entrer 2eme entier: ");
    scanf("%d",&d);
    permuter(c, d);
    printf("le 1er entier: %d", c);
    printf("le 2eme entier: %d", d);
};

void permuter(int a, int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
}
