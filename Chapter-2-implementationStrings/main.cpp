#include <iostream>

void sortString(std::string &string){
  int counter[26] = {};
  int index = 0;
  for(int i=0; i<string.length(); i++){
    counter[string[i]-'a']++ ;
  }
  for(int i=0; i < sizeof(counter)/sizeof(counter[0]); i++){
    if(index < string.length()){
      for(int j=0; j<counter[i]; j++){
        string[index] = i + 'a';
        index++;
      }
    }
  }
}
// Time and Space complexity : O(n)
int main() {
  std::string string ;
  std::cout << "Enter the string to be sorted : ";
  std::cin >> string;

  sortString(string);
  std::cout << std::endl << "String after sorting : " << string; 
}