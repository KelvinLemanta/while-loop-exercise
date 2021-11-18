
// 137533 Kelvin Lemanta

// while loop to get sum of numbers between 20 to 25

#include <iostream>
using namespace std;

int main ()
{
	int counter = 20;
	int sum = 0;
	while (counter<=25)
	{
		sum+=counter;
		counter++;
	}
	cout<<"sum is:"<<sum;
	return 0;
}
