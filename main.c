#include <stdio.h>

/********************définition des variables*********************/
double nombre1=0;
double nombre2=0;
double resultat=0;
char op=0;
/******************proto des fonctions******************************/
void saisienombre1();

void saisienombre1() {
printf("Entrer le premier nombre\n");
scanf("%lf",&nombre1);
}

void saisienombre2() {
    printf("Entrer le deuxième nombre\n");
    scanf("%lf",&nombre2);
}

void choixop() {
printf("1-moins\n");
printf("2-plus\n");
printf("3-multiplier\n");
printf("e-sortie\n");

scanf(" %c",&op);
    switch (op) {
        case '1':
            resultat=nombre1-nombre2;
            break;
        case '2':
            resultat=nombre1+nombre2;
            break;
        case '3':
            resultat=nombre1*nombre2;
            break;
        case '4':
            resultat=0;
            printf("Fin de programme");
            break;

    }
}

void affresultat() {
printf("Le resulat du calcul est %lf\n",resultat);
}


void saisienombre2();
void choixop();
void affresultat();

int main() {
    while(op!='e') {
        saisienombre1();
        saisienombre2();
        choixop();
        affresultat();
    }
    return 0;
}
