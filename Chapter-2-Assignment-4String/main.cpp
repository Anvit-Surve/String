#include <iostream>
#include <string>
using namespace std;

string takeInputString(){
  string string;
  cout << "Enter the string to be checked : ";
  cin >> string;
  return string;
}

void printUniqueCharacter(const string& string){
  int counter[256] = {};
  for(int i=0; i<string.length(); i++){
    counter[string[i]]++;
  }
  for(int i=0; i<sizeof(counter)/sizeof(counter[0]); i++){
    if(counter[i] > 0){
      cout << (char)i << " - " << counter[i] << endl;
    }
  }
}

int main() {
  string string = takeInputString();
  printUniqueCharacter(string);
}