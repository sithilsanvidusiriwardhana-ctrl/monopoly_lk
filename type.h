#ifndef TYPE_H
#define  TYPE_H
 typedef enum type  {Start, Property, Event , Tax , Railway, Special, Utility, Insurance,Bank} type;
//char *brown[2] ={Pettah,Maradana} ;
//char *railway[4] = {colombo,kandy,jaffna,galle}
typedef enum  place {Go , brown , Lightblue , Pink , Orange ,Red , Yellow ,Green ,Darkblue , } place;
typedef struct player{
       int player_id;
       char *player_name;
       int player_turn;
       int current_position;
       int money;
       
};
 typedef  struct ex{
    enum type  col1;
    enum place col2;
} ex ;
typedef struct player_Roll {
       int player_id;
       int roll_value;
} ;


// bord 
void  board(int i , int di_value , int * out);
int die_troll();

//game
void game();
#endif