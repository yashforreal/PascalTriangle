#include <iostream>
using namespace std;
/*int main() {
  for(int i=1; i<=10; i++){
    int number = 1;
    for(int j=2; j<=i; j++){
      number *= 11;
    }
    cout<<number<<endl;
  }
  return 0;
} */
// the above code can not provide values for Pascal heights greater than 9

// hence use the below optimized code

int main() {
  cout << "Welcome to Pascal's Triangle programme" << endl;
  cout << "Enter the height of your Pascal's tree: ";
  int ht;
  cin >> ht;
  for (int i = 1; i <= ht; i++) {
    int number = 1;
    for (int j = 1; j <= i; j++) {
      cout << number << " ";
      number = number * (i - j) / j;
    }
    cout << endl;
  }
  return 0;
}