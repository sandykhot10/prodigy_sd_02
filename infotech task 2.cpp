#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int Number;
    int guess;
    int chances = 0;
    srand(time(0)); 
    Number = rand() % 10 + 1; 
    cout << "\t\t\tWelcome to  Parody Infotech Guess the Number Game\n\n";

    do
    {
        cout << "Enter your guess between 1 and 10: ";
        cin >> guess;
        chances++;

        if (guess > Number){
            cout << "The "<<guess<<" is Too high!\n\n";
        }
        else if (guess < Number){
            cout << "The "<<guess<<" is Too low!\n\n";
        }
        else{
            cout << "wow youu have guessed correct number "<<guess <<"in "<< chances << " tries!\n";
        }
    } 
        while (guess != Number);

	return 0;
}
