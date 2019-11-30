#include<iostream>
using namespace std;

// Version 2.1

double readNumber(int x){
    double num;
    cout<<"Enter number "<<x<<": ";
    cin>>num;
    return num;
}

double add(double x, double y){
    return x+y;
}

void menu(){
    char ch;
    double x,y;

    do{
        cout<<"\nMenu\n\n"
            endl<<"0. Exit"<<
                <<"1. Add"
            endl<<"\nEnter your choice: ";
            cin>>ch;
        switch(ch){
            case '1':
                x = readNumber(1);
                y = readNumber(2);
                cout<<x<<" + "<<y<<" = "<<add(x,y);
                break;
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
