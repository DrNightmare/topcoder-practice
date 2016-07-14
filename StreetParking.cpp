#include "iostream"
#include "string"
#include "vector"

using namespace std;

class StreetParking
{
public:
	bool isParkingSpace(int pos, string street) {
		if (street.at(pos) == 'D')
			return false;
		else if (street.at(pos) == 'B')
			return false;
		else if (pos < street.size() - 1 && street.at(pos + 1) == 'B')
			return false;
		else if (pos < street.size() - 2 && street.at(pos + 2) == 'B')
			return false;
		else if (street.at(pos) == 'S')
			return false;
		else if (pos < street.size() - 1 && street.at(pos + 1) == 'S')
			return false;
		else if (pos > 0 && street.at(pos - 1) == 'S')
			return false;
		else return true;
	}

	 int freeParks(string street) {
	 	int count = 0;
	 	for (int i = 0; i < street.size(); ++i)
	 		if (isParkingSpace(i, street)) count++;
	 	return count;
	 }
};

int main()
{
	string street = "SSD-B---BD-DDSB-----S-S--------S-B----BSB-S--B-S-D";
	StreetParking test;
	cout << test.freeParks(street);
	return 0;
}