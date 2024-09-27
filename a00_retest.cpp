// Program Description:
// This program prints the maximum value
// of five numbers input by a user.

#include <iostream>
#include <string>
using namespace std;


int main()
{
    int user_input[5];

    for (int i = 0; i < 5; i++)
    {    
        cin >> user_input[i];
    }
    
    int max_val = user_input[0];
    for (int current_val = 1; current_val < 5; current_val++)
    {
        if (user_input[current_val] > max_val)
        {
            max_val = user_input[current_val];
        }
    }
    cout << max_val;
    return 0;
}

/* I did have a bit of trouble with this retest but it wasnt too bad. Overall I found that because i have been refamiliarizing myself with for loops, 
and if statements, it was significanyly easier. I do like this exercise overall and would like to do this again in the future.*/