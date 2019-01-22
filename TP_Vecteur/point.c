#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"

//implémentation
//========================
//BUT : On set un vecteur en utilisant deux points dans le plan
//ENTREES : Le dit vecteur
//SORTIE : Le dit vecteur modifié par adresse
//========================
extern void setVecteur(tVecteur *vecteur)
{
    int nValTemp =0;
    printf("Saisir la coordonnee X pour le vecteur\n");
    scanf("%d",&nValTemp);
    vecteur->nCoordA = nValTemp;
    printf("Saisir la coordonnee Y pour le vecteur\n");
    scanf("%d",&nValTemp);
    vecteur->nCoordB = nValTemp;
}

//implémentation
//========================
//BUT : On set un scalaire
//ENTREES : Le dit scalaire
//SORTIE : Le dit scalaire modifié par adresse
//========================
extern void setScalaire(int *scalaire)
{
    int nValTemp =0;
    printf("Saisir le scalaire\n");
    scanf("%d",&nValTemp);
    *scalaire = nValTemp;
}
