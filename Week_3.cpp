//zadacha 0
/*
#include <iostream>
using namespace std;
int main()
{
	int n, fact=1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;

	}
	cout << fact << endl;
	return 0;
}
*/

//zadacha 1
/*
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout <<"a"<<i<<"="<< i*i+3*i << endl;
	}
	return 0;
}
*/


//zadacha 2
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int count, max = -INFINITY, number;
	cout << "How many numbers? - ";
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		cin >> number;
		if (number < 0 && number > max)
			max = number;
	}
	cout << "The biggest number is:" << max << endl;
	return 0;
}
*/

//zadacha 3
/*
#include <iostream>
using namespace std;
int main()
{
	int n, f1 = 0, f2 = 1, fib;
	cin >> n;
	if (n == 1) cout << f1 << endl;
	else
	{
		if (n == 2) cout << f2 << endl;
		else
			if (n == 3) cout << f2 << endl;
			else
				for (int i = 3; i <= n; i++)
				{
					fib = f1 + f2;
					f1 = f2;
					f2 = fib;
				}
	}
    cout << fib << endl;
	return 0;
}
*/

//zadacha 4
/*
#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout << "Enter a number:";
	cin >> n;
	while (n != 0)
	{
		sum = sum + n;
		cout << "Enter a number:";
		cin >> n;
	} 
	cout << "Sum of the numbers before 0: " << sum << endl;
	return 0;
}
*/



//zadacha 5
/*
#include <iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout << "Number:";
	cin >> n;
	while (n != 0)
	{
		sum = sum + n % 10;
		n = n / 10;

	}
	cout << "Sum of the digits:"<<sum << endl;
	return 0;
}
*/



//zadacha 6
/*
#include <iostream>
using namespace std;
int main()
{
	int a, n, result = 1;
	cin >> a >> n;
	for (int i = 1; i <= n; i++)
	{
		result = result * a;
	}
	cout << result << endl;
	return 0;

}
*/


//zadacha 7
/*
#include <iostream>
using namespace std;
int main()
{
	int n, j = 0;
	cout<<"Number:";
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
			j++;
	}
	if (j == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
*/



//zadacha 8 
/*
#include <iostream>
using namespace std;
int main()
{
	char letter;
	for (int i = 65; i <= 90; i++)
	{
		letter = i;
		if (letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U')
			cout << letter << endl;
	}
	return 0;

}
*/
//zadacha 9
/*
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
			cout << "-";
		cout << 0;
		for (int k = 1; k <= n - i; k++)
			cout << "+";
		cout << endl;
	}
	return 0;
}
*/
