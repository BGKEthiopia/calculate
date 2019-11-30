#include<iostream>
using namespace std;

// Version 5.0

double readNumber(int x){
    double num;
    cout<<"Enter number "<<x<<": ";
    cin>>num;
    return num;
}

double add(double x, double y){
    return x+y;
}

double diff(double x, double y){
    return x-y;
}

double mult(double x, double y){
    return x*y;
}

double div(double x, double y){
    if(y==0){
        cout<<"NaN";
    }
    return x/y;
}

void menu(){
    char ch;
    double x,y;

    do{
        cout<<"\nMenu\n\n"
            endl<<"0. Exit"<<
                <<"1. Add"
                <<"2. Difference"
                <<"3. Multipli"
                <<"4. Divide"
            endl<<"\nEnter your choice: ";
            cin>>ch;
        switch(ch){
            case '1':
                x = readNumber(1);
                y = readNumber(2);
                cout<<x<<" + "<<y<<" = "<<add(x,y);
                break;
            case '2':
                x = readNumber(1);
                y = readNumber(2);
                cout<<x<<" - "<<y<<" = "<<diff(x,y);
                break;
            case '3':
                x = readNumber(1);
                y = readNumber(2);
                cout<<x<<" * "<<y<<" = "<<mult(x,y);
                break;
            case '4':
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
