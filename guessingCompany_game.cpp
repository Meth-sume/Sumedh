#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;
int main()
{
    vector < string > companies = {"BMW", "TATA", "HONDA", "SUZUKI", "MERCEDES", "PORSCHE"};
    string guess;
    int cash = 100;
    int bet;

    srand(time(0));

    cout << "Welcome to the Car Company Guessing Game!" << endl;
    cout << "You have $" << cash << "in chips." << endl;

    while(cash > 0)
    {
        int index = rand() %
        companies.size();

        string selectedCompany = companies[index];

        cout << endl << "Place your bet (You have $" << cash <<") : ";
        cin >> bet;

        if(bet > cash || bet <= 0)
        {
            cout << "Invalid bet. Try again." << endl;
            continue;
        }

        cout << "Guess the company(BMW, TATA, HONDA, SUZUKI, MERCEDES, PORSCHE) : ";
        cin >> guess;

        string correctGuess = selectedCompany;
        for(auto &c : correctGuess)c = toupper(c);

        if(guess == correctGuess)
        {
            cout << "Correct! The company was " << selectedCompany << ". You win $" << bet*2 << "!" << endl;
            cash += bet;
        }
        else
        {
            cout << "Wrong! The company was " << selectedCompany << ". You lose $" << bet << "." << endl;
            cash -= bet;
        }

        if(cash <= 0)
        {
            cout << endl << "You've run out of chips. Game over!" << endl;
        }
        else
        {
            char choice;
            cout << "Do you want to keep playing? (y/n) : ";
            cin >> choice;
            if(choice != 'y' && choice != 'Y')
            {
                cout << endl << "You're leaving the game with $" << cash << "." << endl;
                break;
            }
        }
    }
    return 0;
}