#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    string x;
    int count_bukv = 0;
    int count_cifr = 0;
    int count_probelov = 0;
    int count_znakov = 0;
    cout<<"Введите строку:"; getline(cin,x);
    for(int i=0; i<x.size(); i++){
        char c = x[i];
        if (isdigit(c))        count_cifr++;
        else if (isspace(c))   count_probelov++;
        else if (ispunct(c))   count_znakov++;
        else {
            count_bukv++;
        }
    }
    cout<<"Букв:"<<count_bukv<<endl;
    cout<<"Цифр:"<<count_cifr<<endl;
    cout<<"Пробелов:"<<count_probelov<<endl;
    cout<<"Знаков:"<<count_znakov<<endl;
    return 0;
}