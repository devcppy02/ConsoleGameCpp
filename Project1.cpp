#include <iostream>
#include <stdlib.h> 
#include <time.h> 

int grn(int min, int max)
{
	srand(time(NULL));
	int num = min + rand() % (max - min + 1);
	return num;
}

void main()
{
	setlocale(LC_ALL, "");

	int rnd, n;
	rnd = grn(1, 100);
	std::cout << rnd;
	while (1) {
		std::cout << "Введите предпологаемое число: ";
		std::cin >> n;

		if ((std::max(rnd, n) - std::min(rnd, n)) >= 80) {
			std::cout << "Очень холодно\n";
		}

		if (50 <= (std::max(rnd, n) - std::min(rnd, n)) && (std::max(rnd, n) - std::min(rnd, n)) <= 79) {
			std::cout << "Холодно\n";
		}

		if (20 <= (std::max(rnd, n) - std::min(rnd, n)) && (std::max(rnd, n) - std::min(rnd, n)) <= 49) {
			std::cout << "Тепло\n";
		}

		if (10 <= (std::max(rnd, n) - std::min(rnd, n)) && (std::max(rnd, n) - std::min(rnd, n)) <= 19) {
			std::cout << "Очень тепло\n";
		}

		if (1 <= (std::max(rnd, n) - std::min(rnd, n)) && (std::max(rnd, n) - std::min(rnd, n)) <= 9) {
			std::cout << "Жарко\n";
		}


		if (rnd == n) {
			std::cout << "Победа\n";
			break;
		}

	}

}