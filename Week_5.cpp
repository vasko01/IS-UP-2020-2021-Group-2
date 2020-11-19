//zadacha 0
/*
#include <iostream>
using namespace std;
int main()
{
	int num, arr[100], counter = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	int wantedNumber;
	cin >> wantedNumber;
	for (int i = 0; i < num; i++)
	{
		if (arr[i] == wantedNumber)
		{
			counter++;
		}
	}
	cout << "The number " << wantedNumber << " is found " << counter << " times in the array." << endl;
	for (int i = 0; i < num; i++)
	{
		if (arr[i] == wantedNumber)
			cout << "It is found in " << i << " position" << endl;
	}
	return 0;
}
*/

//zadacha 1
/*
#include <iostream>
using namespace std;
int main()
{
	int arr[5][4], sumRows = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "arr[" << i << "] [" << j << "] = ";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			
			cout<< arr[i][j]<<" ";
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sumRows += arr[i][j];
		}
		cout << sumRows << endl;
		sumRows = 0;
	}
	return 0;
}
*/

//zadacha 2
/*
#include <iostream>
using namespace std;
int main()
{
	int matrix[4][4], sumLeftDiagonal = 0, sumRightDiagonal = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j)
			{
				sumLeftDiagonal += matrix[i][j];
			}
			if (i + j == 3)
			{
				sumRightDiagonal += matrix[i][j];
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrix[i][j]<<" ";
		}
		cout << endl;
	}
	cout << sumLeftDiagonal << "  " << sumRightDiagonal << endl;
	return 0;
}
*/

//zadacha 3
/*
#include <iostream>
using namespace std;
int main()
{
	int matrix[4][3];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] + 10 << " ";
		}
		cout << endl;
	}
	return 0;
}
*/

//zadacha 4
/*
#include <iostream>
using namespace std;
int main()
{
	int matrix[4][3], min=INT_MAX, max=INT_MIN;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matrix[i][j] > max) max=matrix[i][j];
			if (matrix[i][j] < min) min=matrix[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Max element is " << max << endl;
	cout << "Min element is " << min << endl;
	return 0;
}
*/

//zadacha 5
/*
#include <iostream>
using namespace std;
int main()
{
	int matrix[3][3], sumRow = 0, sumColumn = 0;
	int sumMainDiagonal = 0, sumSecondaryDiagonal = 0;
	int sumUnderMainDiagonal = 0, sumAboveMainDiagonal = 0;
	int sumUnderSecondaryDiagonal = 0, sumAboveSecondaryDiagonal = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sumRow += matrix[i][j];
			sumColumn += matrix[j][i];
		}
		cout << "Sum of elements in row number " << i << " is " << sumRow << endl;
		cout << "Sum of elements in column number " << i << " is " << sumColumn << endl;
		sumRow = 0;
		sumColumn = 0;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j > i) sumAboveMainDiagonal += matrix[i][j];
			if (i > j) sumUnderMainDiagonal += matrix[i][j];
			if (i + j < 3 - 1) sumAboveSecondaryDiagonal += matrix[i][j];
			if (i + j > 3 - 1) sumUnderSecondaryDiagonal += matrix[i][j];
			if (i == j) sumMainDiagonal += matrix[i][j];
			if (i + j == 3 - 1) sumSecondaryDiagonal += matrix[i][j];
		}
	}

	cout << "Sum of elements in main diagonal is " << sumMainDiagonal << endl;
	cout << "Sum of telements in secondary diagonal is " << sumSecondaryDiagonal << endl;
	cout << "Sum of elements under main diagonal is " << sumUnderMainDiagonal << endl;
	cout << "Sum of elements above main diagonal is " << sumAboveMainDiagonal << endl;
	cout << "Sum  of elements under secondary diagonal is " << sumUnderSecondaryDiagonal << endl;
	cout << "Sum  of elements above secondary diagonal is " << sumAboveSecondaryDiagonal << endl;
	return 0;
}
*/

//zadacha 6
/*
#include <iostream>
using namespace std;
int main()
{
	int matrix[4][3], num, indexRow = 0, indexColumn = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
	cin >> num;
	bool flag = false;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (num == matrix[i][j])
			{
				indexRow = i;
				indexColumn = j;
				matrix[i][j] *= 10;
				flag = true;
			}
		}
	}
	if (flag == true)
	{
		cout << "Element is in position [" << indexRow << "][" << indexColumn << "]" << endl;
		cout << "The element multiplied by 10 equals " << matrix[indexRow][indexColumn] << endl;
		cout << "The new matrix is:" << endl;
		cout << endl;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	else cout << "No element equal to " << num << endl;
	return 0;
}
*/

//zadacha 7
#include <iostream>
using namespace std;
int main()
{
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j]) 
			{
				int	temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i]<<" ";
	cout << endl;
	return 0;
}

