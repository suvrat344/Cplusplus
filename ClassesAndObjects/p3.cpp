// Array Within Class

#include <iostream>
using namespace std;

#define SIZE 50

class ITEMS{
  private:
    int ItemCode[SIZE];
    float ItemPrice[SIZE];
    int count;

  public:
    void CNT(void){
      count = 0;
    };
    void GetItem(void);
    void DisplaySum(void);
    void Remove(void);
    void DisplayItem(void);
};


void ITEMS :: GetItem(void){
  cout << "Enter item code : ";
  cin >> ItemCode[count];

  cout << "Enter item price : ";
  cin >> ItemPrice[count];

  count++;
}


void ITEMS :: DisplaySum(void){
  float sum = 0;
  for (int i = 0; i < count; i++)
  {
    sum = sum + ItemPrice[i];
  }
  cout << "Total Value : "<<sum<<endl;
}


void ITEMS :: Remove(void){
  int a;

  cout << "Enter item code : ";
  cin >> a;

  for (int i = 0; i < count; i++)
  {
    if (ItemCode[i] == a)
    {
      ItemPrice[i] = 0;
    }  
  }
}


void ITEMS :: DisplayItem(void){
  cout << "Code  Price\n";

  for (int i = 0; i < count; i++)
  {
    cout << ItemCode[i];
    cout << "  " << ItemPrice[i];
    cout << "\n";
  }
}


int main(){
  ITEMS order;
  order.CNT();

  int x;

  do
  {
    cout << "\n----------------********-------------------"<<endl;
    cout << "You can do the following" << "\nEnter appropriate number"<<endl;
    cout << "1. Add an item" << endl;
    cout << "2. Display total value" << endl;
    cout << "3. Delete an item" << endl;
    cout << "4. Display all item" << endl;
    cout << "5. Quit" << endl;
    cout << "What is your option? ";
    cin >> x;
    cout << "\n";
    switch (x)
    {
    case 1:
      order.GetItem();
      break;
    case 2:
      order.DisplaySum();
      break;
    case 3:
      order.Remove();
      break;
    case 4:
      order.DisplayItem();
      break;
    case 5:
      break;
    default:
      cout << "Error in input; try again" << endl;
    }
  } while (x != 5);
  
  return 0;
}