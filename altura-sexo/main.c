//
//  main.c
//  altura-sexo
//
//  Created by Guilherme Dinardi on 20/03/19.
//  Copyright © 2019 Guilherme Dinardi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // Declaração de Variaveis
    float altura, peso, pesoIdeal;
    char sexo;
    
    // Entrada de Dados
    printf("\n Informe seu sexo F ou M: ");
    scanf("%c", &sexo);
    
    printf("\n Informe sua altura: ");
    scanf("%f", &altura);
    
    printf("\n Informe seu peso: ");
    scanf("%f", &peso);
    
    // Declaração de Condicionais e Saida de Dados
    if (sexo=='M') {
        // Calculo do Peso Masculino
        pesoIdeal = ((72.7 * altura) - 58);
        printf("\n Seu sexo é masculino, portanto seu peso ideal é: %.2f", pesoIdeal);
    } else{
        if (sexo=='F') {
            // Calculo do Peso Feminino
            pesoIdeal = ((62.1 * altura) - 44.7);
            printf("\n Seu sexo é feminino, portanto seu peso ideal é: %.2f", pesoIdeal);
        }
    }
    
    
    printf("\n");
    return 0;
}
