#include <iostream>
#include <random>

using namespace std;
 
  int level = 0;
  int times;
  void Chances()
  {
    while(level != 1 && level != 2 && level != 3) {
    cout<<"Enter your level(1-3): ";
    cin>>level;
    cout<<"You have chosen level : "<<level<<endl;
    if(level == 1){
        cout<<"You have 10 chances to guess the number."<<endl;
        times = 10;
    } else if (level == 2) {
        cout<<"You have 7 chances to guess the number."<<endl;
        times = 7;
    } else if (level == 3) {
        cout<<"You have 5 chances to guess the number."<<endl;
        times = 5;
    } else {
        cout<<"Invalid level chosen. Please choose between 1 and 3."<<endl;
        continue;
    }
  }
  } 

int main() {
    cout<<"Hello to our guessing game!"<<endl;
    cout<<"You have numer of chances to guess the number between 1 and 100 according to the chosen level."<<endl;
    cout<<"Let's start!"<<endl;
    cout<<"Choose your level: "<<endl;
    cout<<"1. Easy (10 chances)"<<endl;
    cout<<"2. Medium (7 chances)"<<endl;
    cout<<"3. Hard (5 chances)"<<endl;
    Chances();
    int num = rand() % 101;
    int guess;
    int org = times;
    for(times;times>0;times--){
     cout<<"try guess the number: ";
     cin>>guess;
    if (guess == num)
    {
      cout<<"Congratulations! You guessed the number! in "<<org - times<<" tries."<<endl;
      break;
    }else if (guess < num){
        cout<<"Your guess is lower than the number."<<endl;
        cout<<"Try again!"<<endl;
    }else{
        cout<<"Your guess is higher than the number."<<endl;
        cout<<"Try again!"<<endl;
    }
    }
    if (guess != num) {
        cout<<"Sorry, you have used all your chances. The number was: "<<num<<endl;
    }
    return 0;
}