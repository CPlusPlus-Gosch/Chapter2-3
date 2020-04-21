#include <string>
#include <iostream>
int main() {

	//Includes YourName, ExpensiveCalculator, MadLibs, CurrencyExchange, PayCheckCalculator, BagelsandBites, and NetPay.

	using namespace std;

	//YourName

	//string name;
	//cout << "What is your name?\n";
	//cin >> name;
	//cout << "Your name is " << name << "\n";

	//ExpensiveCalculator

	//float aFirst, bSecond, cAdd, dSubtract, eDivide, fMultiply, crazy;

	//cout << "Enter a number: ";
	//cin >> aFirst;

	//cout << "Enter a second number: ";
	//cin >> bSecond;

	//cAdd = aFirst + bSecond;
	//dSubtract = aFirst - bSecond;
	//eDivide = aFirst / bSecond;
	//fMultiply = aFirst * bSecond;
	//crazy = (aFirst * bSecond) * aFirst / bSecond * (2 * 500);

	//cout << "The sum of " << aFirst << " and " << bSecond << " is " << cAdd << "\n";
	//cout << "The difference of " << aFirst << " and " << bSecond << " is " << dSubtract << "\n";
	//cout << "The quotient of " << aFirst << " and " << bSecond << " is " << eDivide << "\n";
	//cout << "The product of " << aFirst << " and " << bSecond << " is " << fMultiply << "\n";
	//cout << crazy << "\n";

	//MadLibs

	//string color;
	//string est;
	//string bodyPartPlural;
	//string animal;
	//string noun;
	//string pluralNoun;

	//int a = 10;
	//int b = 6;
	//int c = a - b;

	//cout << "Enter a color: \n";
	//cin >> color;
	//cout << "Enter a word ending in 'est': \n";
	//cin >> est;
	//cout << "Enter a plural body part': \n";
	//cin >> bodyPartPlural;
	//cout << "Enter an animal: \n";
	//cin >> animal;
	//cout << "Enter a noun: \n";
	//cin >> noun;
	//cout << "Enter a plural noun: \n";
	//cin >> pluralNoun;

	//cout << "The " << color << " dragon is the " << est << " dragon of all. It has " << c << " " << bodyPartPlural << " and a " << animal 
	//	<< " shaped like a " << noun << ". It loves to eat " << pluralNoun << ".\n";

	//CurrencyExchange

	//double usDollar;
	//cout << "Enter a US dollar amount: \n";
	//cin >> usDollar;

	//double britishPound = usDollar * 0.80;
	//double japaneseYen = usDollar * 107.71;
	//double mexicanPeso = usDollar * 24.00;

	//cout << "Your money in Pounds: " << britishPound << ", In Yen: " << japaneseYen << ", and In Pesos: " << mexicanPeso;

	//PaycheckCalculator

	//double paycheck;
	//cout << "Enter your paycheck amount: \n";
	//cin >> paycheck;
	//double tenPercent = paycheck * .10;
	//double savedPerYear = (tenPercent * 12) + 100;

	//cout << "You saved: $" << savedPerYear;

	//BagelsandBites

	//double bagels = 0.99;
	//double donuts = 0.75;
	//double coffee = 1.20;
	//double userEntry;
	//cout << "Enter the amount of bagels you would like: \n";
	//cin >> userEntry;
	//bagels = bagels * userEntry;
	//cout << "Enter the amount of donuts you would like: \n";
	//cin >> userEntry;
	//donuts = donuts * userEntry;
	//cout << "Enter how many coffees you would like: \n";
	//cin >> userEntry;
	//coffee = coffee * userEntry;

	//cout << "Your total is $" << bagels + donuts + coffee;

	//NetPay
	
	double grossPay;
	cout << "Enter the gross pay: \n";
	cin >> grossPay;

	double netPay = grossPay - ((grossPay * .20) + (grossPay * .08) + (grossPay * .04));

	cout << "Your net pay is $" << netPay;

	return 0;
}