#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "ru");

	double distance, time;
	distance = 0;
	time = 0;

	std::cout << "-----------Задание 1-----------------\n";
	std::cout << "Введите расстояние до аэропорта (км): ";
	std::cin >> distance;
	std::cout << "Введите время за которое нужно доехать (час): ";
	std::cin >> time;
	std::cout << "Скорость с которой нужно ехать: " << distance / time << "км/ч";

	int hours, minutes, seconds, hourf, minutef, secondf;
	hours = 0;
	minutes = 0;
	seconds = 0;
	hourf = 0;
	minutef = 0;
	secondf = 0;

	double cost, price;
	cost = 2;

	std::cout << "\n\n-----------Задание 2-----------------";
	std::cout << "\nВведите время начало использования скутера через пробел (часы, минуты, секунды): ";
	std::cin >> hours >> minutes >> seconds;

	std::cout << "\nВведите время завершения использования скутера через пробел (часы, минуты, секунды): ";
	std::cin >> hourf >> minutef >> secondf;

	price = (((hourf - hours) * 60) + (minutef - minutes) + ((secondf - seconds) / 60)) * cost;

	std::cout << "\nСтоимость поездки составит: " << price;

	double petrol1 = 0, petrol2 = 0, petrol3 = 0, cost1 = 0, cost2 = 0, cost3 = 0, consumption = 0, needfuel = 0;

	std::cout << "\n\n-----------Задание 3-----------------\n";
	std::cout << "Введите расстояние(км): ";
	std::cin >> distance;
	std::cout << "Введите расход бензина (л/100км): ";
	std::cin >> consumption;
	std::cout << "Введите стоимость первого вида бензина (за литр): ";
	std::cin >> petrol1;
	std::cout << "Введите стоимость второго вида бензина (за литр): ";
	std::cin >> petrol2;
	std::cout << "Введите стоимость третьего вида бензина (за литр): ";
	std::cin >> petrol3;

	needfuel = distance * consumption / 100;

	cost1 = needfuel * petrol1;
	cost2 = needfuel * petrol2;
	cost3 = needfuel * petrol3;

	std::cout << "\n<<<<<<Стоимость поездки на разных видах бензина>>>>>>\n\n";

	std::cout << "Стоимость поездки на первом виде бензина: " << cost1;

	std::cout << "\nСтоимость поездки на втором виде бензина: " << cost2;

	std::cout << "\nСтоимость поездки на третьем виде бензина: " << cost3;
}