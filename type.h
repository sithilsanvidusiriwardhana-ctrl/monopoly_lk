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
       int player_round;
       int current_position;
       int money;
       
};
 typedef  struct boards{
    enum type  col1;
    enum place col2;
} boards ;
typedef struct player_Roll {
       int player_id;
       int roll_value;
} ;


// bord 
int  board(int i );



//game
void game();
int die_troll();
#endif