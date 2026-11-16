// chapter11_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(const string& s)
{
    string temp;
    vector<string> result;
    for(size_t i = 0; i < s.size();i++)
    {
        if(s[i] != ',')
        {
            temp += s[i];
        }else{
            result.push_back(temp);
            temp.clear();
        }
    }
    result.push_back(temp);
    return result;
}

int main()
{
	return 0;
}
