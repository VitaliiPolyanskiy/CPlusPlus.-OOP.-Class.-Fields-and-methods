#include <iostream>
using namespace std;

class Date{
// так как не указан спецификатор доступа, то по умолчанию используется private
	int day;
private: // доступ к этим полям будут иметь только методы класса
	int month;
	int year;
public: // открытые методы класса(интерфейсная часть класса)
	void put_date(){ // метод, отвечающий за начальную инициализацию полей класса
		cout << "Day : ";
		cin >> day;
		cout << "Month : ";
		cin >> month;	
		cout << "Year : ";
		cin >> year;
	}

	void print_date(){ // вывод содержимого полей класса на экран
		cout << "Date: " << day << "." << month << "." << year << endl;
	}
};

int main(){
	Date d; // создание обьекта класса Date
	d.put_date();// вызов метода класса Date put_date()
	d.print_date();//вызов метода класса Date print_date()
	return 0;
}

