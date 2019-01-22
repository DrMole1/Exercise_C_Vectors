#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED


typedef struct tVecteur{
    int nCoordA;
    int nCoordB;
}tVecteur;

//prototypes
//========================
extern void setVecteur(tVecteur *vecteur);
extern void setScalaire(int *scalaire);
//========================


#endif // VECTEUR_H_INCLUDED
