#include <iostream>
#include <string>
using namespace std;

string takeInputString(){
  string string;

  cout << "Enter the string to be checked : ";
  cin >> string;

  return string;
}

void printDuplicates(string& string){
  int temp[52] = {};
  std::string output = "";

  for(int i=0; i < string.length(); i++){
    if(string[i] >= 'a' && string[i] <= 'z'){
      temp[string[i] - 'a']++ ;
    }

    if(string[i] >= 'A' && string[i] <= 'Z'){
      temp[string[i] - 'A' + 27]++ ;
    }
  }

  for(int i=0; i <= sizeof(temp)/sizeof(temp[0]); i++){
    if((temp[i] > 1) && i <= 26){
      output += (char)(i + 'a');
    }

    if((temp[i] > 1) && i > 26){
      output += (char)(i - 27 + 'A');
    }
  }

  cout << "Duplicate string : " << output << endl;
}

int main(){
  string string = takeInputString();
  printDuplicates(string);
}