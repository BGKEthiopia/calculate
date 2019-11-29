#include<iostream>
using namespace std;

double readNumber(int x){
    double num;
    cout<<"Enter number "<<x<<": ";
    cin>>num;
    return num;
}

void menu(){
    char ch;
    double x,y;

    do{
        cout<<"\nMenu\n\n"
            endl<<"0. Exit"<<
            endl<<"\nEnter your choice: ";
            cin>>ch;
        switch(ch){
            case '0':
                return;
            default:
                cout<<"\a";
                break;
        }
    }while(ch!=0);
}

int main(){
    menu();
}
