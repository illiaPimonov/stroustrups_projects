// chapter11_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input = "don't Use The As-if Rule.";
    cout << input << endl;
    for(size_t i = 0; i < input.size();i++)
    {
        input[i] = tolower(input[i]);
    }
    cout << input << endl;
    size_t position = input.find("don't");

    if(position != string::npos)
    {
        input.replace(position,5, "do not");
    }

    cout << input;
	return 0;
}
