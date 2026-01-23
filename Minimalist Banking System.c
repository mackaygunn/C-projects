#include <stdio.h>

struct Account{

    int accountNumber;
    float balance;
    float transaction[10];
    int transactionCount;
 
};

//deposit
void deposit(struct Account *acc){

    float amount; 
    int i;

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (amount <=0){
        printf("Invalid amount!");
        return;
    }

    acc -> balance += amount;

    printf("current balance: %.2f\n", acc->balance);
    printf("transaction recorded at index[%d]\n", acc->transactionCount);

        //storing in history
    if (acc->transactionCount < 10){
        acc->transaction[acc->transactionCount] = amount;
        acc->transactionCount++;
    }

    printf("Depsit is successful!\n");
}

//withdraw
void withdraw(struct Account *acc){

    float amount; 

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount > acc->balance){
        printf(" [ERROR] : insufficient account balance!\n");
        printf("Current balance: %f\n", acc->balance);
        printf("Transaction cancelled!\n");
    }
    else{
        acc->balance -= amount;
        printf("Transaction complete!\n");
        printf("current balance: %.2f\n", acc->balance);
    }

    //storing in history
    if (acc->transactionCount <10){
        acc->transaction[acc->transactionCount] = -amount;
        acc ->transactionCount++;
    }
}

//view balance

void  viewbalance(struct Account *acc){

    float amount; 
    
    printf("--- Account Summary ---\n");

    printf("Account number: %d\n", acc->accountNumber);
    printf("Current Balance: %f\n", acc->balance);
}

//view history
void viewHistory(struct Account *acc){

    float amount;

    printf("--- Transaction History ---\n");

    if (acc->transactionCount == 0){
        printf("No transactions yet!\n");
    }

    for (int i; i < acc->transactionCount; i++){

        printf("%d. %.2f\n", i + 1, acc->transaction[i]);
    }
    printf("---------------------------\n");
}

int main(){

    int choice;
    struct Account myAcc = {25300082, 0, {0}, 0};

    while(1) {
        printf("\n---BANKING SYSTEM ---\n");
        printf(" 1. Deposit\n 2. Withdraw\n 3. View Balance\n 4. Transaction History\n 5. Exit\n");

        printf("Select option: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 5){
            printf("Invalid input. Please enter a number between 1 and 5.\n");
            while(getchar() != '\n');
            return 1;
        }

        switch(choice){
            case 1: deposit(&myAcc);
            break;

            case 2: withdraw(&myAcc);
            break;

            case 3: viewbalance(&myAcc);
            break;

            case 4: viewHistory(&myAcc);
            break;

            default : printf("Invalid choice!\n");
        }

        if (choice == 5){
            printf("Thank you for banking with us!");
            break;
        }
    }

    return 0;
}