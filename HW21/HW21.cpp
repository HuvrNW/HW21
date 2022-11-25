#include <iostream>




int main() {
	setlocale(LC_ALL, "Russian");

	int x, y;
	std::cout << "Создание указателей и нахождение среднего арифметического через них.\n";
	std::cout << " Введите два числа --> ";
	std::cin >> x >> y;
	int* px = &x;
	int* py = &y;

	std::cout << " Среднее арифметеческое " << x << " и " << y << " --> " << (*px + *py) / 2;



	return 0;
}