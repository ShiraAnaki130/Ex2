#include "myBank.h"
#include <stdio.h>
int main(){
    double amount;
    int account_number;
    double rate;
    char x;
    printf("Please choose a transaction type:\n O-Open Account\n B-Balance Inquiry\n D-Deposit\n W-Withdrawal\n C-Close Account\n I-Interest\n P-Print\n E-Exit\n");
    scanf(" %c",&x);
    while(x != 'E'){
        switch(x){
            case 'O': 
                printf("Please enter amount for deposit:");
                if(scanf("%lf",&amount)!=1){
                    printf("Failed to read the amount.\n");
                    break;
                }
                else{O(amount);}
                break;
            case 'B':
                printf("Please enter account number:");
                if(scanf("%d",&account_number)!=1){
                    printf("Failed to read the account number.\n");
                    break;
                }
                else{B(account_number);}
                break;
            case 'D':
                printf("Please enter account number:");
                if(scanf("%d",&account_number)!=1){
                    printf("Failed to read the account number\n");
                    break;
                }
                printf("Please enter the amount to deposit:");
                if(scanf("%lf",&amount)!=1){
                    printf("Failed to read the the amount.\n");
                    break;
                }
                else{D(account_number,amount);}
                break;
            case 'W':
                printf("Please enter account number:");
                if(scanf("%d",&account_number)!=1){
                    printf("Failed to read the account number\n");
                    break;
                }
                printf("Please enter the amount to withdraw:");
                if(scanf("%lf",&amount)!=1){
                    printf("Failed to read the the amount.\n");
                    break;
                }
                else{W(account_number,amount);}
                break;
            case 'C':
                printf("For closing the account please enter your account number\n");
                if(scanf("%d",&account_number)!=1){
                    printf("Failed to read the account number.\n");
                    break;
                }
                else{C(account_number);}
                break;
            case 'I': 
                printf("Please enter intreset rate:");
                if(scanf("%lf",&rate)!=1){
                    printf("Failed to read the interest ratet.\n");
                    break;
                }
                else{I(rate);}
                break;
            case 'P':
                P();
                break; 
            default:
                printf("Invalid transaction type.\n");
                break;
        }
        printf("Please choose a transaction type:\n O-Open Account\n B-Balance Inquiry\n D-Deposit\n W-Withdrawal\n C-Close Account\n I-Interest\n P-Print\n E-Exit\n");
        scanf(" %c",&x);
    }
    E();
    return 0;
}