#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "ru");

	double distance, time;
	distance = 0;
	time = 0;

	std::cout << "-----------������� 1-----------------\n";
	std::cout << "������� ���������� �� ��������� (��): ";
	std::cin >> distance;
	std::cout << "������� ����� �� ������� ����� ������� (���): ";
	std::cin >> time;
	std::cout << "�������� � ������� ����� �����: " << distance / time << "��/�";

	int hours, minutes, seconds, hourf, minutef, secondf;
	hours = 0;
	minutes = 0;
	seconds = 0;
	hourf = 0;
	minutef = 0;
	secondf = 0;

	double cost, price;
	cost = 2;

	std::cout << "\n\n-----------������� 2-----------------";
	std::cout << "\n������� ����� ������ ������������� ������� ����� ������ (����, ������, �������): ";
	std::cin >> hours >> minutes >> seconds;

	std::cout << "\n������� ����� ���������� ������������� ������� ����� ������ (����, ������, �������): ";
	std::cin >> hourf >> minutef >> secondf;

	price = (((hourf - hours) * 60) + (minutef - minutes) + ((secondf - seconds) / 60)) * cost;

	std::cout << "\n��������� ������� ��������: " << price;

	double petrol1 = 0, petrol2 = 0, petrol3 = 0, cost1 = 0, cost2 = 0, cost3 = 0, consumption = 0, needfuel = 0;

	std::cout << "\n\n-----------������� 3-----------------\n";
	std::cout << "������� ����������(��): ";
	std::cin >> distance;
	std::cout << "������� ������ ������� (�/100��): ";
	std::cin >> consumption;
	std::cout << "������� ��������� ������� ���� ������� (�� ����): ";
	std::cin >> petrol1;
	std::cout << "������� ��������� ������� ���� ������� (�� ����): ";
	std::cin >> petrol2;
	std::cout << "������� ��������� �������� ���� ������� (�� ����): ";
	std::cin >> petrol3;

	needfuel = distance * consumption / 100;

	cost1 = needfuel * petrol1;
	cost2 = needfuel * petrol2;
	cost3 = needfuel * petrol3;

	std::cout << "\n<<<<<<��������� ������� �� ������ ����� �������>>>>>>\n\n";

	std::cout << "��������� ������� �� ������ ���� �������: " << cost1;

	std::cout << "\n��������� ������� �� ������ ���� �������: " << cost2;

	std::cout << "\n��������� ������� �� ������� ���� �������: " << cost3;
}