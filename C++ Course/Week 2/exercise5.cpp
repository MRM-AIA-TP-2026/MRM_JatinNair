#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  double input;
  double total = 0;
  double avg = 0;
  vector<double> numList(0);
  
  cout << "Enter double or int to add to total, else find total average:" << endl;
  while (cin >> input) {
  
    // add input into vector
    
    for (int i = 0; i < numList.size(); i++) {
  total += numList.at(i);
  avg = total / numList.size();
}

    
    // your code goes above
  
    cout << "Enter double or int to add to total, else find total average:" << endl;
  }
  
  // iterate through vector, add elements to total, then calculate average
  
  
  
  // your code goes above
  
  cout << avg << endl;
  
  return 0;
  
}