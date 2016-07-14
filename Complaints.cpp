#include "iostream"
#include "string"
#include "vector"

using namespace std;

class Complaints
{
public:
	  int howMany(vector <int> line) {
	  	int numComplaints = 0;
	  	for (int i = 1; i < line.size(); ++i)
	  	{
	  		int rating = line.at(i);
	  		for(int j = 0; j < i; j++)
	  			if (line.at(j) < rating) numComplaints++;
	  	}

	  	return numComplaints;
	  }
};

int main()
{
	int x[] = {1000, 800, 900, 1400};
	vector <int> line;

	for (int i = 0; i < 4; ++i)
	{
		line.push_back(x[i]);
	}

	Complaints test;
	cout << test.howMany(line);
	return 0;
}