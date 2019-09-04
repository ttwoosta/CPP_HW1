#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

// Date class
class Date {
	public:
		void output();
		int day;
		int month;
		int year;
};

// Laptop class
class Laptop {
	public:
		void output();
		string brand;
		int ram;
		Date productionDate;
		int hardDriveCapacity;
		float screenSize;
		float price;
};


int main(int argc, char** argv) {
	
	Laptop laptops[3];
	Date dates[3];
	Laptop bestRamLt;
	int i;
	
	// Date 1
	dates[0].day = 22;
	dates[0].month = 11;
	dates[0].year = 2018;
	
	// Laptop 1
	laptops[0].brand = "Acer Chromebook";
	laptops[0].productionDate = dates[0];
	laptops[0].ram = 16;
	laptops[0].hardDriveCapacity = 512;
	laptops[0].screenSize = 11.5;
	laptops[0].price = 217.17;
	
	// Date 2
	dates[1].day = 1;
	dates[1].month = 9;
	dates[1].year = 2019;
	
	// Laptop 2
	laptops[1].brand = "Samsung Chromebook";
	laptops[1].productionDate = dates[1];
	laptops[1].ram = 2;
	laptops[1].hardDriveCapacity = 16;
	laptops[1].screenSize = 11.6;
	laptops[1].price = 139.91;
	
	// Date 3
	dates[2].day = 7;
	dates[2].month = 12;
	dates[2].year = 2018;
	
	// Laptop 3
	laptops[2].brand = "Lenovo Chromebook";
	laptops[2].productionDate = dates[2];
	laptops[2].ram = 4;
	laptops[2].hardDriveCapacity = 32;
	laptops[2].screenSize = 14.0;
	laptops[2].price = 179.00;

	laptops[0].output();
	laptops[1].output();
	laptops[2].output();
	
	bestRamLt = laptops[0];
	for (i = 1; i < 3; i++) {
		if (laptops[i].ram > bestRamLt.ram) {
			bestRamLt = laptops[i];
		}
	}
	
	cout << "The better RAM among the three laptop is: " << endl;
	bestRamLt.output();
	cout << endl;
	
	return 0;
}

// Use iostream
void Date::output() {
	std::cout << month << "/" << day << "/" << year << std::endl;
}

void Laptop::output() {
	std::cout << brand << ", " << screenSize << "\", " 
	<< ram << "GB RAM, " << hardDriveCapacity 
	<< "GB HHD, $" << price
	<< ", Release Date: ";
	
	productionDate.output();
	
	cout << std::endl;
}
