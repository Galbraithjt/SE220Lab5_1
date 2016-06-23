/*
 * Inventory.h
 *
 *  Created on: Jun 22, 2016
 *      Author: soaler
 */

#ifndef INVENTORY_H_
#define INVENTORY_H_
#include <string>

class Inventory {
public:
	Inventory(const std::string & = "", int = 0, double = 0.0);

	void setName( std::string );
	std::string getName() const;

	void setQty( int );
	int getQty() const;

	void setPerUnit( double );
	double getPerUnit() const;

private:
	char name[20];
	int qty;
	double perUnit;


};

#endif /* INVENTORY_H_ */
