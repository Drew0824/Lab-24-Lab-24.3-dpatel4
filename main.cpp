#include <iostream>
using namespace std;


double findAverage(int numbers[], int size);	
int  findHighest(int numbers[], int size);	
int  findLowest(int numbers[], int size);		

int main() {
  int temperature[50];	
	int numberOfTemps;	
	int pos;			
	float avgOfTemperature;	 
	int highestTemperature;	
	int lowestTemperature;	
	
	pos = 0;
	cout << "Please input a temperature from 1 to 100, (or -999 to stop)" << endl;
	cin >> temperature[pos];

	while (temperature[pos] != -999)
	{
		pos++;
		cout << "Please input a temperature from 1 to 100, (or -999 to stop)" << endl;
		cin >> temperature[pos];
	}

	numberOfTemps = pos;


	
	avgOfTemperature = findAverage(temperature, numberOfTemps);
  

	cout << endl << "The average of all the temperature is " << avgOfTemperature << endl;

	
  highestTemperature = findHighest(temperature, numberOfTemps);

	cout << endl << "The highest temperature is " << highestTemperature << endl;

	
  lowestTemperature = findLowest(temperature, numberOfTemps);
	
  
  cout << endl << "The lowest temperature is " << lowestTemperature << endl;

}


double findAverage(int numbers[], int size)
{
	double sum = 0;			

	for (int pos = 0; pos < size; pos++)
		sum = sum + numbers[pos];

	return (sum / size);	
}


int	findHighest(int numbers[], int size)
{
	int highest = numbers[0];  
	
	for (int pos = 0; pos < size; pos++)
		if (numbers[pos] > highest)
			highest = numbers[pos];

	return highest;
}


int	findLowest(int numbers[], int size)
{
  int lowest = numbers[0];

  for (int pos = 0; pos < size; pos++)
  if (numbers[pos] < lowest)
    lowest = numbers[pos];
    return lowest;

}



