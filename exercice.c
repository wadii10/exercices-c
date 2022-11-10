#include <stdio.h>
#include <math.h>

void main()
{
    // ecercice 1:
    // int n;
    // scanf("entrer un entier %d", &n);
    // if (n >= 0){
    //     printf("%d est positif", n);
    // }else {
    //     printf("%d est negatif", n);
    // }

    // exercice1
    //  int a;
    //  scanf("entrer une année %d", &a);
    //  if(a%4 == 0){
    //      printf("%d est bisextille", a);
    //  }else {
    //      printf("%d est non bisextille", a);
    //  }

    // exercice 2:
    // int m, a;
    // printf("entre le mois: ");
    // scanf("%d", &m);
    // printf("entrer une anne: ");
    // scanf("%d", &a);

    // if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))
    // {
    //     printf("le mois %d a 31 jours", m);
    // }
    // else if (m == 2)
    // {
    // if (a % 4 == 0)
    // {
    //     printf("le mois %d a 29 jours", m);
    // }
    // else
    // {
    //     printf("le mois %d a 28 jours", m);
    // }
    // }
    // else if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
    // {
    //     printf("le mois %d a 30 jours", m);
    // }
    // else
    // {
    //     printf("%d n'existe pas", m);
    // }

    // or switch

    // switch (m)
    // {
    // case 1:
    // case 3:
    // case 5:
    // case 7:
    // case 8:
    // case 10:
    // case 12:
    //     printf("31");
    //     break;
    // case 4:
    // case 6:
    // case 9:
    // case 11:
    //     printf("30");
    //     break;
    // case 2:
    //     if (a % 4 == 0)
    //     {
    //         printf("le mois %d a 29 jours", m);
    //     }
    //     else
    //     {
    //         printf("le mois %d a 28 jours", m);
    //     }
    //     break;
    // default:
    //     printf("verier le mois");
    // }

    // exercice 3:
    // int j, m, a;
    // printf("entrer le jour: ");
    // scanf("%d", &j);
    // printf("entrer le mois: ");
    // scanf("%d", &m);
    // printf("entrer l'annee: ");
    // scanf("%d", &a);
    // printf("la date est: %d/%d/%d", j, m, a);

    // if ((j==31)&&((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))) {
    //     if (m==12){
    //         j=1;
    //         m=1;
    //         a=a+1;
    //     }else{
    //         j=1;
    //         m=m+1;
    //     }
    // }else if ((j==30)&&((m == 4) || (m == 6) || (m == 9) || (m == 11))){
    //     j=1;
    //     m=m+1;
    // }else if ((j==29)&&(m==2)){
    //     j=1;
    //     m=m+1;
    // }else if ((j==28)&&(m==2)&&(a%4!=0)){
    //     j=1;
    //     m=m+1;
    // }else{
    //     j=1+j;
    // }
    // printf("%d/%d/%d", j, m, a);

    // exercice 4:
    float a, b, c, d, x1, x2;
    printf("entrez a: ");
    scanf("%f", &a);
    printf("entrez b: ");
    scanf("%f", &b);
    printf("entrez c: ");
    scanf("%f", &c);
    d = pow(b, 2) - (4 * a * c);
    if (a == 0)
    {
        x1 = -c / b;
        printf("la solution est: %f", x1);
    }
    else
    {
        if (d > 0)
        {
            x1 = -b+sqrt(d)/2*a;
            x2 = -b-sqrt(d)/2*a;
            printf("la solution 1 est %f /n la solution 2 est %f", x1, x2);
        }
        else if ( d==0){
            x1=-b/(2*a);
            printf("la solution  est %f", x1);
        }else {
            printf("ensemble vide");
        }
    }

    // exercice 5:
    // float a, b, x;
    // printf("donnez a: ");
    // scanf("%f", &a);
    // printf("donnez b: ");
    // scanf("%f", &b);
    // x = -b / a;

    // if (a != 0)
    // {
    //     printf("la solution est: %f", x);
    // }
    // else
    // {

    //     if (b == 0)
    //     {
    //         printf("toute |R");
    //     }
    //     else
    //     {
    //         printf("Ensemble vide");
    //     }
    // }
}