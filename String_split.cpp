//Create a function that takes a string and 
//splits it to a list of two character strings like: "abcdef" becomes ["ab", "cd", "ef"]

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
  cout << "Plz, give me a string to work with!" << endl;
  string to_split;
  getline(cin, to_split);	

  int length = to_split.length();
  cout << "The string lenght is: " << length << endl;

  for (int i = 1; i < length; i += 2) {
	cout << to_split[i - 1] << to_split[i] << " | ";
  }

  return 0;

}