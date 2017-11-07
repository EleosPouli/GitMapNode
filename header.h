/*
 * header.h
 *
 *  Created on: Sep 28, 2017
 *      Author: artyt
 */

#ifndef HEADER_H_
#define HEADER_H_
#include <stdio.h>

Struct Data {
	char title[50];
	char author[50];
	int StockNumber;
	float WholesalePrice;
	float RetailPrice;
	int WholesaleQuantity;
	int RetailQuantity;
};

typedef struct Node {
	struct Data book;
	struct Node *next;
} Node;

void insert(Node *listHead, Node *insertNode) {
}
;
Node createNodeAndGetData() {

	return Node;
}
;
int getUserOption() {
	int choice;
	return choice;
}
;
void calculateTotalRevenue() {
}
;
void calculateWholeSaleCost() {
}
;
void calculateCapitalInvestment() {
}
;
void calculateTotalProfit() {
}
;
void calculateTotalBooksSold() {
}
;
void calculateAverageProfit() {
}
;
void printInStock() {
}
;
void printOutOfStock() {
}
;
Node createNodeAndGetStdinData() {
	return Node;
}
;
void insert() {
}
;
void delete() {};
void writeInventoryToDisk() {
}
;
void freeAllNodes() {
}
;



#endif /* HEADER_H_ */
