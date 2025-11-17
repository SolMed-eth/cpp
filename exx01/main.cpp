#include <iostream>
#include <string>
#include "Contact.hpp"

int main()
{
    PhoneBook myPhoneBook;
    std::string name;

    while (true)
    {
        std::cout << "Enter one of the commands: ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, name); // Read the entire line 
        // std::cin >> name;
        if (name == "ADD")
            myPhoneBook.addContact();
        else if (name == "SEARCH")
        {
            myPhoneBook.search();
            myPhoneBook.searchByIndex();
        }
        else if (name == "EXIT")
            return 0;
        else
            continue ;
    }
    return 0;
}

