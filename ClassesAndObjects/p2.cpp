// Write a class to represent a vector (a series of float values).Include member functions to perform the following tasks.
// a) To create the vector.
// b) To modify the value of a given element.
// c) To multiply by a scalar value.
// d) To display the vector in the form (10,20,30,40,...)
// Write a program to test your class.


#include <iostream>
#include <stdlib.h>
using namespace std;


class Vector{
  int *vector,size=0;

  public:
    void CreateVector(void);
    void ModifyVector();
    void MultiplyVector(int);
    void DisplayVector(void);
};



// Create vector of size n
void Vector :: CreateVector(void){

  cout << "Number of vector you want to store : ";
  cin >> size;

  vector = (int *)malloc(size * sizeof(int));

  if(vector == NULL){
    cout << "Memory Allocation Failed" << endl;
    exit(1);
  }

  for (int i = 0; i < size; i++)
  {
    cout << "Enter vector" << i+1 << " : ";
    cin >> vector[i];
  }
}



// Modify Vector
void Vector :: ModifyVector(){
  int num,new_vector;
  cout << "Vector you want to modify : ";
  cin >> num;

  cout << "Enter vector : ";
  cin >> new_vector;

  for (int i = 0; i < size; i++)
  {
    if (vector[i] == num)
    {
      vector[i] = new_vector;
      break;
    }
  }
}



// Multiply vector by some scalar
void Vector :: MultiplyVector(int num){

  // If array is empty
  if(size == 0){
    cout << "Array is empty.Multiplication not possible." << endl;
  }
  else{
    for (int i = 0; i < size; i++)
    {
      vector[i] *= num; 
    }
  }
}



// Display Vector
void Vector :: DisplayVector(void){
      cout << "Display Vector" << endl;
      cout << "(";
      for (int i = 0; i < size; i++)
      {
        // If last element of array don't place comma
        if(i == size - 1){
          cout << vector[i];
        }
        else{
          cout << vector[i] <<",";
        } 
      }
      cout << ")"<<endl;  // Place closing parenthesis at end
}



int main(){
  Vector v1;
  v1.CreateVector();
  v1.ModifyVector();
  v1.MultiplyVector(5);
  v1.DisplayVector();

  return 0;
}