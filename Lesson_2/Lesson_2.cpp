#include <iostream>

int main() {
	const int SIZE = 10;
	int accounts[SIZE] = { 0 };
	int choice, acc, amount;

	while (true) {
		std::cout << "\nМеню: \n";
		std::cout << "1. Покласти гроші\n";
		std::cout << "2. Зняти гроші\n";
		std::cout << "3. Показати всі рахунки\n";
		std::cout << "4. Показати загальну суму\n";
		std::cout << "5. Вихід\n";
		std::cout << "Ваш вибір: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			std::cout << "Введіть номер рахунку (1-10): ";
			std::cin >> acc;
			std::cout << "Сума ";
			std::cin >> amount;
			if (acc >= 1 && acc <= 10) {
				accounts[acc - 1] += amount;
			}
			else {
				std::cout << "Невірний номер рахунку \n";
			}
			break;

		case 2:
			std::cout << "Номер рахунку 1-10): ";
			std::cin >> acc;
			std::cout << "Сума: ";
			std::cin >> amount;
			if (acc >= 1 && acc <= 10){
				if (accounts[acc - 1] >= amount) {
					accounts[acc - 1] -= amount;
				} else {
					std::cout << "Недостатньо коштів \n";
				}

			}
			else {
				std::cout << "Невірний рахунок \n";
			}
			break;

		case 3:
			for (int i = 0; i < SIZE; i++) {
				std::cout << "Рахунок " << i + 1 << ": " << accounts[i] << " грн\n";
			}
			break;

		case 4: {
			int total = 0;
			for (int i = 0; i < SIZE; i++) {
				total += accounts[i];
			}
			std::cout << "Загальна сума всих рахунків: " << total << " грн\n";
			break;

		}
		case 5:
			std::cout << "Вихід з програми \n";
			return 0;

		default:
			std::cout << "Невірний вибір \n";
		}

	}


	return 0;
}