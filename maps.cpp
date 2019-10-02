#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
map<int, int> A;
A[1] = 100;
A[2] = -1;
A[3] = 200;

map<char, int> count;
string x = "Himanshu Gullaiya";

for(char c: x)
	count[c]++;

cout<<"Frequency of 'n' & 'u' in string "<<x<<": "<<endl<<count['n']<<endl<<count['u'];
}
