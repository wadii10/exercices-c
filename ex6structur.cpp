// exercice:
// etudiant est caracterisé par : nom, numero, 2 notes, moyenne
//*ecrire une fonction pour lire un etudiant (struct Etudiant lireEtudiant())
//*ecrire une procedure pour calculer la moyenne d'un etudiant(les deux notes ont la meme coefficient) (void calculerMoyenne(etudiant e))
//*ecrire une procedure qui permer de trier un tableau d'etudiant dans l'ordre decroissant suivant la moyenne (void triEtudiant(EtudiantClasse[]))
//*ecrire un prog principal qui lit un tableau d'etudiant, calculer leurs moyenne, trier le tableau et afficher les etudiant triées

#include <stdio.h>
struct Etudiant
{
    char nom[30];
    int num;
    float note1, note2, moy;
};

struct Etudiant lireEtudiant()
{
    struct Etudiant e;
    printf("donner le nom Etudiant: ");
    scanf("%s",e.nom);
    printf("donner le numero Etudiant: ");
    scanf("%d",&e.num);
    printf("donner la note 1 Etudiant: ");
    scanf("%f",&e.note1);
    printf("donner la note 2 Etudiant: ");
    scanf("%f",&e.note2);

    return e;
};

void calculMoy (Etudiant &e){
    e.moy = (e.note1+e.note2)/2;
    printf("le moyen est: %f", e.moy);
}

int main()
{
    Etudiant etudiant;
    etudiant = lireEtudiant();
    calculMoy(etudiant);
    return 0;
}