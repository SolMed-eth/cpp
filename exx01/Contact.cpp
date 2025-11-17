#include "Contact.hpp"

void Contact::setContact() {
    while (1)
    {
        std::cout << "Enter first name: "<< std::endl;
        // std::cin >> firstName;
        std::getline(std::cin, firstName);
        if(!firstName.empty())
            break;
    }
    while (1)
    {
        std::cout << "Enter last name: "<< std::endl;
        // std::cin >> lastName;
        std::getline(std::cin, lastName);
        if(!lastName.empty())
            break;
    }
    while (1)
    {
        std::cout << "Enter nick name: "<< std::endl;
        // std::cin >> nickname;
        std::getline(std::cin, nickname);
        if(!nickname.empty())
            break;
    }
    while (1)
    {
        std::cout << "Enter phone number: "<< std::endl;
        // std::cin >> phoneNumber;
        std::getline(std::cin, phoneNumber);
        if(!phoneNumber.empty())
            break;
    }
    while (1)
    {
        std::cout << "Enter darkest secret: "<< std::endl;
        // std::cin >> darkestSecret;
        std::getline(std::cin, darkestSecret);
        if(!darkestSecret.empty())
            break;
    }
}

void PhoneBook::search()
{
    std::cout << std::setw(10) << "INDEX" 
              << "|" << std::setw(10) << "FIRST NAME"
              << "|" << std::setw(10) << "LAST NAME"
              << "|" << std::setw(10) << "NICKNAME" << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";

        std::string firtsname = Contacts[i].getFirstName();
        if (firtsname.length() > 10)
            firtsname = firtsname.substr(0, 9) + ".";
        std::cout << std::setw(10) << firtsname << "|";

        std::string lastname = Contacts[i].getLastName();
        if (lastname.length() > 10)
            lastname = lastname.substr(0, 9) + ".";
        std::cout << std::setw(10) << lastname << "|";

        std::string nickname = Contacts[i].getNickname();
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";
        std::cout << std::setw(10) << nickname << std::endl;
    }
}

void PhoneBook::searchByIndex() {
    int cin_index;
    std::cout << "Enter the index of the entry to display: ";
    std::cin >> cin_index;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (cin_index < 1 || cin_index > size) {
        std::cout << "Wrong index, try later." << std::endl;
        return;
    }
    std::cout << "First name: " << Contacts[cin_index - 1].getFirstName() << std::endl;
    std::cout << "Last name: " << Contacts[cin_index - 1].getLastName() << std::endl;
    std::cout << "Nickname: " << Contacts[cin_index - 1].getNickname() << std::endl;
    std::cout << "Phone number: " << Contacts[cin_index - 1].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << Contacts[cin_index - 1].getDarkSecret() << std::endl;
}
