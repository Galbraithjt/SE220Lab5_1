/*
 * Inventory.cpp
 *
 *  Created on: Jun 22, 2016
 *      Author: soaler
 */

#include "Inventory.h"
#include <string>
using namespace std;

Inventory::Inventory(const string &name, int qty, double perUnit)
{
	setName(name);
	setQty(qty);
	setPerUnit(perUnit);
}


string Inventory::getName() const
{
	return name;
}

void Inventory::setName( string nm)
{
	int length = nm.size();
	length = (length < 25 ? length : 24);
	nm.copy(name, length);
	name[length] = '\0';
}

int Inventory::getQty() const
{
	return qty;
}

void Inventory::setQty( int q)
{
	q = qty;
}

double Inventory::getPerUnit() const
{
	return perUnit;
}

void Inventory::setPerUnit( double pU)
{
	pU = perUnit;
}
