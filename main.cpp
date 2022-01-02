#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define width 70
#define height 25

// Draw board
void board(){
    for(int i=0;i<height;i++){
        cout<<"\t\t\t#";
        for(int j=0;j<(width-2);j++){
            if(i==0 || i==height-1){
                cout<<"#";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"#\n";
    }
}

int main(){
    board();
}