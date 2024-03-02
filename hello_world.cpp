#include <iostream> /*cтандартные потоки ввода-вывода*/
#include <string>

int main(int /*argc*/,char* /*argv*/[])
{
    string name=nullptr; /*инициализация переменной*/
    cout<<"Введите имя пользователя"<<endl; /*приглашение на ввод*/
    cin>>name;
    cout<<"Hello world!"<<" "<<name<<endl; /*вывод*/
    return 0;
}
