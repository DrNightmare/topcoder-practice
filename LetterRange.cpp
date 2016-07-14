#include "iostream"
#include "string"
#include "vector"

using namespace std;

class LetterRange
{
public:
	vector<string> ranges(string text) {
		vector<string> res;
		for (char i = 'a'; i <= 'z'; ++i)
		{
			int found = text.find(i);
			if (found != string::npos) {
				// exists
				char begin = i;
				while(i <= 'z' && text.find(i) != string::npos) {
					i++;
				}
				i--;
				string temp;
				temp.push_back(begin);
				temp.push_back(':');
				temp.push_back(i);
				res.push_back(temp);
			}
		}
		return res;
	}
};

int main()
{
	vector<string> res;

	LetterRange test;
	res = test.ranges("the quick brown fox jumps over the lazy dog");

	for (int i = 0; i < res.size(); ++i)
	{
		cout << res.at(i) << '\n';
		/* code */
	}
	return 0;
}