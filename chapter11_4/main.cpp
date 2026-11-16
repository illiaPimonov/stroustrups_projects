// chapter11_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
    int convert = 0;

    input = "411";
    
    if (input.size() >= 2 && input[0] == '0' && input[1] == 'x') {
        convert = stoi(input, nullptr, 0);
        cout << input << "(шестнадцатиричное) " << "превращается в десятичное " << convert << endl;
    } else if (!input.empty() && input[0] == '0') {
        convert = stoi(input, nullptr, 0);
        cout << input << "(восьмиричное) " << "превращается в десятичное " << convert << endl;
    } else {
        cout << input << "(десятичное) "  << "превращается в десятичное " << input << endl;
    }

	return 0;
}
