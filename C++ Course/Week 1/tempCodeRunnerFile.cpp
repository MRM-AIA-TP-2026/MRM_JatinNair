#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
  int n=5;
  for(int i=1;i<=5;i++)
  {
    for(int j=n-i;j>0;j--)
    {
      cout<<".";
    }
    cout<<i<<endl;
  }


  //add code above this line
  
  return 0;
  
}
