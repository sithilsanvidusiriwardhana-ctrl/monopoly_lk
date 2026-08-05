#include <stdio.h>
#include "type.h"
void buying(int property_price , struct player *players,int player_id ,int place){
             players[player_id - 1].money  -= property_price ;
             players[player_id - 1 ].buyproperty[place] = 1;
}
void buy(int property_price , struct player *players,int player_id ,int place ){
    switch(player_id){
        case 1:
             break;
        case 2:
             if (( players[2].money - property_price) >= ( players[2].money/2)){
                  buying( property_price , players , player_id , place);
                   printf( "consicuances banker buy from property \n");
                   printf("remaining balance : %d\n",   players[player_id - 1].money );
             }
             break;
        case 3 : 
        if (property_price < players[player_id - 1].money){
                   buying( property_price , players , player_id , place);
                   printf( "Risk taker buy from property \n");
                   printf("remaining balance : %d\n",   players[player_id - 1].money );
    }              
    break;
    case  4 :
       break;   
}
}
void playertodo(int property_price , struct player *players,int player_id ,int place , int type){
    switch (type){
        case 1:
           buy( property_price , players , player_id , place);
           break;


    }
}
