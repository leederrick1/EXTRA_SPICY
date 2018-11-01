#include <iostream>
#include <string>
#include "Games.h"

using namespace std;

int main()
{

std::string name;
int num,players;

do{
std::cout << "WELCOME TO SUPER QUEUE LAND" << '\n';
std::cout << "Please enter the number of players in your party" << '\n';
std::cin >> players;
if(players>10){
  cout<<"must be 10 or less since its a FIXED QUEUE"<<endl;
}
}while(players>10);


Games player;
std::cout << "Please enter your first names of the people playing" << '\n';
for(int i=0;i<players;i++){
  std::cout << "ENTER PLAYER "<<i+1<<" FIRST name" << '\n';
  std::cin >> name;
  Play one;
  one.setname(name);
  player.push_player(one);

}

//run an si func
std::cout << "Games have been QUEUED in this order" << '\n';
std::cout << "1.The QUEUE Coaster" << '\n';
std::cout << "2.QUEUE on ice" << '\n';
std::cout << "3.QUEUE wars" << '\n';
std::cout << "4.QUEUE Man" << '\n';
std::cout << "5.QUEUE, STACK, LIST" << '\n';

player.Run_GAMES_QUEUE();


player.Print_Scores();

  return 0;
}
