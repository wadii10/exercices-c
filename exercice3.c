#include <stdio.h>

void main()
{
    // fonction pour determiner le minimum dans un tableau
    int tab[10], n, min, elt;

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

    min = minTab(tab, n);
    printf("\n le minimum est %d", min);

    // fonction pour calculer le nmbre d'occurence d'un entier
    printf("\n donner un element: ");
    scanf("%d", &elt);
    int rep = repetion(tab, n, elt);
    printf("\n l'element %d est repete %d fois", elt, rep);

    // fonction pour calculer le nmbre d'occurence d'un entier
    int indMin, indMax, elt2;
    printf("\n l'indice minimum: ");
    scanf("%d", &indMin);
    printf("\n l'indice maximum: ");
    scanf("%d", &indMax);
    printf("\n l'autre element: ");
    scanf("%d", &elt2);

    int e = existance(tab, elt2, indMin, indMax);
    if (e == 1)
    {
        printf("l'element %d exist", e);
    }
    else
    {
        printf("l'element %d n'exist pas", e);
    }
}

// fonction pour determiner le minimum dans un tableau
int minTab(int t[], int m)
{
    int min = t[0];
    for (int i = 1; i < m; i++)
    {
        if (t[i] < min)
        {
            min = t[i];
        }
    }
    return min;
}

// fonction pour afficher les element de tableau
void afficher(int t[], int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("%d \t", t[i]);
    }
}

// fonction pour calculer le nmbre d'occurence d'un entier
int repetion(int t[], int m, int e)
{
    int r = 0;
    for (int i = 0; i < m; i++)
    {
        if (t[i] == e)
        {
            r += 1;
        }
    }
    return r;
}

// fonction pour chercher un element entre deux elements
int existance(int t[], int e, int min, int max)
{
    int exist = 0;
    int i = min;
    while ((i <= max))
    {
        if (t[i] == e)
        {
            exist = 1;
        }
        i++;
    }
    return exist;
}

// fonction pour chaque element calculer le nbr d'occurence
