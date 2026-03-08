#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    int current_guess;
    srand(time(0));          
    int target_number = rand() % 100 + 1;  
    
    cout << "Can you guess my number? Its between 1 and 100." << endl;
    cin >> current_guess;
    while (current_guess != target_number)
    {
        if (current_guess < target_number)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Too high! Try again." << endl;
        }
        cin >> current_guess;
    }

    cout << "Congratulations! You figured out my number!" << endl;
    return 0;
}