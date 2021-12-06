#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// Intialize Variables
	double hotelFloors;
	double currentFloor;
	double totalOccupiedRooms = 0;
	double counter = 1;
	double numRooms;
	double totalRooms = 0;
	double currentOccupiedRooms;
	double availableRooms;
	double percentage;
	// Display greeting
	cout << "Welcome to GLas Vegas Hotels\n";
	cout << "====================================\n";
	cout << "Home away from home and hospitality at its best.\n";
	cout << "We will treat you like never before.\n\n";
	cout << "Check out our rates\n";
	cout << "_______________________________\n";
	cout << "\nSingle Room: $39 - per night\n";
	cout << "\nDouble Room: $60 - per night\n";
	cout << "\nExecutive Room: $120 - per night\n\n";
	cout << "This program calculates the occupancy rate of this Hotel.\n";
	cout << "=========================================================\n\n";
	cout << "How many floors are in this Hotel? ";
	// ask for number of hotel floors
	cin >> hotelFloors;
	// input validation; make sure that number of floors is not less than 1
	while (hotelFloors < 1) {
		cout << "Number of floors cannot be less than 1\n";
		cout << "How many floors are in this Hotel? ";
		cin >> hotelFloors;
	}
	cout << "==================================\n";
	while (counter <= hotelFloors) {
		// if the counter is equal to thirteen floors, then increment an extra floor
		if (counter == 13) {
			counter += 1;
		}
		cout << "\nEnter number of rooms on floor " << counter << ": ";
		cin >> currentFloor;
		while (currentFloor < 10) {
			cout << "Number of rooms cannot be less than 10\n";
			cout << "Enter number of rooms on floor " << counter << ": ";
			cin >> numRooms;
		}
		cout << "How many room are occupied in this floor? ";
		cin >> currentOccupiedRooms;
		totalRooms += currentFloor;
		totalOccupiedRooms += currentOccupiedRooms;
		counter += 1;
	}
	availableRooms = totalRooms - totalOccupiedRooms;
	percentage = (totalOccupiedRooms / totalRooms) * 100;
	// Display total results
	cout << "Glas Vegas Hotel Occupancy Room Summary today\n";
	cout << "=============================================\n";
	cout << "Total Rooms in Hotel : " << totalRooms;
	cout << "\nTotal Rooms Occupied : " << totalOccupiedRooms;
	cout << "\nTotal Rooms Available : " << availableRooms;
	cout << "\nHotel Occupancy Rate : " << setprecision(3) << percentage << "%";
	return 0;
}