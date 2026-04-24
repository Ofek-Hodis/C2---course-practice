#include <stdio.h>
#include <string.h>
#include "../include/etudiant.h"
#include "../include/date.h"

void lireEtudiant(Etudiant * p_e)
{
    printf("Enter student family name");
    scanf("%s", p_e->nom);
    printf("Enter student name");
    scanf("%s", p_e->prenom);
    printf("Enter student's date of birth");
    lireDate(&p_e->dateNaissance);
    printf("Enter Student number");
    scanf("%ld", &p_e->numEtud);
    printf("Enter Student GPA");
    scanf("%lf", &p_e->moyenne);
}

void afficherEtudiant(Etudiant * p_e)
{
    printf("%s", p_e->nom);
    printf("%s", p_e->prenom);
    afficheDate(&p_e->dateNaissance);
    printf("%ld", p_e->numEtud);
    printf("%lf", p_e->moyenne);
}

int main()
{
    return 0;
}