// Creating Class

#include <iostream>
using namespace std;

class item{

  private:
    int number;
    float cost;

  public:
    void getData(int a,float b);   
    void putData(void){
      cout << "number : "<< number << endl;
      cout << "cost : "<< cost << endl;
    }
};

void item :: getData(int a,float b){
  number = a;
  cost = b;
}


int main(){
  item x;
  cout << "\nObject x " << endl;
  x.getData(100,299.95);
  x.putData();

  item y;
  cout << "\nObject y " << endl;
  y.getData(200,175.50);
  y.putData();

  return 0;
}