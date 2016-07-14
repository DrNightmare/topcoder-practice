#include "iostream"
#include "string"
#include "vector"

using namespace std;

class Chooser
{
public:
	int numSets(vector<int> easy, vector<int> middle, vector<int> hard) {
		int count = 0;
		for (int i = 0; i < easy.size(); ++i)
		{
			for (int j = 0; j < middle.size(); ++j)
			{
				for (int k = 0; k < hard.size(); ++k)
				{
					int sum = easy[i] + middle[j] + hard[k];
					if (sum >= 60 && sum <= 75) {
						count++;
				}
				}
			}
		}
		return count;
	}
};

int main()
{
	int easyarr[] = {5,10,15};
	int middlearr[] = {15, 25};
	int hardarr[] = {45};

	vector<int> easy(easyarr, easyarr + sizeof(easyarr) / sizeof(easyarr[0]));
	vector<int> middle(middlearr, middlearr + sizeof(middlearr) / sizeof(middlearr[0]));
	vector<int> hard(hardarr, hardarr + sizeof(hardarr) / sizeof(hardarr[0]));

	Chooser test;
	cout << test.numSets(easy, middle, hard);
	return 0;
}