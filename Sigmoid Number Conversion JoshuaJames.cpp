#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double user_input;
    double user_input_neg;
    float sigmoid;
    cout << "Enter a value for x: \n";
    cin >> user_input;
    user_input_neg = -user_input;
    sigmoid = 1/(1+exp(user_input_neg));
    cout << "The sigmoid for x=" << user_input << " is " << sigmoid;
}
