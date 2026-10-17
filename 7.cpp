#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int x,y,z,x2,y2,z2, res1=0;
    cout<<"Введите день рождения:"; cin>>x;
    cout<<"Введите месяц рождения:"; cin>>y;
    cout<<"Введите год рождения:"; cin>>z;
    
    cout<<"Введите сегодняшнее число:"; cin>>x2;
    cout<<"Введите сегодняшний месяц:"; cin>>y2;
    cout<<"Введите сегодняшний год:"; cin>>z2;

    res1 = z2-z;
    if (y2 < y || (y2 == y && x2 < x)){
        res1 = res1-1;
    }
    cout<<"Вам "<<res1<<" лет";
    return 0;
}
