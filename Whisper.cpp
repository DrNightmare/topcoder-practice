#include "iostream"
#include "string"
#include "vector"

using namespace std;

class Whisper
{
public:
	 string toWhom(vector <string> usernames, string typed) {
	 	int i;
	 	string msg = "/msg ";
	 	for (i = 0; i < msg.size(); ++i)
	 	{
	 		msg[i] = tolower(msg.at(i));
	 	}

	 	for (i = 0; i < typed.size(); ++i)
	 	{
	 		typed[i] = tolower(typed.at(i));
	 	}

	 	if (typed.substr(0, 5).compare(msg) != 0) {
	 		return "not a whisper";
	 	}
	 	
	 	int maxlen = 0;
	 	int maxuser;
	 	bool matchFound = false;
	 	for (i = 0; i < usernames.size(); ++i)
	 	{
	 		string user = usernames.at(i);
	 		for (int j = 0; j < user.size(); ++j)
		 	{
		 		user[j] = tolower(user.at(j));
		 	}

	 		user.append(" ");
	 		int len = user.size();

	 		if (typed.substr(5, len).compare(user) == 0) {
	 			if (len > maxlen) maxlen = len;
	 			maxuser = i;
	 			matchFound = true;
	 		} 
	 	}

	 	if (matchFound) return usernames.at(maxuser);
	 	else return "user is not logged in";
	 }
};

int main() {
	char x[20][20] = {"Wow"};
	vector<string> usernames;

	for (int i = 0; i < 1; ++i)
		usernames.push_back(x[i]);

	Whisper test;
	cout << test.toWhom(usernames, "/msg");
	return 0;
}