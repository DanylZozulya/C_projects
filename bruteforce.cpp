#include "bruteforce.h"

string input_password()
{
    string pas;
    cout << "Input your password -> ";
    cin >> pas;
    return pas;
}

string gen_password(string your_pass)
{
    string gen = string();
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuvwxyz";
    string numbers = "1234567890";
    for (int i = 0;i < your_pass.size();i++)
    {
        gen += '0';
    }
    for (int i = 0;i < your_pass.size();i++)
    {
        for (int letter = 0;letter < alphabet.size();letter++)
        {
            if (alphabet[letter] == your_pass[i])
            {
                gen[i] = alphabet[letter];
                break;
            }
            else{
                for (int number = 0;number < numbers.size();number++)
                {
                    if (numbers[number] == your_pass[i])
                    {
                        gen[i] = numbers[number];
                        break;
                    }
                }
            }
        }
    }
    return gen;


}





