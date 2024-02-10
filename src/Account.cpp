#include <D:\C++_Programs\C-Banking-System\include\importNeeded.h>

class Account
{
    int account_number;
    char name[50];
    int deposit;
    char type;


public:
    void createAccount();
    void displayAccount();
    
};

void Account::createAccount()
{
    cout <<"\n Enter an account number: ";
    cin >> account_number;
    cout << "\n Enter the name of the account holder only 50 characters allowed: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\n Enter Type of account checking or savings. (C/S): ";
    cin >> type;
    type = toupper(type);
    cout << "Enter the Initial amount of money you want to start the account with. (Saving => 5) (Checking => 10): ";
    cin >> deposit;
    cout << "The account have been created";
}

void Account::displayAccount() {
    cout << "Account number:" << account_number << endl;
    cout << "Account Name:" << name << endl;
    cout << "Account type: " << name << endl;
}




int main() {
    Account person;
    person.createAccount();
    person.displayAccount();
    return 0;
}