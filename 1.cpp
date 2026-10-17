#include <iostream>
#include <cmath>
using namespace std;
int main(){
    while (true){
        setlocale(LC_ALL, "ru_RU.UTF-8");
        float x,res=1;
        int y;
        while(true){
            cout<<"Введите число:";
            if (cin>>x) break;
            cout<<"Ошибка, нужно число!"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        while(true){
            cout<<"Введите степень:";
            if (cin>>y) break;
            cout<<"Ошибка, нужно число!"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        int n = abs(y);
        for(int i=0; i<n; i++){
            res = res * x;
            }
        if(y<0){
            res = 1/res;
        }
        cout<<res<<endl;
    }
    return 0; 
}