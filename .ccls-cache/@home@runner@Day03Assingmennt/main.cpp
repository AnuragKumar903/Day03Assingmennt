#include <iostream>
using namespace std;

int main(){
  // Ques - 01: Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.
  int n;
  int sum = 0;
  cout<<"Enter a number: ";
  cin>>n;
  for(int i = 1; i <= n; i++){
    sum += i;
  }
  cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;

  // Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  int fact = 1;
  for(int i = 1; i <= num; i++){
    fact *= i;
  }
  cout<<"The factorial of "<<num<<" is: "<<fact<<endl;

  // Ques-03: Write a C++ program that takes an integer N as input from the user and prints the multiplication table of N up to 10 using a loop.
  int num1;
  cout<<"Enter a number: ";
  cin>>num1;
  for(int i = 1; i <= 10; i++)
    cout<<num1<<" x "<<i<<" = "<<num1*i<<endl;
  
}