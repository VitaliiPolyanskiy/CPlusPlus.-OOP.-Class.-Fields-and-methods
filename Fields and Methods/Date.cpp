#include <iostream>
using namespace std;

class Date{
// ��� ��� �� ������ ������������ �������, �� �� ��������� ������������ private
	int day;
private: // ������ � ���� ����� ����� ����� ������ ������ ������
	int month;
	int year;
public: // �������� ������ ������(������������ ����� ������)
	void put_date(){ // �����, ���������� �� ��������� ������������� ����� ������
		cout << "Day : ";
		cin >> day;
		cout << "Month : ";
		cin >> month;	
		cout << "Year : ";
		cin >> year;
	}

	void print_date(){ // ����� ����������� ����� ������ �� �����
		cout << "Date: " << day << "." << month << "." << year << endl;
	}
};

int main(){
	Date d; // �������� ������� ������ Date
	d.put_date();// ����� ������ ������ Date put_date()
	d.print_date();//����� ������ ������ Date print_date()
	return 0;
}

