#include <iostream>
#include "fstream"
#include "string"
#include <queue>


using namespace std;

ifstream f1("1.txt");


int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    queue<string> q;
    string b;
    cout << "Не цифры:";
    while (f1.peek() != EOF)//считывание из файла
    {
        b = f1.get();
        if (isdigit(b[0])) q.push(b);
        else cout << " " << b ;
    }
    cout<<"\n" << "Цифры:";
    while (!q.empty()) { cout << " " << q.front(); q.pop(); }
    cout << "\n";
    system("pause");
}

