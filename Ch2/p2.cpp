#include <iostream>
#include <string>

int main () {
    std::string name;
    int age;
    std::cout << "Enter your first name and age (followed by enter):\n";
    std::cin >> name >> age;
    std::cout << "Hello, " << name << " (age " << age << ")";
}