#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "type.h"
void  board(int i , int di_value , int * out){
     ex boad[40] = { 
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


int game_turn(int round){
      for (int turn = 0; turn < 4; turn++){
           int add = 0;
           add = die_troll();
           players[turn].current_position += die_troll();
           if ( players[turn].current_position>= 40){
                  players[turn].current_position = players[turn].current_position - 40;
                  players[turn].money += 2000;
           }
      printf("dye trolls %d\n", add);
      printf("%s move from squere %d to squere %d\n", players[turn].player_name,players[turn].current_position-add , players[turn].current_position);
      }
    return ++round;
}

}


