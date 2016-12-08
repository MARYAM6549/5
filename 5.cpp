#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int numerator,denominator;
cout<<"enter 2 integers\none for numerator another for denominator\n";
cout<<"numerator = ";
cin>>numerator;
cout<<"denominator = ";
cin>>denominator;
cout<<"quotient = "<<numerator/denominator<<"\nremainder"<<numerator%denominator<<"\n";
  return 0;
}
