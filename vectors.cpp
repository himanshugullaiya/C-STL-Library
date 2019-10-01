#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

//ITERATORS	

void iterators()
{
	vector<int> a = {1,2,3,4,5};
	
	vector<int>::iterator i;
	for(i = a.begin(); i != a.end(); i++) cout<<*i;  //printing forward

	for(auto i = a.begin(); i != a.end(); i++) cout<<*i<<endl;  //printing forward
	
	for(int i = 0; i < a.size(); i++) cout<<a[i]<<endl;			//printing forward
	
	for(int x: a) cout<<x;  //printing forward

	for(auto i = a.rbegin(); i != a.rend(); i++) cout<<*i<<endl; //printing reverse
	
	for(auto i = a.end()-1; i >= a.begin(); i--) cout<<*i<<endl;  //printing reverse
	
}

//MODIFIERS

void modifiers()
{
	vector<int> v;
	v.assign(5,1); // five ones' {1,1,1,1,1}
	v.push_back(10); // append 10 as the last element of vector v
	v.pop_back(); // removes last
	v.insert(v.begin(),10); // (iterator to the place, no) insert 10 in beginning
	v.erase(v.begin()); //removes the first element
	v.clear(); // erases the vectors
	v.emplace(v.begin(), 10); //insert 10 in the beginning
	v.emplace_back(20); // inserts an element at the back of the vector
	vector<int> v1 = {1,2,3,4};
	vector<int> v2 = {1,1,1,1,};	
	v1.swap(v2); //swap all elements of two vectors
}

//CAPACITY
void capacity()
{
	vector<int> q = {1,2,3,4,5};
	vector<int> p;
	cout<<"Size of Q: "<<q.size(); 
	cout<<"\nSize of P: "<<p.size(); // current size
	cout<<"\nMax Q Size (No of int elements that vector can hold): "<<q.max_size();  //max no of elements that the vector can hold
	cout<<"\nCapacity Q: "<<q.capacity(); //size of storage space
	q.resize(3);
	cout<<"\nAfter Resizing Q: "<<q.size();
	cout<<"\nIs container Empty: "<<q.empty();
	cout<<"\nSize of Q before shrink: "<<q.size(); 
	q.shrink_to_fit();
	cout<<"\nQ is Shrinked: "<<q.size();
}


//ELEMENT ACCESS
void element_access()
{
	vector<int> v1 = {1,2,3,4};
	vector<int> v2 = {1,1,1,1,};
	cout<<v2[2]; // reference operator
	cout<<v2.at(2);
	cout<<v2.front();
	cout<<v2.back();
	
	int *pos = v2.data();
	cout<<*pos;
}

bool comparator(int x, int y)
	{
	return x > y;
	}
	
void show(vector<int> a)
{
	for(int x: a) cout<<x<<" ";
}

// Algorithms
void algorithms()
{
	vector<int> A = {5,25,36,36,3,14,56};
	sort(A.begin(), A.end()); //ascending Order
	sort(A.begin(), A.end(), greater<int>()); //descending order
	sort(A.begin(), A.end(), comparator); //descending order
	reverse(A.begin(), A.end());
	int max = *max_element(A.begin(), A.end());
	int min = *min_element(A.begin(), A.end());
	int sum = accumulate(A.begin(), A.end(), 0);  //sum of all elements  //numeric library only
	int Count = count(A.begin(), A.end(), 3);
	vector<int>::iterator i = A.begin(),A.end(), 25);
	A.erase(i);
	auto i1 = upper_bound(A.begin(),A.end(), 36); //return iterator pointing to number > given
	auto i2 = lower_bound(A.begin(),A.end(), 36); //returns iterator pointing to number >= given
	distance(a.begin(),i1); //finds the no of elements in between the first and the given	
	A.clear();
	
}

int main()
{
	//iterators
	//modifiers
	//capacity
	//elemental access
	//algorithms
	
	
}
