#ifndef BUREAUCRAT_CPP
# define BUREAUCRAT_CPP

#include <string>

class   Bureaucrat {
    private:
        std::string name;
        int grade;

    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

};
#endif