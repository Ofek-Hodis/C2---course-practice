#include <stdio.h>
#include "../include/date.h"


void lireDate(Date* p_d)
{
    scanf("%d/%d/%d", &p_d->jour, &p_d->mois, &p_d->annee);
}

void afficheDate(Date* p_d) //It's better to tale a pointer because we only copy one value
{
    printf("%d/%d/%d", p_d->jour, p_d->mois, p_d->annee);
}

int compare_date(Date* p_d1, Date* p_d2)
{
    if (p_d1->annee > p_d2->annee) return 1;
    if (p_d1->annee < p_d2->annee) return -1;

    if (p_d1->mois > p_d2->mois) return 1;
    if (p_d1->mois < p_d2->mois) return -1;

    if (p_d1->jour > p_d2->jour) return 1;
    if (p_d1->jour < p_d2->jour) return -1;
    
    return 0;
}

int main()
{
    return 0;
}