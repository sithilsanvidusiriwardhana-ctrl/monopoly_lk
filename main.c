
#include "type.h"
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("MONOPOLY-LK Simulation\n\n");
    printf("Player 1 : Aggressive Investore \n");
    printf("Player 2 : Conservative Banker\n");
    printf("Player 3 : Risk Taker\n");
    printf("Player 4 : Oppertunistic Treader \n\n");
    printf("Each player begin with LKR 30000\n");
    srand(time(NULL));
    game();
    return 0;

    
}