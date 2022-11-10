#include <stdio.h>
void main()
{
    // la somme
    //  int s, n, i;
    //  printf("donner un entier ");
    //  scanf("%d", &n);
    //  s = 0;
    //  for (i = 1; i <= n; i++)
    //  {
    //      s = s + i;
    //  }
    //  printf("la somme est %d", s);

    // ecrire un prog pour calculer la suit i=1 jusqu'a n 2i
    //  int s, n, i;
    //  printf("donner un entier ");
    //  scanf("%d",&n);
    //  s=0;
    //  for (i=1; i<=n; i++) {
    //      s= s+ 2*i;
    //  }
    //  printf("la somme est %d", s);

    // ecrire un prog pour tester le nombre est premier
    // int s, n, i;
    // printf("donner un entier ");
    // scanf("%d", &n);
    // s = 0;
    // for (i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         s += 1;
    //     }
    // }
    // if (s != 0)
    // {
    //     printf("%d n'est pas un nombre premier", n);
    // }
    // else
    // {
    //     printf("%d est un nombre premier", n);
    // }

    // ecrire un prog pour afficher les nombres premier entre 2 et 1000
    // int i, j, s;
    // for (i = 2; i <= 1000; i++)
    // {
    //     s = 0;
    //     for (j = 2; j < i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             s += 1;
    //         }
    //     }
    //     if (s == 0)
    //     {
    //         printf("%d est un nombre premier\n", i);
    //     }
    // }

    // correction avec while
    //  int estPremier=1, i=2, n;
    //  while ((estPremier!=0)&&(i<n/2)){
    //      if (n%i==0){
    //          estPremier=0;
    //      }
    //      i++;
    //  }

    // ecrire un prog pour tester si J est diviseur de I sans utiliser le mod.
    // int i, j, d;
    // printf("donner I: ");
    // scanf("%d", &i);
    // printf("donner J: ");
    // scanf("%d", &j);
    // d = i;
    // while (d > 0)
    // {
    //     d -= j;
    // }

    // if (d == 0)
    // {
    //     printf(" J est un diviseur de I");
    // }
    // else
    // {
    //     printf("J n'est pas diviseur de I");
    // }

    // ecrire un prog pour convertir un nembre en minutes en un nembre en heure et  min sans div et mod
    // int nbh, h;
    // printf("donner nombre en minutes: ");
    // scanf("%d", &nbh);
    // h = 0;
    // while (nbh >= 60)
    // {
    //     nbh -= 60;
    //     h += 1;
    // }
    // printf("%d heures %d min", h, nbh);

    // prog pur saisir un entier strictement positif et de afficher, ce prog permet de lire N entiers et il calcule et affiche le plus grand et le plus petit a partir de N
    // int n, x, min, max;
    // do
    // {
    //     printf("donner un entier ");
    //     scanf("%d", &n);
    // } while (n <= 0);

    // min = 0;
    // max = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("donner un entier ");
    //     scanf("%d", &x);
    //     if(i == 1){
    //     min=x;
    //     max=x;
    //     }
    //     if(x>max){
    //         max=x;
    //     }
    //     if(x<min){
    //         min=x;
    //     }
    // };

    // printf("le min est: %d \n le max est: %d", min, max);

    // les caractere d'echappement:
    // *break
    // *continue
    // *go to

    // ecrire un prog pour lire une serie d'entiers (n entiers)et de faire :
    //*chercher le min et le max
    //*afficher le serie des entiers

    // int n, tab[10];
    // do {
    //     printf("donner N: ");
    //     scanf("%d",&n);
    // } while((n>10)||(n<=0));

    // for(int i=0; i<n; i++){
    //     printf("donner un entier");
    //     scanf("%d",&tab[i]);
    // }

    // for(int i=0; i<n; i++){
    //     printf("%d \t", tab[i]);
    // }

    // xercice: ecrire un prog pour saisir un vecteur de taille N et de calculer:
    //* le min et le max
    //* le nbre d'elelement qui sont > seuil (seuil: variable saisie par l'utilisateur)
    //* decomposer le tableau en deux tableaux la premiere: tab positif et la la deuxieme: tab negatif

    int n, tab[10], tabPos[10], tabNeg[10], min, max, s, nbre;
    do
    {
        printf("donner N: ");
        scanf("%d", &n);
    } while ((n > 10) || (n <= 0));

    for (int i = 0; i < n; i++)
    {
        printf("donner un entier: ");
        scanf("%d", &tab[i]);
    };

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", tab[i]);
    }

    min = tab[0];
    max = tab[0];
    for (int i = 0; i < n; i++)
    {

        if (tab[i] > max)
        {
            max = tab[i];
        }
        if (tab[i] < min)
        {
            min = tab[i];
        }
    };

    printf(" \n le min est: %d \n le max est: %d \n", min, max);

    printf("donner le seuil: ");
    scanf("%d", &s);
    nbre = 0;
    for (int i; i < n; i++)
    {
        if (tab[i] > s)
        {
            nbre += 1;
        }
    }

    printf("Nombre d'element est: %d\n", nbre);
    int j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {

        if (tab[i] > 0)
        {
            tabPos[j] = tab[i];
            j++;
        }

        else
        {
            tabNeg[k] = tab[i];
            k++;
        }
    }

    printf("\n positive ");
    for (int i = 0; i < j; i++)
    {
        printf("%d \t", tabPos[i]);
    };
    printf("\n negative ");
    for (int i = 0; i < k; i++)
    {
        printf("%d \t", tabNeg[i]);
    };

    // saisir un tablau pour
    //* chercher l'exixtance d'un element A dans le tableau
    //* donner l'index de premeier element A trouvé dans le tableau (A entré au clavier)
    //* ^pour chaque element du tableau, donner le nombre de repition dans le tableau
}