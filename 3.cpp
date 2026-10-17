#include <iostream>
#include <string>
using namespace std;
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    string x;
    cout<<"Введите произвольные символы:"; cin>>x;
    int k;
    while (true) {
    cout << "Введите порядковый номер: ";
    if (!(cin >> k)) {
        cout << "Ошибка, нужно число!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else if (k <= 0) {
        cout << "Ошибка, число должно быть больше 0!" << endl;
    }
    else {
        break; 
    }
}
    cout<<x[k-1]<<endl;
    int m;
    while (true) {
    cout << "Введите 2-ой порядковый номер: ";
    if (!(cin >> m)) {
        cout << "Ошибка, нужно число!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else if (m <= 0) {
        cout << "Ошибка, число должно быть больше 0!" << endl;
    }
    else {
        break;  
    }
}
    if (k > m) {
    int t = k;
    k = m;
    m = t;
}
for (int i = k; i <= m; i++) {
    cout << x[i-1];
}
    return 0;
}