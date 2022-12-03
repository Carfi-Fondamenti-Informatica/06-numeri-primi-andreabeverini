#include <iostream>
#include "lib.h"

using namespace std;
int main(){
  int a=0;
  cin>>a;
  if (numprimi(a)==0) {
    cout<<"numero primo"<<endl;
  }
  else {
    cout<<"numero non primo"<<endl;
  }
  return 0;
}
