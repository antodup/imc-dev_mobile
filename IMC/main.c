//
//  main.c
//  IMC
//
//  Created by Anthony  Dupré on 01/02/2019.
//  Copyright © 2019 Anthony  Dupré. All rights reserved.
//

#include <stdio.h>
// poid / taille * taille
int calculIMC (int *poid, double *taille);
void comparatorIMC (double imc);

int main(int argc, const char * argv[]) {
    int weight = 0;
    double height = 0;
    
    printf("Entrer votre poid : ");
    scanf("%d", &weight);
    printf("Entrer votre taille en m : ");
    scanf("%lf", &height);
    
    double imc = calculIMC(&weight, &height);
    comparatorIMC(imc);
    return 0;
}

int calculIMC (int *poid, double *taille) {
    //calcul taille
    *taille = *taille * *taille;

    float resultIMC = *poid / *taille;
    
    printf("L'imc est de %f", resultIMC);
    return resultIMC;
}

void comparatorIMC (double imc) {
    if (imc < 16){
        printf("Anorexie ou dénutrition");
    }
    else if(imc < 16.5 && imc < 18.5) {
        printf("Maigreur");
    }
    else if(imc > 18.5 && imc < 25) {
        printf("Corpulence normale");
    }
    else if(imc > 25 && imc < 30) {
        printf("Surpoids");
    }
    else if(imc > 30 && imc < 35) {
        printf("Obésité modérée (Classe 1)");
    }
    else if(imc > 35 && imc < 40) {
        printf("Obésité élevé (Classe 2)");
    }
    else if(imc >= 40) {
        printf("Obésite morbide ou massive");
    }
}
