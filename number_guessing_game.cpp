#include <iostream>
#include <ctime>
#include <cctype>
using std::cout;
using std::cin;

int main()
{
    cout<<"welcome to ilyooxas number guessing game\nwould you like to play?(y/n)\n";
    std::string response;
    int guess;
    cin>>response;

    if(std::tolower(response[0]) == 'y')
    {

    srand(time(0));
    int num = rand() % 100 +1;

    cout<<"guess a number between 1-100\n";

    do {
            cin >> guess;

            if(guess == num) {
                cout << "congrats!! You got it!\n";
            }
            else if(guess > num) {
                cout << "your guess is too high. Try again:\n";
            }
            else if(guess < num) {
                cout << "guess is too low. Try again:\n";
            }
        } 
        while (guess != num);

    }
    else
    {
        cout<<"then why run me?????";
    }





}
