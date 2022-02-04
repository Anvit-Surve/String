#include <iostream>

class Player{
private:
  std::string name;

public:
  Player(std::string name){
    this->name = name;
  }
  std::string operator + (Player otherPlayer){
    return name + otherPlayer.name;
  }
};

int main() {
  Player player1("Ragnar");
  Player player2("Morningstar");

  std::cout << player1 + player2;
}