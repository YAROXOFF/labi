#include <iostream>
using namespace std;
int main(){
    while(true){
        setlocale(LC_ALL, "ru_RU.UTF-8");
        int n;
        while(true){
            cout<<"Введите границу диапазона:";
            if(cin>>n) break;
            cout<<"Ошибка, нужно число!"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        int x=0, y=0;
        while(x<=abs(n)){
            if(x%5==0){
                y += x;
            }
            x++;    
        }
        if(n>0){
        cout<<y<<endl;
        }
        if(n<0){
            cout<<y*-1<<endl;
        }
        if(n==0){
            cout<<0<<endl;
        }
    } 
    return 0;
}