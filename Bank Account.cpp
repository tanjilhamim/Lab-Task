#include <iostream>
#include <string>

using namespace std;

struct BankAccount {
    int accountNumber;
    string accountHolderName;
    double accountBalance;
};

int main() {
    BankAccount account;
    int choice;
    double amount;

    while (true) {
        cout << "Bank Account Menu";
        cout << "Create Account\n";
        cout << " Deposit Money\n";
        cout << " Withdraw Money\n";
        cout << " Display Account Details\n";
        cout << " Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

                cout << "Enter Account Number ";
                cin >> account.accountNumber;
                cout << "Enter Account Holder's Name ";
                getline(cin, account.accountHolderName);
                cout << "Enter Initial Account Balance";
                cin >> account.accountBalance;
                cout << "Account created successfully";


                cout << "Enter the amount to deposit";
                cin >> amount;
                account.accountBalance += amount;
                cout << "Deposit of $" << amount << " successful";


                cout << "Enter the amount to withdraw";
                cin >> amount;
                if (amount <= account.accountBalance) {
                    account.accountBalance -= amount;
                    cout << "Withdrawal of $" << amount << " successful";
                } else {
                    cout << "Insufficient balance. Withdrawal failed";
                }


                cout << "Account Number: " << account.accountNumber << endl;
                cout << "Account Holder's Name: " << account.accountHolderName << endl;
                cout << "Account Balance: $" << account.accountBalance << endl;


                cout << "Exiting the program. Goodbye";
                return 0;
            default:
                cout << "Invalid choice. Please try again.";
        }
    }

    return 0;
}
