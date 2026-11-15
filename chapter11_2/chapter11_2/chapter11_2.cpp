// chapter11_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::ifstream f("./source.txt");

    if (!f.is_open()) {
        std::cerr << "Error while opening this file";
        return 1;
    }

    std::string s;
    std::string word = "Coding";
    size_t line = 0;

    while (std::getline(f, s)) {
        line++;
        size_t pos = s.find(word);
        if (pos != std::string::npos) {
            std::cout << "Word at line:" << line << std::endl;
        }
    }
    

    f.close();
    return 0;
}
