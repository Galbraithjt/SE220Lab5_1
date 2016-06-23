//============================================================================
// Name        : SE220Lab5_1.cpp
// Author      : Joshua Galbraith
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "Inventory.h"
using namespace std;

void outputLine(string, int, double);

int main()
{
	vector <Inventory *> items;
	string name;
	int qty;
	double perUnit;

	ofstream outInventory( "InventoryData.txt", ios::out);
	ifstream inInventory("InventoryData.txt", ios::in);

	if ( !outInventory)
	{
		cerr << "File could not be opened." << endl;
		exit( EXIT_FAILURE );
	}

	if ( !inInventory)
	{
		cerr << "File could not be opened." << endl;
		exit( EXIT_FAILURE );
	}

	for (int flc = 0; flc <= 5; flc++)
	{
		cout << "Please Enter Name:" << endl;
		cin >> name;
		cout << "Please Enter Quantity" << endl;
		cin >> qty;
		cout << "Please Enter Cost Per Unit" << endl;
		cin >> perUnit;

		items.push_back(new Inventory(name, qty, perUnit));
	}

	for ( auto i : items)
	{
		cout << i <<",";
	}
	cout << endl << endl;

	while ( inInventory >> name >> qty >> perUnit)
	{
		outputLine(name, qty, perUnit);
	}
}

void outputLine( string name, int qty, double perUnit)
{
	cout << name << qty << perUnit << endl;
}
