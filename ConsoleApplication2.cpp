// Chertousova PE
// 16.10.2022
// Task 5


#include <iostream>
using namespace std;
int main()
{
	int W, H, R, D;
	cin>> W >> H >> R; 
	D = R * 2;
	if (D <= W && D<= H) {
		cout << "YES";
	}
	else { cout << "NO"; 
	}
}
