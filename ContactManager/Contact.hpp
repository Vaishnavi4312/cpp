#include <bits/stdc++.h>

typedef struct
{
    std::string title;
    std::string name;
    std::string email;

    unsigned long number;
} info;

class Contact
{
public:
    std::vector<info> data;

    // Constructor
    Contact();

    // Member functions

    void add(std::string, std::string, std::string, unsigned long);
    // void add(); // accept details from user

    void list();

    // function to edit details

    void edit();
    void editPhoneNumber();
    void editName();
    void editEmail();

    // delete user from system

    void removeUser();
    void removeUserName();
    void removeUserNumber();
    void removeUserEmail();

    void searchName();
    void searchNumber();
    void searchEmail();

    void backUp();
    void restore();
};