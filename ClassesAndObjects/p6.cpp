// Array Of Objects

#include <iostream>
using namespace std;
#define SIZE 3

class Employee{
  char name[30];
  float age;

  public:
    void GetData(void);
    void PutData(void);
};

void Employee :: GetData(void){
  cout << "Enter Name : ";
  cin >> name;

  cout << "Enter age : ";
  cin >> age;
}


void Employee :: PutData(){
  cout << "Name : "<< name << endl;
  cout << "Age : " << age << endl;
}

int main(){
  Employee manager[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    cout << "Details of Manager" << i + 1 << endl;
    manager[i].GetData();
  }
  
  cout << "-------***********----------------"<<endl;
  
  for (int i = 0; i < SIZE; i++)
  {
    cout << "Manager" << i + 1 << endl;
    manager[i].PutData();
  }
  
  return 0;
}