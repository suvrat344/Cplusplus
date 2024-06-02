// Static Class Member

#include <iostream>
using namespace std;

class item{
  static int count;
  int number;

  public:
    void GetData(int a){
      number = a;
      count++;
    }
    void GetCount(void){
      cout << "Count : " << count << endl;
    }
};

int item :: count;

int main(){
  item a,b,c;
  a.GetCount();
  b.GetCount();
  c.GetCount();

  a.GetData(100);
  b.GetData(200);
  c.GetData(300);

  cout << "After getting data"<<endl;

  a.GetCount();
  b.GetCount();
  c.GetCount();

  return 0;
}