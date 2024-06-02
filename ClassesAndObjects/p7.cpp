// Object As Function Argument

#include <iostream>
using namespace std;

class Time{
  int hours;
  int minutes;

  public:
    void GetTime(int h,int m){
      hours = h;
      minutes = m;
    }

    void PutTime(void){
      cout << hours << "hours and ";
      cout << minutes << "minutes" << endl;
    }

    void sum(Time,Time);
};

void Time :: sum(Time t1,Time t2){
  minutes = t1.minutes + t2.minutes;
  hours = minutes / 60;
  minutes = minutes % 60;
  hours = hours + t1.hours + t2.hours;
}

int main(){
  Time t1,t2,t3;

  t1.GetTime(2,45);
  t2.GetTime(3,30);

  t3.sum(t1,t2);

  cout << "t1 = ";t1.PutTime();
  cout << "t2 = ";t2.PutTime();
  cout << "t3 = ";t3.PutTime();

  return 0;
}