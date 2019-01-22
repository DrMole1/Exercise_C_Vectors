#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"
#include "function.h"

//impl�mentation
//========================
//BUT : On additionne deux vecteurs
//ENTREES : Les dits vecteurs
//SORTIE : On affiche les coordonn�es de l'addition
//========================
extern void addVecteur(const tVecteur vecteur1, const tVecteur vecteur2)
{
    int nCoordX = 0, nCoordY = 0;
    nCoordX = vecteur1.nCoordA+vecteur2.nCoordA;
    nCoordY = vecteur1.nCoordB+vecteur2.nCoordB;
    printf("Le vecteur est a present de %d %d",nCoordX,nCoordY);
}


//impl�mentation
//========================
//BUT : On soustrait deux vecteurs
//ENTREES : Les dits vecteurs
//SORTIE : On affiche les coordonn�es de la soustraction
//========================
extern void subsVecteur(const tVecteur vecteur1, const tVecteur vecteur2)
{
    int nCoordX = 0, nCoordY = 0;
    nCoordX = vecteur1.nCoordA+vecteur2.nCoordB;
    nCoordY = vecteur1.nCoordB+vecteur2.nCoordA;
    printf("Le vecteur est a present de %d %d",nCoordX,nCoordY);
}


//impl�mentation
//========================
//BUT : On soustrait deux vecteurs
//ENTREES : Les dits vecteurs
//SORTIE : On affiche les coordonn�es de la soustraction
//========================
extern void scaleVecteur(const tVecteur vecteur1, const int scalaire)
{
    int nCoordX = 0, nCoordY = 0;
    nCoordX = vecteur1.nCoordA*scalaire;
    nCoordY = vecteur1.nCoordB*scalaire;
    printf("Le vecteur est a present de %d %d",nCoordX,nCoordY);
}


//impl�mentation
//========================
//BUT : On fait le produit scalaire de 2 vecteurs
//ENTREES : Les dits vecteurs
//SORTIE : On affiche le produit scalaire
//========================
extern int scaleVecteur2(const tVecteur vecteur1, const tVecteur vecteur2)
{
    int nCoordX = 0, nCoordY = 0, nScaleTemp;
    nCoordX = vecteur1.nCoordA+vecteur2.nCoordA;
    nCoordY = vecteur1.nCoordB+vecteur2.nCoordB;
    nScaleTemp = nCoordX + nCoordY;
    return nScaleTemp;
}


//impl�mentation
//========================
//BUT : On fait le produit vectoriel de 2 vecteurs
//ENTREES : Les dits vecteurs
//SORTIE : On affiche le produit scalaire
//========================
extern int prodVecteur(const tVecteur vecteur1, const tVecteur vecteur2)
{
    int nCoordX = 0, nCoordY = 0, nProdTemp;
    nCoordX = vecteur1.nCoordA*vecteur2.nCoordB;
    nCoordY = vecteur1.nCoordB*vecteur2.nCoordA;
    nProdTemp = nCoordX - nCoordY;
    return nProdTemp;
}
