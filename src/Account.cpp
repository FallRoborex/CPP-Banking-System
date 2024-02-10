#include <D:\C++_Programs\C-Banking-System\include\importNeeded.h>

class Account
{
    int acount_number;
    char name[50];
    int deposit;
    char type;


public:
    void createAccount();
    void displayAccount();
    
};

void Account::createAccount()
{
    cout <<"\n Enter an acount number: ";
    cin >> acount_number;
    cout << "\n Enter the name of the acount holder only 50 characters allowed: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\n Enter Type of account checking or savings. (C/S): ";
    cin >> type;
    type = toupper(type);
    cout << "Enter the Initial amount of money you want to start the account with. (Saving => 5) (Checking => 10)";
    cin >> deposit;
    cout << "The account have been created";

}


int main() {
    cout << "Testing";
    
    return 0;
}