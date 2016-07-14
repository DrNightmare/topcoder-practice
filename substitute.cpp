#include "iostream"
#include "string"

using namespace std;

class Substitute
{
public:
	int getValue(string key, string code) {
		int i;
		int pos[26] = {-1};
		for (i = 0; i < key.size(); ++i)
			pos[key.at(i) - 65] = i + 1;

		int sum = 0;
		for (i = 0; i < code.size(); ++i)
		{
			int x = pos[code.at(i) - 65];
			if (x == 10)
				sum = sum * 10;
			else if (x != 0)
				sum = sum * 10 + x;
		}

		return sum;
	}
};

int main() {
	Substitute test;
	cout << test.getValue("CRYSTALBUM", "MMA");
	return 0;
}