#include <iostream>

void convertString(std::string &string){
  for(int i=0; i<string.length(); i++){
    if(string[i]  >= 'a' && string[i]<='z' ){
      string[i] = string[i] - 32 ;
    }
    else if(string[i]  >= 'A' && string[i] <= 'Z' ){
      string[i] = string[i] + 32 ;
    }
  }
}

int main() {
  std::string string;

  std::cout << "Enter the string to convert : ";
  std::cin >> string;

  convertString(string);

  std::cout << std::endl << "Converted string : " << string;
}