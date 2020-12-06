#include "myBank.h"
#include <stdio.h>
#define N 50
#define M 2
double bank_account[N][M]={0};
int count=0;
double ifOpen=0;
void O(double amount){
    if(count!=50){
        bank_account[count][0]=amount;
        bank_account[count][1]=1;
        count+=1;
        printf("New account number is:%d\n",900+count); 
    }
    else {
        printf("Opening new account is'nt possible because the accounts' number above 50\n");
    }
}
void B(int account_number){
    int index=account_number-901;
    if((index>=0 && index<=49)) {
        ifOpen=bank_account[index][1];
        if(ifOpen==1){
            double balance=bank_account[index][0];
            printf("The balance of account number %d is: %0.2lf\n",account_number,balance);
        }
        else{
        printf("This account is closed\n");
        }
    }
    else{
        printf("Invalid account number.\n");
    }
}
void D(int account_number){
    int index=account_number-901;
    ifOpen=bank_account[index][1];
        if(ifOpen==1){
            double amount;
            printf("Please enter the amount to deposit:");
            if(scanf("%lf",&amount)!=1){
                printf("Failed to read the the amount\n");
            }
            else {
                if(amount<0){
                    printf("Cannot deposit a negative amount.\n");
                }
                else{
                    bank_account[index][0]+=amount;
                    double balance=bank_account[index][0];
                    printf("The new balance is: %0.2lf\n",balance);
                }
            }
        }
        else {
            printf("This account is closed\n");
        }
}
void W(int account_number){
    int index=account_number-901;
    ifOpen=bank_account[index][1];
    if(ifOpen==1){
        double amount;
        printf("Please enter the amount to withdraw:");
        if(scanf("%lf",&amount)!=1){
            printf("Failed to read the the amount\n");
        }
        else{  
            double balance=bank_account[index][0];
            if(amount>balance){
                printf("Cannot withdraw more that the balance\n");
            }
            else{
                double balance=bank_account[index][0];
                balance-=amount;
                bank_account[index][0]=balance;
                printf("The new balance is: %0.2lf\n",balance);
            }
        }
    }
    else{
        printf("This account is closed\n");
    }
}
void C(int account_number){
    int index=account_number-901;
    if((index>=0 && index<=49)){
        ifOpen=bank_account[index][1];
        if(ifOpen==1){
            bank_account[index][0]=0;
            bank_account[index][1]=0;
            count-=1;
            printf("Closed account number %d\n",account_number);
        }
        else {
        printf("This account is already closed\n");
        }
    }
    else{
        printf("Invalid account number.\n");
    }
}
void I(){
    int rate;
    printf("Please enter intreset rate:");
    if(scanf("%d",&rate)!=1){
        printf("Failed to read the interest ratet\n");
    }
    if(rate<0){
        printf("Invalid interest rate\n");
               
    }
    for(int i=0;i<N;i++){
        if(bank_account[i][1]==1){
           bank_account[i][0]*=(1+rate/100);   
        }
    }
    printf("\n");
}
void P(){
    double balance;
    int index;
    for(int i=0;i<N;i++){
        if(bank_account[i][1]==1){
            index=900+i+1;
            balance=bank_account[i][0];
            printf("The balance of account number %d is: %0.2lf\n",index,balance);
        }
    }
}
void E(){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            bank_account[i][j]=0;
        }
    }
    count=0;  
}
