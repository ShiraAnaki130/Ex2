#include "myBank.h"
#include <stdio.h>
int main(){
    double amount;
    int account_number;
    double rate;
    char x;
    printf("Please choose the operation you would like by it uniqe char:\n O for opening a new acount\n B for checking the balance of the acount\n D for depositing money \n W for withdrawing money \n C for closing account\n I for adding an interest to every open account\n P for printing all the opened account\n E for closing all the accounts and exit this program");
    if(scanf(" %c",&x)!=1){
            printf("Error! the input is'nt correct.");
            return 0;
    }
    while(x != 'E'){
        printf("your choice: %c\n",x);
        switch(x){
            case 'O': 
                printf("For opening new account please enter the initial deposit amount you would like to put\n");
                if(scanf("%lf",&amount)!=1){
                    printf("Error! the input is'nt correct.");
                    return 0;
                }
                else{O(amount);}
                break;
            case 'B':
                printf("For Balance Inquiry please enter your account number\n");
                if(scanf("%d",&account_number)!=1){
                    printf("Error! the input is'nt correct.");
                    return 0;
                }
                else{B(account_number);}
                break;
            case 'D':
                printf("For depositing please enter your account number,and the amount of the money you would like to deposit\n");
                if(scanf("%d%lf",&account_number,&amount)!=2){
                    printf("Error! the input is'nt correct.");
                    return 0;
                }
                else{D(account_number,amount);}
                break;
            case 'W':
                printf("For withdrawing please enter your account,and the amount of the money you would like to withdraw\n");
                if(scanf("%d%lf",&account_number,&amount)!=2){
                    printf("Error! the input is'nt correct.");
                    return 0;
                }
                else{W(account_number,amount);}
                break;
            case 'C':
                printf("For closing the account please enter your account number\n");
                if(scanf("%d",&account_number)!=1){
                    printf("Error! the input is'nt correct.");
                    return 0;
                }
                else{C(account_number);}
                break;
            case 'I': 
                printf("Please enter the intreset rate\n");
                if(scanf("%lf",&rate)!=1){
                    printf("Error! the input is'nt correct.");
                    return 0;
                }
                else{I(rate);}
                break;
            case 'P':
                P();
                break;        
        }
        printf("Please choose the operation you would like by it uniqe char, enter E for exit\n");
        if(scanf(" %c",&x)!=1){
            printf("Error! the input is'nt correct.");
            return 0;
        }
    }
    E();
    return 0;
}