#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "type.h"

     boards boad[40] = { 
        {Start,Go   ,-1  ,0},
        { .col1 = brown ,.col2 = non, .owner = 4 , .property_price = 1500},
        { .col1 = Event , .col2 = non ,.owner = -1 },
        { .col1 = Property ,.col2 = brown , .owner = 4 , .property_price = 1800},
        { .col1 =Tax ,.col2 = non ,.owner = -1 , .property_price = 0},
        { .col1 = Railway , .col2 = non , .owner = 4 ,.property_price = 0},
        { .col1 = Property , .col2 = Lightblue , .owner = 4 , .property_price = 2500},
        { .col1 = Event , .col2 = non , .owner = -1 },
        { .col1 = Property ,.col2 = Darkblue , .owner = 4 , .property_price = 2700},
        { .col1 = Property , .col2 = Darkblue , .owner =  4 , .property_price = 3000},
        {.col1 =  Special ,.col2 =  non , .owner = -1 ,.property_price =  0},
        { .col1 = Property ,.col2 = Pink , .owner = 4 , .property_price = 3500} ,
        {.col1 = Utility ,.col2 =  non ,.owner = 4 , },
        { .col1 = Property , .col2 = Pink  , .owner = 4 , .property_price = 3800},
        { .col1 = Property , .col2 = Pink ,.owner =  4 , .property_price =4000} ,
        { .col1 = Railway , .col2 = non , .owner = 4  , .property_price = 0},
        { .col1 = Property ,.col2 = Orange ,.owner =  4 ,.property_price =  4500},
        {.col1 = Insurance , .col2 = non , .owner = -1 , .property_price = 0 },
        { .col1 = Property , .col2 = Orange ,.owner =  4 , .property_price = 4700},
        {.col1 =  Property ,.col2 = Orange ,.owner =4 ,.property_price = 5000},
        {.col1 = Special , .col2 = non ,.owner =  -1 ,.property_price = 0},
        {.col1 = Property ,.col2 = Red , .owner =4 ,.property_price = 5500},
        {.col1 = Event ,.col2 = non ,.owner = -1 ,.property_price = 0},
        {.col1 =  Property ,.col2 = Red ,.owner = 4 ,.property_price = 5800},
        {.col1 = Property ,.col2 =  Red , .owner = 4 ,.property_price = 6000},
        {.col1 =  Railway ,.col2 =  non ,.owner = -1 ,.property_price =  0},
        { .col1 = Property, .col2 = Yellow ,.owner =  4 , .property_price = 6500},
        {.col1 = Property ,.col2 = Yellow  ,.owner =  4 ,.property_price =  6800},
        { .col1 = Utility ,.col2 =  non ,.owner =  -1 ,.property_price =  0},
        { .col1 = Property , .col2 = Yellow ,.owner =  4 , .property_price = 7000},
        { .col1 = Special ,.col2 = non ,.owner =  -1 ,.property_price = 0},
        { .col1 = Property ,.col2 = Green ,.owner = 4 ,.property_price = 8000},
        { .col1 = Property , .col2 = Green ,.owner =  4 ,.property_price =  8000},
        { .col1 = Insurance ,.col2 =  non ,.owner =  -1 ,.property_price =  0},
        { .col1 = Property ,.col2 =  Green ,.owner =  4 ,.property_price = 8300},
        { .col1 = Railway ,.col2 =  non , .owner = -1 ,.property_price =0},
        {.col1 =  Event ,.col2 =  non , .owner = -1 ,.property_price =  0},
        {.col1 = Property ,.col2 =  Darkblue ,.owner =  4 , .property_price = 10000},
        {.col1 = Bank ,.col2 =  non , .owner = -1 ,.property_price =  0},
        { .col1 = Property ,.col2 =  Darkblue ,.owner =  4 , .property_price = 12000}
};
int current_status(int i){
     if (boad[i].owner == 4 ){
               return 1;
          }
       else {
          return 0;
       }
     }


int  board(int i , int j){
     switch (j){
case 1 :
      return boad[i].col1;
case 2 :
      return boad[i].property_price;
     }

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



