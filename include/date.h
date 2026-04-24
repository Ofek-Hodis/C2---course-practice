#ifndef C2___COURSE_PRACTICE_DATE_H
#define C2___COURSE_PRACTICE_DATE_H

/* Definition d'une date dans Date.h */
typedef struct {
    int jour;
    int mois;
    int annee;
}Date;

/* Prototypes dans Date.h */
void lireDate(Date *);
void afficheDate(Date *);
int compareDates(Date *, Date *);

#endif //C2___COURSE_PRACTICE_DATE_H