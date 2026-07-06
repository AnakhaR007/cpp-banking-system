#include <iostream>
using namespace std;

int choice;
int depositAmount;
int withdrawAmount;
int balance=500;
char confirm;



//Displays the menu options
void ShowMenu(){
cout<<"Welcome to Ana's bank!"<<endl;
cout<<"What would you like to do?"<<endl;

cout<<"1. Deposit"<<endl;
cout<<"2. Withdraw"<<endl;
cout<<"3. Check Balance"<<endl;
cout<<"4. Exit"<<endl;
}


//Displays deposit options and reads in deposit amount. 
void DepositMoney(){
cout<<"How much would you like to deposit? "<<endl;
cin>> depositAmount;
cout<<"Deposit succesfull! "<<endl;
balance=balance+depositAmount;
cout<<"Current balance: $"<<balance<<endl;
}

//Displays Withdrawal options and reads in withdrawal amount. Checks certain conditions too. 
void WithdrawMoney(){
cout<<" Are you sure? Y/N "<<endl;
    cin>>confirm;
    if( confirm=='Y'|| confirm=='y'){
cout<<"How much would you like to withdraw?"<<endl;
cin>>withdrawAmount;
    
if(withdrawAmount>balance)
cout<<"Insufficent funds"<<endl;
    
else{
cout<<"Withdrawal succesful"<<endl;
balance=balance-withdrawAmount;
cout<<"Current balance: $"<<balance<<endl;
}
}

else if( confirm=='N'|| confirm=='n')
cout<<"Withdrawal cancelled"<<endl;
}


//Displays the balance amount. 
void CheckBalance(){
cout<<"Current Balance: $"<<balance<<endl;
}


int main(){

while( choice!= 4){
ShowMenu();
cin>>choice;


if(choice== 1){
    DepositMoney();
}

else if(choice==2){
    WithdrawMoney();
}
    
else if( choice==3){
    CheckBalance();
}

else if(choice==4)
cout<<"Thanks for using Ana's bank. See you soon! "<<endl;

else
cout<<"Inavlid choice"<<endl;

}

}



