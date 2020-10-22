//zadacha 0
/*
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char calc;
	cin >> a >>calc >> b;
	switch (calc)
	{
	case '+': cout << a + b << endl; break;
	case '-': cout << a - b << endl; break;
	case '/': { if (b != 0) cout << a / b << endl;
				else cout << "Can't divide by 0" << endl; }; break;
	case '*': cout << a * b << endl; break;
	default: cout << "No operation" << endl; break;
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
	int year;
	cout << "Year:";
	cin >> year;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) cout << "The year is leap" << endl;
	else cout << "The year is not leap" << endl;
}
*/



//zadacha 2
/*
#include <iostream>
using namespace std;
int main()
{
	char letter;
	cin >> letter;
	if (letter >= 'a' && letter <= 'z') cout << "The upper case corresponding is:" << char(letter - 32) << endl;
	else
	{
		if (letter >= 'A' && letter <= 'Z') cout << "The lower case corresponding is:" << char(letter + 32) << endl;
		else cout << letter << "is not a letter" << endl;
	}
	return 0;
}
*/

//zadacha 3
/*
#include <iostream>
using namespace std;
int main()
{
	int month;
	cout << "Month: ";
	cin >> month;
	switch (month)
	{
	case 12:
	case 1:
	case 2:  cout << "Winter" << endl; break;
	case 3:
	case 4:
	case 5: cout << "Spring" << endl; break;
	case 6:
	case 7:
	case 8: cout << "Summer" << endl; break;
	case 9:
	case 10:
	case 11: cout << "Autumn" << endl; break;
	default: cout << "There is no such season" << endl; break;

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
	int a, b, x;
	cin >> a >> b;
	if (a == 0)
	  {
		if(b==0) cout<<"INF"<<endl;
		else cout<<"NO"<<endl;
	  }
	else x=-b/a;
	if (x * a == -b) cout << "X=" << x << endl;
	else cout << "We work only with integers" << endl;
	return 0;
}
*/


//zadacha 5
/*
#include <iostream>
using namespace std;
int main()
{
	int month, year;
	cin >> month >> year;
	if (month == 2)
	{
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) cout << 29 << endl;
		else cout << 28 << endl;
	}
	else
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10||month==12) cout << 31 << endl;

		else cout << 30 << endl;

	}
	return 0;
}
*/

//zadacha 6
/*
#include <iostream>
using namespace std;
int main()
{
	int price, usb, ram;
	bool ssd;
	cout << "Price:";
	cin >> price;
	cout << "USB ports:";
	cin >> usb;
	cout << "RAM:";
	cin >> ram;
	cout << "SSD:";
	cin >> ssd; //1 for yes; 0 for no
	if ((price >= 1000 && price <= 1500 && usb >= 3 && ram >= 8 && ssd == 1) || (price <= 800 && (ram <= 8 || ssd == 0))) cout << "Traicho shte si kupi laptop ;)" << endl;
	else cout << "Traicho nqma da si kupi laptop :(" << endl;
	return 0;
}
*/

//zadacha 7
/*
#include <iostream>
using namespace std;
int main()
{
	int num, digit1, digit2, digit3, digit4;
	cout << "Enter a number:";
	cin >> num;
	digit1 = num / 1000;
	digit2 = num / 100 % 10;
	digit3 = num / 10 % 10;
	digit4 = num % 10;
	cout << boolalpha << (digit1 % 2 == 1 && digit1 > digit2 && digit1 > digit3 && digit1 > digit4) << endl;
	return 0;
}
*/


//bonus zadacha 0
#include <iostream>
using namespace std;
int main()
{
	int tomatoes, peppers, carrots, olives, potatoes, flavour;
	bool need_friend;
	cout << "Tomatoes:";
	cin >> tomatoes;
	cout << "Peppers:";
	cin >> peppers;
	cout << "Carrots";
	cin >> carrots;
	cout << "Olives:";
	cin >> olives;
	cout << "Potatoes:";
	cin >> potatoes;
	cout << "Flavours in ml:";
	cin >> flavour;
	cout << "Need a friend? "; //1 for yes, 0 for no
	cin >> need_friend;
	if ((tomatoes == 1&& need_friend == 0 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && flavour >= 150) || (tomatoes > 1 && need_friend == 1 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && flavour >= 200)) cout << "Traicho shte qde" << endl;
	else cout << "Traicho nqma da qde" << endl;
	return 0;
}




