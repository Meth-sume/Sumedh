/*#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int guess, number, attempts = 0, max_attempts = 5;
    int cash = 100;
    int bet;

    srand(time(0));
    cout << "Welcome to the Casino Number Guessing Game!" << endl;
    cout << "You have $" << cash << " in chips" << endl;

    while (cash > 0)
    {
        number = rand()% 10 + 1;
        cout << endl << "Place your bet (You have $" << cash << ") : ";
        cin >> bet;

        if (bet > cash || bet <= 0)
        {
            cout << "Invalid bet. Try again." << endl;
            continue;
        }

        cout << "Guess the number between 1 and 10 : ";
        cin >> guess;
        attempts++;

        if (guess == number)
        {
            cout << "WOW!, You guessed right! You win $" << bet*2 << "!" << endl;
            cash += bet;
        }
        else
        {
            cout << "OOPS!, Wrong guess! The number was " << number << ". You lose $" << bet << "." << endl;
            cash -= bet;
        }

        if (cash <= 0)
        {
            cout << endl << "You've run out of chips. Game over!" << endl;
        }
        else
        {
            char choice;
            cout << "Do you want to keep playing? (y/n) : ";
            cin >> choice;

            if (choice != 'y' && choice != 'Y')
            {
                cout << endl << "Your're leaving the casino with $" << cash << "." << endl;
                break;
            }
        }
    }
    return 0;
}*/


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int guess, number, attempts = 0, max_attempts = 5;
    int cash = 100;
    int bet;

    srand(time(0));
    cout << "Welcome to the Casino Dice Number Guessing Game!" << endl;
    cout << "You have $" << cash << " in chips" << endl;

    while (cash > 0)
    {
        number = rand()% 6 + 1;
        cout << endl << "Place your bet (You have $" << cash << ") : ";
        cin >> bet;

        if (bet > cash || bet <= 0)
        {
            cout << "Invalid bet. Try again." << endl;
            continue;
        }

        cout << "Guess the number from a dice : ";
        cin >> guess;
        attempts++;

        if (guess == number)
        {
            cout << "WOW!, You guessed right! You win $" << bet*2 << "!" << number << endl;
            cash += bet;
        }
        else
        {
            cout << "OOPS!, Wrong guess! The number was " << number << ". You lose $" << bet << "." << endl;
            cash -= bet;
        }

        if (cash <= 0)
        {
            cout << endl << "You've run out of chips. Game over!" << endl;
        }
        else
        {
            char choice;
            cout << "Do you want to keep playing? (y/n) : ";
            cin >> choice;

            if (choice != 'y' && choice != 'Y')
            {
                cout << endl << "Your're leaving the casino with $" << cash << "." << endl;
                break;
            }
        }
    }
    return 0;

}