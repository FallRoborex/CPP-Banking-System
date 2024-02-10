#include <D:\C++_Programs\C-Banking-System\include\importNeeded.h>

class Account
{

private:
    char name[50];
    int deposit;
    char type;
    int account_number;

public:
    void createAccount();
    void displayAccount();
};


void Account::createAccount()
{
    cout << "\nEnter the name of the account holder only 50 characters allowed: ";
    cin.getline(name, 50);
    cout << "\nEnter Type of account checking or savings. (C/S): ";
    cin >> type;
    type = toupper(type);
    cout << "Enter the Initial amount of money you want to start the account with. (Saving => 5) (Checking => 10): ";
    cin >> deposit;
    cout << "The account have been created" << endl;
    account_number++;
}

void Account::displayAccount() {
    cout << "Account number:" << account_number << endl;
    cout << "Account Name:" << name << endl;
    cout << "Account type: " << type << endl;
    cout << "Account Balance: " << deposit << endl;
}


int main() {
    Account person;
    person.createAccount();
    person.displayAccount();
    return 0;
}