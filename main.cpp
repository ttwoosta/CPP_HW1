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
	
	dates[0].day = 22;
	dates[0].month = 11;
	dates[0].year = 2019;
	
	laptops[0].brand = "Acer Chromebook";
	laptops[0].productionDate = dates[0];
	laptops[0].ram = 16;
	laptops[0].hardDriveCapacity = 512;
	laptops[0].screenSize = 11.5;
	laptops[0].price = 217.17;

	laptops[0].output();
	
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
