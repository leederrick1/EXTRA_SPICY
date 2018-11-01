#include <iostream>
#include "player_info.h"
using namespace std;

class Games{
private:
  int track;
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
    track=0;
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

  while(track!=back){
    cout<<"ITS "<<info[track].getname()<<"'s turn now"<<endl;
   Queue_Coaster();
   Queue_Ice();
   Queue_Wars();
   Queue_Man();
   Queue_Stack_list();
   track++;
 }
 cout<<"thanks for playing with queues"<<endl;
}
void Games::Queue_Coaster(){
  int num;
  cout<<"Welcome to the QUEUE Coaster"<<endl;
 cout<<"enter a number"<<endl;
 cin>>num;
 if(num==1){
   cout<<"correct"<<endl;
   info[track].setscore(1);
 }
 else
 cout<<"you lose"<<endl;

}
void Games::Queue_Ice(){
  int num;
  cout<<"Welcome to the QUEUE ice"<<endl;
 cout<<"enter a number"<<endl;
 cin>>num;
 if(num==2){
   cout<<"correct"<<endl;
   info[track].setscore(1);
 }
 else
 cout<<"you lose"<<endl;
}
void Games::Queue_Wars(){
  int num;
  cout<<"Welcome to the QUEUE Wars"<<endl;
  cout<<"enter a number"<<endl;
  cin>>num;
  if(num==3){
   cout<<"correct"<<endl;
   info[track].setscore(1);
  }
  else
  cout<<"you lose"<<endl;


  }
void Games::Queue_Man(){
  int num;
  cout<<"Welcome to the QUEUE man"<<endl;
 cout<<"enter a number"<<endl;
 cin>>num;
 if(num==4){
   cout<<"correct"<<endl;
   info[track].setscore(1);
 }
 else
 cout<<"you lose"<<endl;


}
void Games::Queue_Stack_list(){
  int num;
  cout<<"Welcome to the queue stack list"<<endl;
 cout<<"enter a number"<<endl;
 cin>>num;
 if(num==5){
   cout<<"correct"<<endl;
   info[track].setscore(1);
 }
 else
 cout<<"you lose"<<endl;


}
