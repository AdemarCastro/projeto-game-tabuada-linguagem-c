/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS - 2022.01

Exercício 06 - Unidade 3 - Criar uma tabuada utilizando a função void e o ponteiro.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

// Declarações

void tabuada (int valor, char operador, int ponteiro, int y, int score, char nome[10]);

// Algoritmo

void tabuada (int valor, char operador, int ponteiro, int y, int score, char nome[10]){
    
 
    int resultado, i, operacao, vida, score_final;
    float resposta;


    while (vida != 0){
        
        operacao = 1 + (rand() % 4);
                
        switch (operacao){
                    
            case 1: 
                
                printf ("\n✇ Responda a pergunta a seguir:\n");
                
                srand(time(NULL)); // Serve para randomizar sempre que o programa inicializa, para não repetir as mesmas variáveis
            
                valor = 1 + (rand() % 10); // Comando que randomiza o resultado da variável em questão
                i = 1 + (rand() % 10);
                
                resultado = i + valor;
                
                printf ("\n%d + %d = ", i, valor);
                scanf ("%f", &resposta);
                
                if (resposta == resultado){
                    
                    printf ("\n✔ Parabéns! Sua resposta foi a CORRETA.\n");
                    
                    score = score + 100;
                    score_final = score;
                    
                } else {
                    
                    ponteiro = ponteiro - 1;
                    
                    score = score + 0;
                    score_final = score;
                    
                    vida = ponteiro;
                 
                    printf ("\n✘ Resposta INCORRETA!!! Você perdeu 1 VIDA, agora está com %d VIDA(S).\n", vida);
                    
                }
            
            break;
            
            case 2:
                
                printf ("\n✇ Responda a pergunta a seguir:\n");
                
                srand(time(NULL));
            
                valor = 1 + (rand() % 10);
                i = 1 + (rand() % 10);
                
                resultado = i - valor;
                
                printf ("\n%d - %d = ", i, valor);
                scanf ("%f", &resposta);
                
                if (resposta == resultado){
                    
                    printf ("\n✔ Parabéns! Sua resposta foi a CORRETA.\n");
                    
                    score = score + 100;
                    score_final = score;
                    
                } else {
                    
                    ponteiro = ponteiro - 1;
                    
                    score = score + 0;
                    score_final = score;                    
                    
                    vida = ponteiro;
                 
                    printf ("\n✘ Resposta INCORRETA!!! Você perdeu 1 VIDA, agora está com %d VIDA(S).\n", vida);
                    
                }
            
            break;
            
            case 3:
                
                printf ("\n✇ Responda a pergunta a seguir:\n");
                
                srand(time(NULL));
            
                valor = 1 + (rand() % 10);
                i = 1 + (rand() % 10);
                
                resultado = i * valor;
                
                printf ("\n%d X %d = ", i, valor);
                scanf ("%f", &resposta);
                
                if (resposta == resultado){
                    
                    printf ("\n✔ Parabéns! Sua resposta foi a CORRETA.\n");
                    
                    score = score + 100;
                    
                    score_final = score;
                    
                } else {
                    
                    ponteiro = ponteiro - 1;
                    
                    score = score + 0;
                    score_final = score;
                    
                    vida = ponteiro;
                 
                    printf ("\n✘ Resposta INCORRETA!!! Você perdeu 1 VIDA, agora está com %d VIDA(S).\n", vida);
                    
                }
            
            break;
            
            case 4:
                
                srand(time(NULL));
                
                while (y != 1){
                    
                    valor = 1 + (rand() % 10);
                    i = 1 + (rand() % 100);
                        
                    if (i % valor == 0){   
                        
                        printf ("\n✇ Responda a pergunta a seguir:\n");
                        
                        resultado = i / valor;
                        
                        printf ("\n%d / %d = ", i, valor);
                        scanf ("%f", &resposta);
                        
                        if (resposta == resultado){
                            
                            printf ("\n✔ Parabéns! Sua resposta foi a CORRETA.\n");
                            
                            score = score + 100;
                            score_final = score;
                            
                            y = 1;
                            
                            
                        } else {
                            
                            ponteiro = ponteiro - 1;
                            
                            score = score + 0;
                            score_final = score;
                            
                            vida = ponteiro;
                         
                            printf ("\n✘ Resposta INCORRETA!!! Você perdeu 1 VIDA, agora está com %d VIDA(S).\n", vida);
                            
                            y = 1;
                            
                        }    
                        
                    } else { // Serve para resetar a operação While sempre que o resto da divisão das variáveis for diferente de 0
                        
                    y = 0;    
                        
                    }
                    
                }
                
            break;
            
        }
        
        if (vida == 0){
        
        printf ("\n\n㋡ SCORE do(a) %s, parabéns!: %d PONTOS", nome, score_final);
     
        } 
        
    }

}
    
int main(void){
    
    // Variáveis do Algoritmo
    
    int valor, dificuldade, menu;
    int operador, ponteiro;
    char nome[10], nada;
    
    // Interface do projeto
    
    printf ("----------------------------------BEM-VINDO AO TABUADA10----------------------------------\n\n");
    
    
    printf ("┈┈┏━╮╭━┓┈╭━━━━╮\n┈┈┃┏┗┛┓┃╭┫ⓞⓘⓝⓚ┃\n┈┈╰┓▋▋┏╯╯╰━━━━╯\n┈╭━┻╮╲┗━━━━╮╭╮┈\n┈┃▎▎┃╲╲╲╲╲╲┣━╯┈\n┈╰━┳┻▅╯╲╲╲╲┃┈┈┈\n┈┈┈╰━┳┓┏┳┓┏╯┈┈┈\n┈┈┈┈┈┗┻┛┗┻┛┈┈┈┈\n\n\n");
    printf ("Qual o seu nome Jogador(a)? Responda aqui: ");
    scanf ("%s", &nome[0]);
    
    printf ("\n◉◡◉✧ Olá, %s. Espero que goste do novo jogo TABUADA10.\n", nome);
    
    
    printf ("\nIMPORTANTE! *REGRAS*\n\n"); 
    printf ("- O jogo funciona da seguinte forma.\n"); 
    printf ("- Você terá de responder perguntas de SOMA, SUBTRAÇÃO, MULTIPLICAÇÃO, DIVISÃO.\n");
    printf ("- Você receberá uma quantidade de VIDAS de acordo com a dificuldade escolhida.\n");
    printf ("- No modo FÁCIL = 4 VIDAS; NORMAL = 3 VIDAS; DIFÍCIL = 2 VIDAS; GOD MOD = 1 VIDA.\n");
    printf ("- Além disso, o jogador perderá 1 VIDA sempre que cometer um erro ao responder.\n");
    printf ("- Ao termino do jogo será determinado um SCORE com base no número de acertos do jogador.\n");
    printf ("\n*** 1 - FÁCIL; 2 - NORMAL; 3 - DIFÍCIL; 4 - GOD MOD; 5 - SAIR DO JOGO. *** \n\n");
    printf ("Digite um número de 1 a 5 para acessar as opções acima: ");
    scanf ("%d", &menu);
   
    switch (menu){
        
        case 1: // FÁCIL
            
            ponteiro = 5;
            
            tabuada (valor, operador, ponteiro, 0, 0, nome);
        
        break;
        
        case 2: // NORMAL
            
            ponteiro = 3;
            
            tabuada (valor, operador, ponteiro, 0, 0, nome);
        
        break;
        
        case 3: // DIFÍCIL
            
            ponteiro = 2;
            
            tabuada (valor, operador, ponteiro, 0, 0, nome);
        
        break;
        
        case 4: // GOD MOD
            
            ponteiro = 1;
            
            tabuada (valor, operador, ponteiro, 0, 0, nome);
        
        break;
        
        case 5: // SAIR DO JOGO
            
            printf ("\nVocê saiu do jogo, até a próxima %s.", nome);
            
        break;
        
        default: 
        
            printf ("\nTente de novo %s.", nome);
        
        break;
        
    }
    
    return 0;
}