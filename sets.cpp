#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	// set is more powerful than vector
	// set is always sorted & we dont have to explicitly sort every time we insert to find the bounds
	// insertion & deletion of an element takes log(n) time where n is the number of elements present in the set
	// all elements are inserted in acsending order
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(-10);
	s.insert(-20);
	
	for(int x: s)
		cout<<x<<" ";
	
	cout<<endl;
	
	auto it = s.find(-10);
	(it ==  s.end())? cout<<"Not present":cout<<"Present";
	cout<<endl;
	auto it2 = s.lower_bound(-10);
	auto it3 = s.upper_bound(2);
	
	//deletion occurs in log(n) time
	s.erase(2);
	
}
