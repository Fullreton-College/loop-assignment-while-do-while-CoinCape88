#include <iostream>

using namespace std;
int main()
{
    cout << "How many years do you want projected?" << endl;
    int startingyears;
    cin >> startingyears;
    int total;
    int feechange;
    int currentfee;
    currentfee = 3000;
    int years = startingyears;

    while (years > 0)
    {
        feechange = currentfee * 0.03;
        currentfee = currentfee + feechange;
        years = years - 1;
        cout << "The total projected fee for year " << (startingyears - years) << " is: " << currentfee << "." << endl;
    }
    

    return 0;
}