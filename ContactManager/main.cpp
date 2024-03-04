#include "Contact.hpp"

using namespace std;
int main()
{
    Contact cm;
    cm.add("Mr", "sush", "sush@gmail.com", 754125);
    cm.add("Ms", "Vaish", "Vaish@gmail.com", 665211);
    cm.add("Ms", "Subhu", "shubhu@gmail.com", 34561);
    cm.add("Ms", "rutu", "rutu@gmail.com", 985647);
    cm.list();
    cm.edit();
    cm.editPhoneNumber();
    cm.editName();
    cm.editEmail();
    cm.removeUser();
    cm.removeUserName();
    cm.removeUserNumber();
    cm.removeUserEmail();
    cm.searchName();
    // cm.searchNumber();
    cm.searchEmail();
    cm.backUp();
    return 0;
}
