#include "iostream"
#include "string"
#include "vector"

using namespace std;

class Bullets
{
public:
	int match(vector <string> guns, string bullet) {
		if (guns.size() == 0)
			return -1;

		bullet.append(bullet);

		for (int i = 0; i < guns.size(); ++i)
		{
			string gun = guns.at(i);

			int found = bullet.find(gun);

			if (found != string::npos)
				return i;
		}
		return -1;
	}
};

int main() {

	char x[20][20] = {"|| || ||","| | | | ","||| ||| ","||||||||"};
	string bullet = "|| ||| |";

	vector<string> guns;
	for (int i = 0; i < 4; ++i)
		guns.push_back(x[i]);

	Bullets test;

	cout << test.match(guns, bullet);
	return 0;
}