// Define a class to represent a bank account.Include the following members:
// Data members
// 1. Name of the depositor
// 2. Account number
// 3. Type of account
// 4. Balance amount in the account
// Member functions
// 1. To assign initial values
// 2. To deposit an amount
// 3. To withdraw an amount after checking the balance
// 4. To display name and balance
// Write a main program to test the program.


#include <iostream>
#include <string.h>
using namespace std;

class BankAccount{
  char name[25];
  long long int account_number;
  float balance;
  char type[25];

  public:
    void GetData(const char *n,long long int acc_number,float bal,const char *t){
      strcpy(name,n);
      account_number = acc_number;
      balance = bal;
      strcpy(type,t);
    }
    void Deposit(float);
    void Withdraw(float);
    void Display(){
      cout << "Name : " << name<<endl;
      cout << "Account Number : " << account_number<<endl;
      cout << "Balance : " << balance << endl;
    }
};

void BankAccount :: Deposit(float amount){
  balance = balance + amount;
}


void BankAccount :: Withdraw(float amount){
  if(balance < amount){
    cout << "Insufficient balance!!"<<endl;
  }
  else{
    balance = balance - amount;
  }
}


int main(){
  BankAccount customer1;

  customer1.GetData("Ramesh",3781289418,95000,"Saving");
  customer1.Deposit(1000);
  customer1.Withdraw(5000);
  customer1.Display();

  return 0;
}