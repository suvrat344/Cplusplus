// Function Friendly To Two Classes

#include <iostream>
using namespace std;

class ABC;          // Forward Declaration

class XYZ{
  int x;

  public:
    void SetValue(int i){
      x = i;
    }
    friend void max(XYZ,ABC);
};


class ABC{
  int a;

  public:
    void SetValue(int i){
      a = i;
    }

    friend void max(XYZ,ABC);
};


void max(XYZ m,ABC n){
  if(m.x >= n.a){
    cout << m.x;
  }
  else{
    cout << n.a;
  }
}


int main(){
  ABC abc;
  abc.SetValue(10);
  XYZ xyz;
  xyz.SetValue(20);
  max(xyz,abc);

  return 0;
}