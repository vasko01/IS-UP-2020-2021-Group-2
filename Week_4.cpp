//zadacha 0;
/*
#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		sum += i;
    cout << sum << endl;
	return 0;
}
*/

//zadacha 1
/*
#include <iostream>
using namespace std;
int main()
{
	int a, b, mul = 1;
	cin >> a >> b;
	for (int i = a; i < b; i++)
	{
		mul *= a;
	}
	cout << mul << endl;
}
*/

//zadacha 2
/*
#include<iostream>
using namespace std;
int main() 
{
	int n, max, min;
	cin >> n;
	int arr[200];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < n; i++) 
	{
		if (max < arr[i]) 
		{
			max = arr[i];
		}
		if (min > arr[i]) 
		{
			min = arr[i];
		}
	}
	cout << "max: " << max << endl;
	cout << "min: " << min << endl;
	return 0;
}
*/

//zadacha 3 
/*
#include <iostream>
using namespace std;
int main()
{
	int num, arr[50] = { 0 }, max = arr[0], min = arr[0];
//	int minIndex = -1, maxIndex = -1;
	//cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			minIndex = i;
		}
	}
	double buffer = arr[minIndex];
	arr[minIndex] = arr[maxIndex];
	arr[maxIndex] = buffer;
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
	return 0;
}
*/

//zadacha 4
/*
#include <iostream>
using namespace std;
int main()
{
	bool flag = true;
	int num, arr[200], sum = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		if (arr[i] >= 0)
		{
			cout << "First non-negative number is " << arr[i] << endl;
			cout << "Sum of the numbers after this number is ";
			for (int j = i + 1; j < num; j++)
				sum += arr[j];
			cout << sum << endl;
			flag = true;
			break;
		}
		else flag = false;
	}
	if (flag == false) cout << "There is no non-negative number" << endl;
}
*/

//zadacha 5 
/*
#include <iostream>
using namespace std;
int main()
{
	int arr[200];
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	for (int j = num - 1; j >= 0; j--)
	{
		cout << arr[j]<<" ";
	}
	cout << endl;
	return 0;
}
*/

//zadacha 6
/*
#include <iostream>
using namespace std;
int main()
{
	int n, counter = 0;
	char arr[200], sym;
	cin >> n;
	cin >> sym;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == sym)
		{
			counter++;
			arr[i] = '*';
		}
	}
	cout << "The symbol is " << counter << " times in the array." << endl;
	cout << "New array" << endl;

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
*/

//zadacha 7
/*
#include <iostream>
using namespace std;
int main()
{
	int n, arr[200];
	bool flag = false;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i <= n / 2; i++)
	{
		if (arr[i] == arr[n-1-i])
			flag = true;
	}
	if (flag == true) cout << "Palidnrome" << endl;
	else cout << "Not palindrome" << endl;
	return 0;
}
*/

//bonus 0
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int spaces = n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
		spaces--;
	}
	spaces = 0;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
		spaces++;
	}
	return 0;
}
*/
