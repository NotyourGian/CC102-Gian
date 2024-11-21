#include <iostream>

using namespace std;

int main()
{
	int temperature;
	cout << "Enter the temperature in degrees. ";
	cin >> temperature;
	if (temperature < 32) {
		cout << "its cold. Bring a heavy jacket.";
		}
	else if (temperature > 32 && temperature <= 50) {
		cout << "its cool. Bring a light jacket. ";
		}
	else {
		cout << "The Weather is warm, No jacket needed. ";
		}
	
	return 0;
}
