#include <iostream>
#include <iomanip>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    std::cin.clear();
    fflush(stdin);

    double balance;
    std::cout<<"Enter initial account balance: \n";
    std::cin>>balance;
    int choice = 0;

    do {
        std::cout << "************************\n";
        std::cout << "Enter your choice:  \n";
        std::cout << "************************\n";
        std::cout << "1. show balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice) {
            case 1:
                showbalance(balance);
                break;
            case 2:
                balance = balance + deposit();
                showbalance(balance);
                break;
            case 3:
                balance = balance - withdraw(balance);
                showbalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting!\n";
                break;
            default:
                std::cout << "Invalid choice\n";
                break;

        }
    } while (choice != 4);

    return 0;
}
double deposit(){
    double amount = 0;
    std::cout<<"Enter amount to be deposited:  ";
    std::cin>>amount;
    if(amount>0){
        return amount;
    }else{
        std::cout<<"That's not valid amount:";
        return 0;
    }
}
double withdraw(double balance){
    double amount=0;
    std::cout<<"Enter amount to be withdraw: ";
    std::cin>>amount;

    if(amount >balance) {
        std::cout << "insufficient funds\n";
        return 0;
    } else if(amount<0){
         std::cout<<"That's not valid amount\n";
        return 0;
    }else return amount;

        return 0;
    }
void showbalance(double balance){
    std::cout<<"Your balance is: $"<<std::setprecision(2)<<std::fixed<<balance<<"\n";
}
