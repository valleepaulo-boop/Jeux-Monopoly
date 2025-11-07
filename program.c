#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>


void plateau1(int){
printf("________________________________________________________________________________________________________________________________\n");  
printf("|    Départ     |     Fokker    |     Comac     |     Irkut     |               |   Bombardier  |   Bombardier  |    Embraer    |\n");        
printf("|               |               |               |               |   PENALITE !  |               |               |               |\n");        
printf("|     \\_        |      F100     |      C919     |     MC-21     |               |     Dash 8    |     CRJ-700   |     Kc-390    |\n");        
printf("| \\____\\____    |               |               |               |Votre compagnie|               |               |               |\n");        
printf("|      /_       |               |               |               |est black listé|               |               |               |\n");        
printf("|     /         |               |               |               |               |               |               |               |\n");        
printf("|               |               |               |               |   Vous devez  |               |               |               |\n");        
printf("| Revenu mensuel|               |               |               | passe un tour |               |               |               |\n");        
printf("|  vous gagné:  |    prix:50    |   prix:60     |    prix:70    |      OU       |   prix:100    |    prix:120   |   prix:140    |\n");        
printf("|      200      |               |               |               |    Payez 25   |               |               |               |\n");        
printf("|_______________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|\n");
}void plateau2(int){
printf("________________________________________________________________________________________________________________________________\n");  
printf("|    Audit      |    Embraer    |    Boeing     |    Boeing     |               |     Airbus    |     Airbus    |  Sud-Aviation |\n");        
printf("|               |               |               |               |    BONUS !    |               |               |               |\n");        
printf("|    Danger     |     E-190     |     737-8     |     777-3     |               |      A350     |      A380     |    Concorde   |\n");        
printf("|      _        |               |               |               |Votre compagnie|               |               |               |\n");        
printf("|     / \\       |               |               |               | est écologique|               |               |               |\n");        
printf("|    /___\\      |               |               |               |               |               |               |               |\n");        
printf("|               |               |               |               |   Vous allez  |               |               |               |\n");        
printf("| A cause de la |               |               |               |    empocher:  |               |               |               |\n");        
printf("|  maintenance, |   prix:160    |   prix:200    |    prix:220   |      250      |   prix:250    |    prix:300   |   prix:400    |\n");        
printf("|   payez:200   |               |               |               |               |               |               |               |\n");        
printf("|_______________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|\n");

void pos1(int position){
    position
}
void pos2(){
    
}
int main(){ 
int joueur1p=1000
int joueur2p=1000
printf("Bienvenue au monopoly, veuillez rentrer votre nom\n");
printf("Joueur 1, quel est votre nom : \n");
char joueur1[100];
fgets(joueur1, 100, stdin);

printf("Joueur 2, quel est votre nom :\n");
char joueur2[100];
fgets(joueur2, 100, stdin);

srand(time(NULL)); // 1 seule fois en début de programme
    
int dice1;

dice1 = rand()%6 + 1;
printf("Résultat du lancé de dé %d \n", dice1);

plateau1(1);
plateau2(2);

while (joueur1 || joueur2 ==0 || <0)
{
    position
}


    return 0;
}





