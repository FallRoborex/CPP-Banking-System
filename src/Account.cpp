#include <D:\C++_Programs\C-Banking-System\include\importNeeded.h>

class Account
{

private:
    char name[50];
    double balance;
    char type;
    int account_number;

public:
    void createAccount();
    void displayAccount() const;
    void deposite(double amount);
    void withdrawl(double amount);
    double get_balance();
};


void Account::createAccount()
{
    cout << "\nEnter the name of the account holder only 50 characters allowed: ";
    cin.getline(name, 50);
    cout << "\nEnter Type of account checking or savings. (C/S): ";
    cin >> type;
    type = toupper(type);
    cout << "Enter the Initial amount of money you want to start the account with. (Saving => 5) (Checking => 10): ";
    cin >> balance;
    cout << "The account have been created" << endl;
    account_number++;
}

void Account::displayAccount() const{
    cout << "Account number:" << account_number << endl;
    cout << "Account Name:" << name << endl;
    cout << "Account type: " << type << endl;
    cout << "Account Balance: " << balance << endl;
}

void Account::deposite(double value){
    balance += value;
    cout << "Deposit Completed\n";
}

void Account::withdrawl(double value){
    balance -= value;
    
    if(balance <= 0) {
        balance += value;
        cout << "Error: insufficient value";
    }
    else {
        cout << "withdrawl completed" << endl;
    }


}

double Account::get_balance(){
    return balance;
}





int main() {
    Account person;
    person.createAccount();
    person.displayAccount();
    person.deposite(10000);
    cout << "Balance: " << person.get_balance() << endl;
    return 0;
}