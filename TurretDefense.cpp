#include "iostream"
#include "vector"

using namespace std;

class TurretDefense
{
public:

 int absol(int x, int y) {
 	if (x > y) return x - y;
 	return y - x;
 }

 int firstMiss(vector <int> xs, vector <int> ys, vector <int> times) {
 	int timeLeft, timeNeeded;
 	int prevX = 0; int prevY = 0; int prevtime = 0;

 	for (int i = 0; i < xs.size(); ++i)
 	{
 		timeNeeded = absol(xs.at(i), prevX) + absol(ys.at(i), prevY);
 		timeLeft = times.at(i) - prevtime;

 		if (timeNeeded > timeLeft) return i;

 		prevX = xs.at(i);
 		prevY = ys.at(i);
 		prevtime = times.at(i);
 	}
 	return -1;
 }	
};

int main() {
	int a1[] = {1,2,3,4,15};
	int a2[] = {1,2,3,4,15};
	int a3[] = {100,200,300,400,405};

	std::vector<int> v1(a1, a1 + sizeof(a1) / sizeof(int));
	std::vector<int> v2(a2, a2 + sizeof(a2) / sizeof(int));
	std::vector<int> v3(a3, a3 + sizeof(a3) / sizeof(int));

	TurretDefense test;
	cout << test.firstMiss(v1, v2, v3);
	return 0;
}