#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"
#include "function.h"



//implémentation
//========================
//BUT : L'utilisateur peut choisir plusieurs opérations sur les vecteurs
//ENTREES : L'environnement
//SORTIE : L'environnement
//========================
int main()
{
    int nChoix=0;
    tVecteur MonVecteur1, MonVecteur2;
    int nScalaire = 0;
    do
    {
        printf(" Tapez 1 pour une addition vectorielle.\n Tapez 2 pour une soustraction vectorielle.\n Tapez 3 pour une multiplication d'un vecteur par un scalaire.\n Tapez 4 pour un produit scalaire de 2 vecteurs.\n Tapez 5 pour un produit vectorielle de 2 vecteurs.\n");
        scanf("%d",&nChoix);
    }while(nChoix<1 || nChoix>5);

    switch(nChoix)
    {
        case 1 :
            printf("Addition vectorielle :\n");
            setVecteur(&MonVecteur1);
            setVecteur(&MonVecteur2);
            addVecteur(MonVecteur1,MonVecteur2);
            break;
        case 2 :
            printf("Soustraction vectorielle :\n");
            setVecteur(&MonVecteur1);
            setVecteur(&MonVecteur2);
            subsVecteur(MonVecteur1,MonVecteur2);
            break;
        case 3 :
            printf("Multiplication vectorielle par scalaire :\n");
            setVecteur(&MonVecteur1);
            setScalaire(&nScalaire);
            scaleVecteur(MonVecteur1,nScalaire);
            break;
        case 4 :
            printf("Produit scalaire 2 vecteurs :\n");
            setVecteur(&MonVecteur1);
            setVecteur(&MonVecteur2);
            printf("Le produit scalaire est de %d",scaleVecteur2(MonVecteur1,MonVecteur2));
            break;
        case 5 :
            printf("Produit vectoriel 2 vecteurs :\n");
            setVecteur(&MonVecteur1);
            setVecteur(&MonVecteur2);
            printf("Le produit vectoriel est de %d",prodVecteur(MonVecteur1,MonVecteur2));
            break;
        default :
            printf("Procédure mauvaise");
            break;
    }



    return 0;
}
