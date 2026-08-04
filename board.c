#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "type.h"

int  board(int i){
     boards boad[40] = { 
        {Start,Go },
        {Property,brown},
        { Event ,    },
        { Property , brown},
        { Tax ,    },
        { Railway , },
        { Property , Darkblue},
        { Event },
        { Property , Darkblue},
        { Property , Darkblue},
        { Special},
        { Property , Pink},
        { Utility , },
        { Property , Pink },
        { Property , Pink},
        { Railway },
        { Property ,Orange},
        {Insurance , },
        { Property , Orange},
        { Property , Orange},
        {Special},
        { Property , Red},
        { Event},
        { Property ,Red},
        {Property , Red},
        { Railway },
        { Property, Yellow},
        {Property ,Yellow },
        { Utility},
        { Property , Yellow},
        { Special},
        { Property , Green},
        { Property , Green},
        { Insurance},
        { Property , Green},
        { Railway},
        { Event},
        {Property , Darkblue},
        {Bank},
        { Property , Darkblue}
};
return boad[i].col1;

}

/*void  game_turn( struct player *players){
     int old_position;
      for (int turn = 0; turn < 4; turn++){
           struct player *p = &players[turn];
           int add = 0;
           add = die_troll();
           p -> current_position += add;
           if ( p -> current_position>= 40){
                  p ->current_position = players[turn].current_position - 40;
                  p -> money += 2000;
                  p -> player_round++;
                  
                  printf("\ndye trolls %d\n", add);
                   old_position = 40 + ( players[turn].current_position - add);
                   printf("%s move from squere %d to squere %d\n", players[turn].player_name,old_position, players[turn].current_position);
                  printf("\n%s passing go " , p -> player_name);
                  printf(" \ncollected LKR 2000\n");
                  printf("current balance %d\n", p -> money);
           }
        else{
      printf("\ndye trolls %d\n", add);
     old_position = players[turn].current_position - add;
      printf("%s move from squere %d to squere %d\n", players[turn].player_name,old_position, players[turn].current_position);
      }
} 
}*/



