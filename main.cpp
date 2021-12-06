#include <iostream>
#include <string>

int main() {
    std::string words[12];

    std::cout << "Give me an adjective: ";
    std::cin >> words[0];

    std::cout << "Give me a singular noun: ";
    std::cin >> words[1];

    std::cout << "Give me a verb: ";
    std::cin >> words[2];    
    
    std::cout << "Give me a proper noun: ";
    std::cin >> words[3];
    
    std::cout << "Give me a verb: ";
    std::cin >> words[4];
    
    std::cout << "Give me an emotion: ";
    std::cin >> words[5];

    std::cout << "Give me a verb: ";
    std::cin >> words[6];

    std::cout << "Give me a singular noun: ";
    std::cin >> words[7];

    std::cout << "Give me a verb: ";
    std::cin >> words[8];

    std::cout << "Give me an adjective: ";
    std::cin >> words[9];

    std::cout << "Give me a verb: ";
    std::cin >> words[10];

    std::cout << "Give me a proper noun: ";
    std::cin >> words[11];

    std::cout << "I want to create a(n) " << words[0] << " " << words[1] << " that can " << words[2] << ".\n";
    std::cout << "I shall call it " << words[3] << ".\n";
    std::cout << words[3] << " will be so great that it'll also " << words[4] << " better than any other " << words[1] << ".\n";
    std::cout << "Everyone who sees it will be so " << words[5] << " that they'll " << words[6] << ".\n";
    std::cout << "I've also decided that I want to give " << words[3] << " a(n) " << words[7] << " for a friend.\n";
    std::cout << "Now they can " << words[8] << " together.\n";
    std::cout << "The " << words[7] << " will simply be the most " << words[9] << " " << words[7] << " ever.\n";
    std::cout << "It can also " << words[10] << " better than " << words[3] << " can.\n";
    std::cout << "This one shall be named " << words[11] << ".\n";
    std::cout << "Together they are the ultimate duo.\n";

}