#include <iostream>
#include <string>

int main()
{
    std::string words = "qwerty empty";

    std::cout << "Current string: " << words << std::endl;

    std::cout << "Current string length: " << words.length() << std::endl;

    std::cout << "First string element: " << words.front() << std::endl;

    std::cout << "Last string element: " << words.back() << std::endl;

}

