/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double esercizio1();
    void esercizio2();
    int esercizio3();
    int scelta;
    
    do{
    printf("inserisci quale esercizo vuoi svolgere:\n");
    printf("\t- esercizio1 (1)\n\t- esercizio2 (2)\n\t- esercizio3 (3)\n\t- esci (0)\n");
    scanf("%d", &scelta);
    
    if(scelta == 1){
        esercizio1();
    }else if(scelta == 2){
        esercizio2();
    }else if(scelta == 3){
        esercizio3();
    }else{
        printf("hai inserito un valore inesistente! error\nRIPROVA\n\n");
    }
    
    }while(scelta != 0);
    return 0;
}

double esercizio1(){
    double num1, num2;
    double o;
    char op;
    
    printf("scrivi l'operazione che vuoi fare:\n");
    scanf("%lf%c%lf", &num1, &op, &num2);
    
    switch(op){
        case '+': o = num1 + num2;
            break;
        case '-': o = num1 - num2;
            break;
        case '*': o = num1 * num2;
            break;
        case '/': o = num1 / num2;
            break;
    }
    
    printf("il risultato è %f", o);
    
    return o;
}

void esercizio2(){
    int num;
    
    do{
        printf("inserisci un numero:\n");
        scanf("%d", &num);
    }while(num >= 10);
    
    switch(num){
        case 0: printf("zero"); break;
        case 1: printf("uno"); break;
        case 2: printf("due"); break;
        case 3: printf("tre"); break;
        case 4: printf("quattro"); break;
        case 5: printf("cinque"); break;
        case 6: printf("sei"); break;
        case 7: printf("sette"); break;
        case 8: printf("otto"); break;
        case 9: printf("nove"); break;
    }
    
    
    
    
    
}

int esercizio3(){
    int s = 0, n;
    int sommaG;

    printf("inserisci il numero:\n");
    scanf("%d", &n);
    
    sommaG = (n*(n+1))/2;
    printf("la somma dei primi numeri interi con Gauss: %d\n", sommaG);
    
    for(int i = 0; i <= n;){
        s += i++;
    }
    printf("la somma dei primi numeri naturali è %d\n", s);
}