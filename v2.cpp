#include<iostream>
#include<string.h>
using namespace std;
int main(){
     int s_number = 1+(rand()%100),level;
    int c,turnleft;
cout<<"Enter the level of game you want"<<endl<<"1.easy(8 chances)"<<endl<<"2.medium(6 chances)"<<endl<<"3.difficult(5 chances)"<<endl;
    cin>>level;
    if(level==1){
        cout<<"you have 8 chances"<<endl;
        turnleft=8;
    }
    else{
        if(level==2){
            cout<<"you have 6 chances"<<endl;
            turnleft=6;
        }
        else{
            cout<<"you have 3 chances"<<endl;
            turnleft=3;
        }
    }
    while(turnleft>0){
        cout<<"guess the secret number:";
        cin>>c;
        if(c==s_number){
            cout<<"Comgratulation you won the game"<<endl;
            break;
        }
        else if(c>s_number){
            cout<<"sorry! This is wrong choice"<<endl;
            cout<<"your choice is greater than the serect number"<<endl;
        }
        else{
             cout<<"sorry! This is wrong choice"<<endl;
            cout<<"your choice is smaller than the serect number:"<<endl;
        }
        turnleft--;
        cout<<"you have"<<turnleft<<"turns left"<<endl;
    }
    return 0;
        }