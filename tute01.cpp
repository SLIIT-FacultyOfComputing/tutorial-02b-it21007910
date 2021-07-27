exercise 1
#include<iostream>
using namespace std;

int main(){
  float cm, inches;

  cout<<"Enter a length in cm : ";
  cin>>cm;

  inches = cm / 2.54;

  cout<<"Length in inches is "<<inches<<endl;
  return 0;
}#include<iostream>
using namespace std;

int main(){
  float cm, inches;

  cout<<"Enter a length in cm : ";
  cin>>cm;

  inches = cm / 2.54;

  cout<<"Length in inches is "<<inches<<endl;
  return 0;
}

//exercise2 

#include<iostream>
using namespace std;

int main()
{
  double salary, netSalary;
  int etype, otHrs, otRate; 

  cout<<"Enter Employee Type : ";
  cin>>etype;
  cout<<"Enter Salary  : ";
  cin>>salary;
  cout<<"Enter OtHrs : ";
  cin>>otHrs;

  switch(etype){
    case 1:
     otRate = 1000;
     break;
    case 2:
     otRate = 1500;
     break;
    default:
     otRate = 1700;
     break;
  }
  netSalary = salary + otHrs* otRate;
  cout<<"Net Salary is "<<netSalary<<endl;

exersice3
#include<iostream>
using namespace std;

int main(){
  int no;
  long fac;

  cout<<"Enter a Number : ";
  cin>>no;

  fac = 1;
  for (int r=no; r >= 1; r--)
  {
    fac = fac * r;
  }

  cout<<"factorial of entered number is "<<fac<<endl;
  return 0;
}
 
exersice 4
#include<iostream>
using namespace std;

//function declaration
long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  cout << "Enter a value for n ";
  cin >> n;
  cout << "Enter a value for r ";
  cin >> r;

  cout << "nCr = ";
  cout << nCr(n,r);
  cout << endl;
  return 0;
}
long Factorial(int no)
{
  long fac=1;
  int x;
  for(x=no; x>=1; x--)
  {
    fac=fac*x;
  }
  return fac;
}
long nCr(int n, int r)
{
  long answer;
  answer=Factorial(n)/(Factorial(r)*Factorial(n-r));
  return answer;
}