#include "myBank.h"
#include <stdio.h>
int main(){
    int account_number;
    double amount;
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
                else if(amount<0){
                    printf("Invalid Amount.\n");
                    break;
                }
                else{O(amount);}
                break;
            case 'B':
                printf("Please enter account number:");
                if(scanf("%d",&account_number)!=1){
                    printf("Failed to read the account number\n");
                    break;
                }
                if(!(account_number>=901&&account_number<=950)){
                    printf("Invalid account number\n");
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
                if(!(account_number>=901&&account_number<=950)){
                    printf("Invalid account number\n");
                    break;
                }
                else{D(account_number);}
                break;
            case 'W':
                printf("Please enter account number:");
                if(scanf("%d",&account_number)!=1){
                    printf("Failed to read the account number\n");
                    break;
                }
                if(!(account_number>=901&&account_number<=950)){
                    printf("Invalid account number\n");
                    break;
                }
                else{W(account_number);}
                break;
            case 'C':
                printf("Please enter your account number:");
                if(scanf("%d",&account_number)!=1){
                    printf("Failed to read the account number.\n");
                    break;
                }
                if(!(account_number>=901&&account_number<=950)){
                    printf("Invalid account number\n");
                    break;
                }
                else{C(account_number);}
                break;
            case 'I': 
                I();
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