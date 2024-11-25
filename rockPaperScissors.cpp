#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string player;
    string opponent;
    int playerScore = 0;
    int opponentScore = 0;
    string rps[] = { "rock", "paper", "scissors" };

    srand((unsigned int) time(NULL));

    while (true) {
        cout << "Enter rock, paper, or scissors: ";
        getline(cin, player);

        if (player != "rock" && player != "paper" && player != "scissors") {
            break;
        }

        opponent = rps[rand() % 3];
        cout << "Opponent chooses " << opponent << endl;

        if (player == opponent) {
            playerScore++;
            opponentScore++;

        }
        else if (player == "rock") {
            if (opponent == "scissors") playerScore++;
            else if (opponent == "paper") opponentScore++;
        }
        else if (player == "paper") {
            if (opponent == "rock") playerScore++;
            else if (opponent == "scissors") opponentScore++;
        }
        else if (player == "scissors") {
            if (opponent == "paper") playerScore++;
            else if (opponent == "rock")opponentScore++;
        }
        cout << "Player: " << playerScore << " Opponent: " << opponentScore << endl;
            
    }

    

    
}
