#include <iostream>
#include <string>
using namespace std;

string takeInputString(){
  string string;
  cout << "Enter the string to be checked : ";
  cin >> string;
  return string;
}

bool palindromeCheck(string& string){
  std::string temp = "";
  for(int i = (string.length()-1); i>=0; i--){
    temp = temp + string[i];
  }

  if(temp == string){
    return true;
  }
  else return false;
}


int main() {
  string string = takeInputString();
  if(palindromeCheck(string)){
    cout << "Yes\n";
  }
  else{
    cout << "No\n";
  }

}