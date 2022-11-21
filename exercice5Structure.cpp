// exercice1:
//  l'iit propose de faire un systeme de gestion de note.
//  *un etudiant est identifier par un num de type int.
//  *un nom de type chaine.
//  *deux notes de type float.

// exercice2: les nombres complexes
//  un nmbre complexe est composé : partie reel et partie imaginaire
//  prog pour : * lire deux nombre complexes. *calculer la somme de deux nmbrs et *afficher le resultat.
#include <stdio.h>
// *exercie1:
// struct Etudiant
// {
//     int num;
//     char nom[100];
//     float note1;
//     float note2;
// };

// *exercice2:
struct complexe
{
    float pR;
    float pIm;
};

int main()
{
    // *exercice2:
    complexe c1;
    complexe c2;

    printf("donner le reel de c1: ");
    scanf("%f", &c1.pR);
    printf("donner le imaginaire de c1: ");
    scanf("%f", &c1.pIm);
    printf("c1 : %f+%f*i \n", c1.pR, c1.pIm);

    printf("donner le reel de c2: ");
    scanf("%f.2", &c2.pR);
    printf("donner le imaginaire de c2: ");
    scanf("%f.2", &c2.pIm);
    printf("c2 : %f+%f*i \n", c1.pR, c1.pIm);

    complexe result;
    result.pR = c1.pR+c2.pR;
    result.pIm= c1.pIm+c2.pIm;
    printf("le rsultat est: %f+%f*i", result.pR, result.pIm);
    return 0;
}