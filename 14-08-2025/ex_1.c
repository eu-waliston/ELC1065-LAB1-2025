#include <stdio.h>

int main() {

    float nota1;
    float nota2;
    float media;
    printf("DIgite a primeira nota: ");
    scanf("%f", &nota1);
    printf("DIgite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 * nota2) / 2;
    printf("A media das notas e: %.2f\n", media);

}