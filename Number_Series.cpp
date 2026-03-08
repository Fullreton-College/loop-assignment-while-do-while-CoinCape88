#include <iostream>

using namespace std;
int main()
{

    cout << "Please enter any series, one at a time, of whole numbers or integers, and enter -99 to end the series." << endl;
    double big_number;
    int small_number;
    int current_number;
    cin >> current_number;

    if (current_number == -99)
    {
        cout << "No numbers were entered." << endl;
        return 0;
    }

    small_number = current_number;
    big_number = current_number;

    while (current_number != -99)
    {
        cin >> current_number;
        if (current_number != -99)
        {
            if (current_number > big_number)
            {
                big_number = current_number;
            }
            if (current_number < small_number)
            {
                small_number = current_number;
            }
        }
        
    }

    cout << "The largest number in the series is: " << big_number << "." << endl;
    cout << "The smallest number in the series is: " << small_number << "." << endl;

    return 0;
}