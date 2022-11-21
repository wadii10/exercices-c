#include <stdio.h>

// factoriel
// int factoriel(int n)
// {
//     int fact;
//     if (n == 0)
//     {
//         fact = 1;
//     }
//     else
//     {
//         fact = n * factoriel(n - 1);
//     }
//     return n;
// }

// fonction pour calculer la somme des elements d'un tableau
// int sommeDesElts(int t[], int n)
// {
//     int s;
//     if (n == 0)
//     {
//         s = t[n];
//     }
//     else
//     {

//         s = t[n] + sommeDesElts(t, n - 1);
//     }
//     return s;
// }

// fonction pour afficher les element de tableau
void afficher(int t[], int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("%d \t", t[i]);
    }
}

// fonction pour calculer le nmbre d'occurence d'un entier
// int repetion(int t[], int m, int e)
// {
//     int r = 0;
//     for (int i = 0; i < m; i++)
//     {
//         if (t[i] == e)
//         {
//             r += 1;
//         }
//     }
//     return r;
// }

// fonction pour trier un tableau d'entier(tri a bul)
// void tri(int t[], int m)
// {
//     int i, j, aux;
//     i = 0;
//     for (i = 0; i < m - 1; i++)
//     {
//         for (j = 0; j < m - i - 1; j++)
//         {
//             if (t[j] > t[j + 1])
//             {
//                 aux = t[j];
//                 t[j] = t[j + 1];
//                 t[j + 1] = aux;
//             }
//         }
//     }

//     afficher(t, m);
// }

// fonction pour supprimer un elt dans un tableau : void suprimer (int t, int &m)c++
// void suppElt(int t[], int m, int e)
// {
//     int i, j, aux;
//     // int rep = repetion(t, m, e);

//     for (i = 0; i < m; i++)
//     {
//         if (t[i] == e)
//         {
//             for (j = i; j < m-1 ; j++)
//             {
//                 t[j] = t[j + 1];
//             }
//             m--;
//             i--;
//         }
//     }

//     afficher(t, m);
// }

// fonction pour ajouter un elt à la fin de tableau: void addElt (int t, int &m, int e)c++
void addElt(int t[], int m, int e)
{
    t[m]=e;
    m++;
    afficher(t, m);
}
// fonction pour inserer un elt dans un tableau trié: void inserer (int t, int &m)c++

// fonction pour fisionner deux tableaux triés: void fusion (int t[], int n, int j[], int m)
void fusion (int t1[], int n, int t2[], int m, int t3[], int &p) {
    int i, j;
    p=0;
    i=0;
    j=0;
    while((i<n)&&(j<m)){
        if(t1[i]<t2[j]) {
            t3[p]=t1[i];
            i++;
        }else {
            t3[p]=t2[j];
            j++;
        }
        p++;
    }

    for (int k=i; k<n; k++){
        t3[p]=t1[k];
        p++;
    }

    for (int k=j; k<m; k++){
        t3[p]=t2[k];
        p++;
    }
}


int main()
{
    int tab[10], n, elt, somme;

    do
    {
        printf("donner N: ");
        scanf("%d", &n);
    } while ((n > 10) || (n <= 0));

    for (int i = 0; i < n; i++)
    {
        printf("donner un entier: ");
        scanf("%d", &tab[i]);
    }

    // fonction pour afficher les element de tableau
    afficher(tab, n);

    // somme des elements
    // somme = sommeDesElts(tab, n - 1);
    // printf("\n la somme est %d \n", somme);

    // fonction pour trier un tableau d'entier(tri a bul)
    // tri(tab, n);

    // fonction pour supprimer un elt dans un tableau : void suprimer (int t, int &m)c++
    // printf("\n donner un element: ");
    // scanf("%d", &elt);
    // suppElt(tab, n, elt);

    // fonction pour supprimer un elt dans un tableau : void suprimer (int t, int &m)c++
    printf("\n donner un element: ");
    scanf("%d", &elt);
    addElt(tab,  n, elt);
return 0;
}