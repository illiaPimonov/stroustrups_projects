// chapter11_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input = "dont't use the as-if rule.";
    cout << input << endl;
    for(size_t i = 0; i < input.size();i++)
    {
        if(input[i] == '.' || input[i] == ';' || input[i] == ',' || input[i] == '?' || input[i] == '-' || input[i] == '\'')
        {
            input[i] = ' ';
        }
    }

    cout << input;
	return 0;
}
