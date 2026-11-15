// chapter11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::ifstream f("./source.txt");
    std::ofstream out("./output.txt");

    if (!f.is_open() || !out.is_open()){
        std::cerr << "Error while opening thess files";
        return 1;
    }

    std::string s;

    while (std::getline(f, s)) {
        for(int i = 0; i < s.size();i++)
        {
           s[i] = std::tolower(static_cast<unsigned char>(s[i]));
        }
        out << s << std::endl;
    }
    out << "Meme" << std::endl;
    f.close();
    out.close();
    return 0;
}
