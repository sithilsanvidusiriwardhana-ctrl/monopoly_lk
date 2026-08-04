#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "type.h"
//int Value[4];
struct player_Roll Rolls[4];
int full_round = 0;
 struct player players[4];
 char *player[4] ={ "Aggressive Investore " , "Conservative Banker" , "Risk Taker" , "Oppertunistic Treader" };
int die_troll(void)
{
 int die1 = (rand() % 6) + 1;
 int die2 = (rand() % 6) + 1;
 int sum = die1 + die2;
 return sum;
}

void  Select_order(int iteam){
    int loop_value = iteam;
    int i = 0;
    while ( i < loop_value){
        Rolls[i].roll_value = die_troll();
        i++;
    }
printf("\n");
for (int i =0 ; i < 4; i++){
   
    printf("%s  rolls",player[(Rolls[i].player_id) - 1]);
     printf(" %d\n",Rolls[i].roll_value );
}
}

void   assign_roll(){
      Rolls[0].player_id = 1;
      Rolls[1].player_id = 2;
      Rolls[2].player_id = 3;
      Rolls[3].player_id = 4;
}

void merge(struct player_Roll  arr[] , int left , int mid , int right){
    int n1 = mid -left + 1;
    int n2 = right- mid;
    struct player_Roll L[n1], R[n2];
    for ( int i =0 ;i < n1; i++){
         L[i] = arr[left +i];
    }
    for ( int j = 0 ; j < n2; j++){
        R[j] = arr[mid + 1+ j];
    }
    int i = 0, j = 0, k = left;
    while ( i < n1 && j < n2){
        if(L[i].roll_value>= R[j].roll_value){
            arr[k++] = L[i++];
        }
        else{
            arr[k++] = R[j++];
        }
    }
     while (i < n1){
            arr[k++] = L[i++];
        }
        while(j < n2){
            arr[k++] = R[j++];
        }

    }

void mergeSort(struct player_Roll arr[],int left , int right){
    if (left < right){
        int mid  = left + (right - left)/ 2;
        mergeSort(arr,left, mid);
        mergeSort(arr,mid+1,right);
        merge(arr, left,mid, right);
    }
}
int has_check(struct player_Roll arr[])
{
    for ( int i =0; i < 3 ; i++){
        if (arr[i].roll_value==arr[i+1].roll_value){
              return 1;
        }
    }
return 0;
};

void duplicate(struct player_Roll arr[],int count){
         for (int i = 0 ; i < 3;i++){
            if  ( arr[i].roll_value == arr[i+1].roll_value){
                   int start_ind = i;
                   int end_ind = i+1;
                   while( end_ind + 1 < 4 && arr[end_ind +1].roll_value == arr[start_ind].roll_value){
                    end_ind++;
                   } 
                int num_tied = end_ind - start_ind +1;
                struct player_Roll temp_rolls[4];

               int k ;
               printf("\nequal player\n");
               for ( k = 0; k < num_tied ; k++){
                        temp_rolls[k].player_id = arr[start_ind+k].player_id;
                        
                        printf("**%s** \n",player[(temp_rolls[k].player_id) - 1]);

                        temp_rolls[k].roll_value = die_troll();
                    }
                printf("that player's re try a die\n");
            
                
                mergeSort( temp_rolls,0, num_tied -1);
                for( k =0 ;k <num_tied; k++){
                    Rolls[start_ind+k].player_id = temp_rolls[k].player_id;
                    Rolls[start_ind + k].roll_value = (temp_rolls[k].roll_value) + 12;
                    printf("next round die value \n");
                     printf("**%s rolls",player[(temp_rolls[k].player_id) - 1]);
                     printf("%d\n", temp_rolls[k].roll_value);
                }
                
                    
                
         i = end_ind;   
         }
         
        }
    }
void sort()
{
    assign_roll();
    Select_order(4);
    mergeSort(Rolls,0,3);
    while (has_check(Rolls)){
        duplicate(Rolls,4);
    }
    printf("\n%s  will start the turn\n\n",player[(Rolls[0].player_id) - 1]);
    printf("\nturn order :\n");
    for (int i =0 ; i < 4; i++){
      printf("\t%s  \n",player[(Rolls[i].player_id) - 1]);

}
}

void convert(){
    for ( int i = 0; i < 4 ; i++){
        players[i].player_id = Rolls[i].player_id;
        players[i].player_name = player[(Rolls[i].player_id)-1];
        players[i].player_turn = i+1;
        players[i].player_round = 0;
        players[i].current_position = 0;
        players[i].money = 30000;

    }

}

void  game_turn( ){
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
}
/*int game_turn(int round, struct player *players){
      for (int turn = 0; turn < 4; turn++){
           int add = 0;
           add = die_troll();
           players[turn].current_position += add;
           if ( players[turn].current_position>= 40){
                  players[turn].current_position = players[turn].current_position - 40;
                  players[turn].money += 2000;
           }
      printf("dye trolls %d\n", add);
      printf("%s move from squere %d to squere %d\n", players[turn].player_name,players[turn].current_position-add , players[turn].current_position);
      }
    return ++round;
}*/

void game(){
    sort();
    convert();
    int round = 0;
    while ( round <  1){
       game_turn( );
       int small = players[0].player_round;
       for ( int i = 0; i <4 ; i++){
         if ( small >  players[i].player_round ){
            round = players[i].player_round;
         }
            else{
               round = small;
            }
         

       }

       full_round++;
      
    }
    printf("%d\n%d\n%d\n%d\n",players[0].player_round,players[2].player_round,players[3].player_round,players[0].player_round);
}





