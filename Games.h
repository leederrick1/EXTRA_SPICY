#include <iostream>
#include "player_info.h"
using namespace std;

class Games{
private:
  Play info[10];
  int max;
  int front;
  int back;
  void pop_player();
  void peek_player();
  void Queue_Coaster();
  void Queue_Ice();
  void Queue_Wars();
  void Queue_Man();
  void Queue_Stack_list();

public:
  Games(){
    max=10;
    front=0;
    back=0;
  }

  void push_player(Play obj);
  void Print_Scores();
  void Run_GAMES_QUEUE();

};
void Games::push_player(Play obj){

  info[back].setname(obj.getname());
  back++;
}
void Games:: peek_player(){
cout<<info[front].getname()<< " "<<info[front].getscore()<<endl;
}
void Games:: pop_player(){
front++;
}
void Games:: Print_Scores(){

while(front!=back){
  peek_player();
  pop_player();
}
}
void Games::Run_GAMES_QUEUE(){
   Queue_Coaster();
   Queue_Ice();
   Queue_Wars();
   Queue_Man();
   Queue_Stack_list();
}
void Games::Queue_Coaster(){

}
void Games::Queue_Ice(){

}
void Games::Queue_Wars(){

}
void Games::Queue_Man(){

}
void Games::Queue_Stack_list(){

}
