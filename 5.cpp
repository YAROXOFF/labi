#include <iostream>
#include <bitset>
using namespace std;
int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    long long x,y;
    while (true){
        cout<<"Введите число:";
        if(!(cin>>x)){
        cout<<"Ошибка, введите число!"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if(x==0){
            cout<<"Число должно не равняться 0"<<endl;

        } else if(x<0){
            cout<<"Число должно быть положительным"<<endl;
        }
        else{
            break;
        }   
    }
    while (true){
        cout<<"В какую систему переводим (2, 8, 16):";
        if(!(cin>>y)){
        cout<<"Ошибка, введите число!"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if(y!=2 && y!=8 && y!=16){
            cout<<"Ошибка, перевод выполняется только в (2, 8, 16)"<<endl;
        }
        else{
            break;
        }
    }
    if (y==2){
        string b = bitset<64>(x).to_string();
        cout << b.substr(b.find('1')) << endl;
    } else if(y==8){
        cout<<oct<<x;
    } else if(y==16){
        cout<<hex<<uppercase<<x;
    }
    return 0;
}
