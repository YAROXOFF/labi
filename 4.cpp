#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    float x,y;
    cout<<"Введите вес:"; cin>>x;
    cout<<"Введите рост:"; cin>>y;
    float imt = x/(y*y);
    cout<<fixed<<setprecision(1);
    cout<<imt;
    return 0;
}