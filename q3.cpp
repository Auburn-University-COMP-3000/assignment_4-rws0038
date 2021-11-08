#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

class Player
{
 private:
   string name;
   int score;
 public:
   Player();
   Player(int newScore, string newname);
   void setName(string newName);
   void setScore(int newScore);
   string getName();
   int getScore();
};

int main(){
  int options = 0;
  int score;
  string name;
  const int MAXIMUM_PLAYERS = 10;
  vector<Player> players;

  while(options != 5){
    cout << "Enter \"1\" to add a player." << endl
    << "Enter \"2\" to print all players." << endl
    << "Enter \"3\" to see a player's score." << endl
    << "Enter \"4\" to remove a player from the list." << endl
    << "Enter \"5\" to exit." << endl;
    cin >> options;
    while(options < 1 || options > 5){
      cout << "Please enter a valid number. ";
      cin >> options;
    }
    
    switch(options){
      case 1:{
        
        if (players.size() < MAXIMUM_PLAYERS){
          cout << "Enter the player's name: ";
          cin >> name;
          cout << "Enter the player's score: ";
          cin >> score;
          cout << endl;
          Player player(score, name);
          players.push_back(player);
        }
        else{
          cout << "There are already 10 players. You must remove one player to add a new one." << endl;
        }
        break;
      }
      case 2:{
      
        cout << left << setw(10) << "Name" << setw(10) << "Score" << endl;
        for(int i = 0; i < players.size(); i++){
          cout << left << setw(10) << players[i].getName() << setw(10) << players[i].getScore() << endl;
        }
        cout << endl;
        break;
      }
      case 3:{
    
        string nameSearch;
        bool nameFlag = false;
        cout << "Enter a name to search for: ";
        cin >> nameSearch;
        for(int i = 0; i < players.size(); i++){
          if(players[i].getName() == nameSearch){
            cout << players[i].getName() << "'s score: " << players[i].getScore() << endl;
            nameFlag = true;
            break;
          }
        }
        if (nameFlag == false){
          cout << "That player does not exist. Search for a different player." << endl;
        }
        cout << endl;
        break;
      }
      case 4:{
   
        string nameSearch;
        int nloc = -1;
        cout << "Enter a player's name to be removed: ";
        cin >> nameSearch;
        for(int i = 0; i < players.size(); i++){
          if(players[i].getName() == nameSearch){
            nloc = i;
            break;
          }
        }
        if(nloc != -1){
          players.erase(players.begin()+nloc);
          cout << "Player removed." << endl;
        }
        else{ cout << "No players removed." << endl; }
        cout << endl;
        break;
      }
    }
  }

}

Player::Player() {
  name = "";
  score = 0;
}

Player::Player(int newScore, string newName){
  name = newName;
  score = newScore;
}

void Player::setName(string newName){
  name = newName;
}

void Player::setScore(int newScore){
  score = newScore;
}

string Player::getName(){
  return name;
}

int Player::getScore(){
  return score;
}


void addPlayer(int &playerCount, vector<Player> &players);
void printPlayers(int playerCount, vector<Player> players);
void searchPlayers(int playerCount, vector<Player> players);
void removePlayer(int &playerCount, vector<Player> &players);


void addPlayer(int &playerCount, vector<Player> &players){
  if(playerCount == 10){
    cout << "No more players can be added." << endl;
  }
  else {
    cout << "Enter a new player's name." << endl;
    string name;
    cin >> name;
    cout << "Enter the new player's score." << endl;
    int score;
    cin >> score;
    Player newPlayer(score, name);
    players.push_back(newPlayer);
    playerCount++;
  }
}

void printPlayers(int playerCount, vector<Player> players){
  cout << "Player Scores" << endl;
  for (int i = 0; i < playerCount; i++){
    cout << players[i].getName() << " " << players[i].getScore() << endl;
  }


}
