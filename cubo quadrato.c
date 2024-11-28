

#include <stdio.h>
#include "potenze.h"

int main(void){
    char operazione;
    int valore,risultato;
printf("[Q]quadrato/n");
printf("[C]cubo/n");
scanf("%c"&operazione);
printf("inserisci il valore");
scanf("%d,&valore");
switch(operazione){
    case 'q':
    risultato= quadrato(valore);
    printf("%d*%d=%d/n",valore,valore,risultato);
    break;
    case 'c':
    risutato= cubo(valore);
    printf("%d*%d*%d=%d/n",valore,valore,valore,risultato);
    break;
    default:
    printf("operazione non riconosciuta");
    

}
return=0
}








