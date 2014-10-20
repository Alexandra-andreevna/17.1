#include <iostream>;
using namespace std;
int main(void)
 {
  int m,y,f,i;
  cout<<"Enter f"<<endl;
  cin>>f;
  m=f/6000;
  f=f%6000;
  y=f/3;
  f=f%3;
  cout<<m<<"miles"<<y<<"yard"<<f<<"ft"<<endl;
  cin>>i;
  return 0;
 }
