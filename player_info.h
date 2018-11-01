#include<iostream>
#include<string>
using namespace std;
class Play{

private:

  int score;
 string name;

public:
  Play(){
    name="unknown";
    score=0;
  }
  Play(string n){
    name=n;
    score=0;
  }
  void setname(string n){
    name=n;
  }
  string getname(){
    return name;
  }
  void  setscore(int s){
    score+=s;
  }
  int getscore(){
    return score;
  }


};
