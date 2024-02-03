// Program to create guess game
#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main()
{
    srand(time(0));
    int randomnumber = rand() % 100 + 1;
    int level, guess;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << endl;
    cout << "Try to guess the number between 1 and 100.\n"
         << endl;

    cout << "Choose your difficulty level." << endl;
    cout << "Level 1:Easy Level" << endl;
    cout << "Level 2:Intermediate Level" << endl;
    cout << "Level 3:Hard Level\n"
         << endl;
    cout << "Enter difficulty level:" << endl;
    cin >> level;
    if (level == 1)
    {
        cout << "You have 5 chances." << endl;
        int leftchance = 5;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the number:" << endl;
            cin >> guess;
            if (guess == randomnumber)
            {
                cout << "Congratulations! You guessed it right!" << endl;
            }
            else if (guess > randomnumber)
            {
                cout << "The guess is too high!" << endl;
            }
            else
            {
                cout << "The guess is low!" << endl;
            }
            leftchance--;
            if (leftchance == 0)
            {
                cout << "Better luck next time!" << endl;
                cout << "The number is:" << randomnumber << endl;
            }
        }
    }
    if (level == 2)
    {
        cout << "You have 3 chances." << endl;
        int leftchance = 3;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter the number:" << endl;
            cin >> guess;
            if (guess == randomnumber)
            {
                cout << "Congratulations! You guessed it right!" << endl;
            }
            else if (guess > randomnumber)
            {
                cout << "The guess is too high!" << endl;
            }
            else
            {
                cout << "The guess is low!" << endl;
            }
            leftchance--;
            if (leftchance == 0)
            {
                cout << "Better luck next time!" << endl;
                cout << "The number is:" << randomnumber << endl;
            }
        }
    }
    if (level == 3)
    {
        cout << "You have 2 chances." << endl;
        int leftchance = 2;
        for (int i = 0; i < 2; i++)
        {
            cout << "Enter the number:" << endl;
            cin >> guess;
            if (guess == randomnumber)
            {
                cout << "Congratulations! You guessed it right!" << endl;
            }
            else if (guess > randomnumber)
            {
                cout << "The guess is too high!" << endl;
            }
            else
            {
                cout << "The guess is low!" << endl;
            }
            leftchance--;
            if (leftchance == 0)
            {
                cout << "Better luck next time!" << endl;
                cout << "The number is:" << randomnumber << endl;
            }
        }
    }
    return 0;
}
