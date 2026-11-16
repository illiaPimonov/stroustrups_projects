// chapter11_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	set<char> vowels = { 'a','e','i','o','u' };
	fstream f("./source.txt");

	if(!f.is_open())
	{ 
		cout << "Error opening this file" << endl;
	}

	string s;

	while (getline(f, s)) {
		for(size_t i = 0; i < s.size();)
        {
            if(vowels.count(s[i]))
            {
                s.erase(i,1);
            }else {
                i++;
            }
        }
        cout << s << endl;
	}

	f.close();
	return 0;
}
