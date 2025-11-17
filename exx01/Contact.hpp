#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        void    setContact();
        std::string   getFirstName() {
            return firstName;
        }
        std::string   getLastName() {
            return lastName;
        }
        std::string   getNickname() {
            return nickname;
        }
        std::string   getPhoneNumber() {
            return phoneNumber;
        }
        std::string  getDarkSecret() {
            return darkestSecret;
        }
};

class PhoneBook {
    private:
        Contact Contacts[8];
        int     index;
        int     size;
    public:
        PhoneBook()  {
            index = 0;
            size  = 0;
        }
        void    addContact() {
            if (size >= 7)
                index = 0;
            Contacts[index].setContact();
            if (index < 8)
                size++;
            index++;
        };
        void    search();
        void    searchByIndex();
};

#endif
