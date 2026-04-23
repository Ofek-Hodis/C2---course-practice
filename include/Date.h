#ifndef C2___COURSE_PRACTICE_DATE_H
#define C2___COURSE_PRACTICE_DATE_H

/* Definition d'une date dans Date.h */
typedef struct {
    int jour;
    int mois;
    int annee;
}Date_t;
/* Prototypes dans Date.h */
void lireDate(Date_t*);
void afficheDate(Date_t*);
int compareDates(Date_t*, Date_t*);

#endif //C2___COURSE_PRACTICE_DATE_H