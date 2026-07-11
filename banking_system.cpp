#include <iostream>
using namespace std;

//int choice;
//int depositAmount;
//int withdrawAmount;
//int balance=500;
//char confirm;



//Displays the menu options
void ShowMenu(){
cout<<"Welcome to Ana's bank!"<<endl;
cout<<"What would you like to do?"<<endl;

cout<<"1. Deposit"<<endl;
cout<<"2. Withdraw"<<endl;
cout<<"3. Check Balance"<<endl;
cout<<"4. Transfer Money"<<endl;
cout<<"5. Exit"<<endl;
}


//Displays deposit options and reads in deposit amount. 
void DepositMoney( int &balance){
    int depositAmount;
cout<<"How much would you like to deposit? "<<endl;
cin>> depositAmount;

while (depositAmount<=0){
cout<<"Inavlid input. Please enter a postive number"<<endl;
cin>> depositAmount;
}
//else{
cout<<"Deposit succesfull! "<<endl;
balance=balance+depositAmount;
cout<<"Current balance: $"<<balance<<endl;
}


//Displays Withdrawal options and reads in withdrawal amount. Checks certain conditions too. 
void WithdrawMoney( int &balance  ){
    char confirm;
    int withdrawAmount;
cout<<" Are you sure? Y/N "<<endl;
    cin>>confirm;
    if( confirm=='Y'|| confirm=='y'){
cout<<"How much would you like to withdraw?"<<endl;
cin>>withdrawAmount;
    
while(withdrawAmount>balance || withdrawAmount<=0 ){
    if(withdrawAmount>balance){
cout<<"Insufficent funds. Please try again"<<endl;
    }
else if( withdrawAmount<=0){
cout<<"Invalid input. Please enter a positive number"<<endl;
}
cin>>withdrawAmount;
}

cout<<"Withdrawal succesful"<<endl;
balance=balance-withdrawAmount;
cout<<"Current balance: $"<<balance<<endl;

}

else if( confirm=='N'|| confirm=='n')
cout<<"Withdrawal cancelled"<<endl;
}


//Displays the balance amount. 
void CheckBalance(int balance){
cout<<"Current Balance: $"<<balance<<endl;
}

void TransferMoney(int &balance){
    int AccountNumber;
    double TransferAmount;
    char TransferConfirmation;
    if( balance==0){
        cout<<"Insufficinet funds. Balance is 0 "<<endl;
        return;
    }
cout<<" Please enter recipient account number "<<endl;
cin>> AccountNumber;
cout<<"Please enter amount to transfer:  "<<endl;
cin>> TransferAmount;
while( TransferAmount<=0 || TransferAmount>balance){
    if( TransferAmount<=0){
    cout<<" Error. Please enter a postive amount "<<endl;
    cin>> TransferAmount;
    }
else if( TransferAmount>balance){
cout<< " Insufficent funds. Please try again"<<endl;
cin>> TransferAmount;
}
}
cout<<"Are you sure? Y/N "<<endl;
cin>> TransferConfirmation;
while( TransferConfirmation!='Y' && TransferConfirmation!='y'&& TransferConfirmation!='N'&& TransferConfirmation!='n'){
cout<<" Error. Please enter Y or N "<<endl;
cin>> TransferConfirmation;
}


if( TransferConfirmation=='Y' || TransferConfirmation=='y'){

cout<< "Okay"<< TransferAmount<< "is transfered! "<<endl;
balance= balance- TransferAmount;
cout<<"Remaining balance is: "<<balance<<endl;
}

else if( TransferConfirmation=='N' || TransferConfirmation=='n'){
    cout<<"Transaction cancelled "<<endl;
}

}

int main(){

int balance=500;
int choice;


while( choice!= 5){
ShowMenu();
cin>>choice;



if(choice== 1){
    DepositMoney(balance);
}

else if(choice==2){
    WithdrawMoney(balance);
}
    
else if( choice==3){
    CheckBalance(balance);
}

else if( choice==4){

TransferMoney(balance);

}

else if(choice==5)
cout<<"Thanks for using Ana's bank. See you soon! "<<endl;

else
cout<<"Invalid choice. Pls try again "<<endl;

}

}



