// Problem LAB 5: Write a program that calculates the BMI given a weight and height and prints out an appropriate message.
// Author: Bristol Roszell
//Date: 9/22/21

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	//Constants and Variables go here
	const int BMI_CONSTANT = 703;
	double weight;
	double height;
	double bodyMassIndex;
	
	//Get weight and height
	cout << "Please Enter weight in pounds: " << endl;
	cin >> weight;
	cout << "Please Enter height in inches: " << endl;
	cin >> height;
	
	//Calculate with the BMI formula
	bodyMassIndex = weight * BMI_CONSTANT / (height * height);
	
	//output manipulators
	cout << fixed << showpoint << setprecision(2);
	
	//print BMI
	cout << "Your body mass is; " << bodyMassIndex << endl;
	
	//Print interpretation and instructions
	//using if - else if - else statements
	if (bodyMassIndex < 20) {
		cout << "Underweight: You should probably see a doctor." << endl;
	} else if (bodyMassIndex <= 25) {
		cout << "looking normal." << endl;
	} else if (bodyMassIndex <= 30) {
		cout << "Overweight: See your doctor." << endl;
	} else {
		cout <<"Obese: See your doctor." << endl;
	}
	
	return 0;
}









