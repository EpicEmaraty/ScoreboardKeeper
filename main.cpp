#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

int main()
{
  int periods;
  int teams;
  int playerCount = 1;

  vector<vector<int> > board;

  cout<<"How many competitors? ";
  cin>>teams;
  cout<<"How many scoring periods? ";
  cin>>periods;

  if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
      teams > MAX_TEAMS || periods > MAX_PERIODS )
  {
    cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
    cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
    return 0;
  }
  else
  {
    board.resize(teams);

    for(int r=0; r<board.size(); r++)
    {
      board[r].resize(periods);
    }
  }

  //make scoreboard and fill it with zeros
  
  for(int r=0; r<board.size(); r++)
  {
    for(int c=0; c<board[r].size(); c++)
    {
      board[r][c] = 0;
    }
  }

   //once created, display the scoreboard
  
  cout<<"SCOREBOARD\n";

  for(int r=0; r<board.size(); r++)
  { 
    cout<<"Player "<< playerCount <<": ";
    for(int c=0; c<board[r].size(); c++)
    {
      cout<< board[r][c] <<"|";
    }
    cout<<endl;
    playerCount++;
  }
   
  
  
  return 0;
}
