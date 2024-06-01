// Nesting Of Member Functions

#include <iostream>
using namespace std;

class set{
  private:
    int m,n;

  public:
    void input(void);
    void display(void);
    int largest(void);
};


int set :: largest(void){
  if(m >= n){
    return m;
  }
  else
  {
    return n;
  }
}


void set :: input(void){
  cout << "Input Value of m and n : ";
  cin >> m >> n;
}


void set :: display(void){
  cout << "Largest Value : " << largest()<< endl;
}


int main(){
  set A;
  A.input();
  A.display();

  return 0;
}