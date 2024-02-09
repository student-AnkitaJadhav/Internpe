// Program to create Rock,Paper and Scissors game
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int getComputerMove()
{
  srand(time(0));
  int computerMove = rand() % 3 + 1;
  return computerMove;
}

int getWinner(int playerMove, int computerMove)
{
  // 1 for player win, 0 for tie, -1 for computer win
  if (playerMove == computerMove)
  {
    return 0;
  }
  else if ((playerMove == 1 && computerMove == 3) ||
           (playerMove == 2 && computerMove == 1) ||
           (playerMove == 3 && computerMove == 2))
  {
    return 1;
  }
  else
  {
    return -1;
  }
}

int main()
{
  int playerMove, computerMove, winner;
  cout<<"\n\n";
  cout << "\t\t\tWelcome to Rock, Paper, Scissors!\n"<<endl;
  cout<< "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): "<<endl;
  cin >> playerMove;

  // Validate player input
  while (playerMove < 1 || playerMove > 3)
  {
    cout << "Invalid input. Please enter 1, 2, or 3: ";
    cin >> playerMove;
  }

  computerMove = getComputerMove();

  winner = getWinner(playerMove, computerMove);

  switch (winner)
  {
  case 1:
    cout << "You win! " << endl;
    break;
  case 0:
    cout << "It's a tie! " << endl;
    break;
  case -1:
    cout << "You lose! " << endl;
    break;
  }

  if (computerMove == 1)
  {
    cout << "Computer chose Rock." << endl;
  }
  else if (computerMove == 2)
  {
    cout << "Computer chose Paper." << endl;
  }
  else
  {
    cout << "Computer chose Scissors." << endl;
  }

  return 0;
}
