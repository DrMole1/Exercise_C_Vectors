#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include "vecteur.h"

//prototypes
//========================
extern void addVecteur(const tVecteur vecteur1, const tVecteur vecteur2);
extern void subsVecteur(const tVecteur vecteur1, const tVecteur vecteur2);
extern void scaleVecteur(const tVecteur vecteur1, const int scalaire);
extern int scaleVecteur2(const tVecteur vecteur1, const tVecteur vecteur2);
extern int prodVecteur(const tVecteur vecteur1, const tVecteur vecteur2);
//========================

#endif // FUNCTION_H_INCLUDED
