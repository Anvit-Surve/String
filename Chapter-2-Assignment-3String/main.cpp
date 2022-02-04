#include <iostream>
#include <string>
using namespace std;
string takeInputString(string index){
  string string;
  cout << "Enter the " << index << " string : ";
  cin >> string;
  return string;
}

bool anagramCheck(string string1, string string2){
  int hash[257] = {};

  if(string1.length() == string2.length()){
    for(int i=0; i<string1.length(); i++){
      hash[string1[i]]++;
      hash[string2[i]]--;
    }

    for(int i=0; i<sizeof(hash)/sizeof(hash[0]); i++){
      if(hash[i] != 0){
        return false;
      }
    }
    return true;
  }
  return false;
}
int main() {
  string string1 = takeInputString("first");
  string string2 = takeInputString("second");

  if(anagramCheck(string1,string2)){
    cout << "true\n";
  }
  else cout << "false\n";
}