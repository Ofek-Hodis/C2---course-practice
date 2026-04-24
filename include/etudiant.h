#ifndef C2___COURSE_PRACTICE_ETUDIANT_H
#define C2___COURSE_PRACTICE_ETUDIANT_H
#include "date.h"


/* Definition d'un etudiant dans Etudiant.h*/
typedef struct {
    char nom[30];
    char prenom[30];
    Date dateNaissance;
    long numEtud;
    double moyenne;
}Etudiant;

/* Prototypes dans Etudiant.h */
void lireEtudiant(Etudiant*);
void afficheEtudiant(Etudiant*);


#endif //C2___COURSE_PRACTICE_ETUDIANT_H