/*
 * createNodeAndGetData.c
 *
 *  Created on: Sep 28, 2017
 *      Author: artyt
 */
Node createNodeAndGetData(FILE *inFile) {
	Node *newNode;
	newNode = malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("Failed to allocate memory for node.");
	} else {
		if (fscanf(inFile, "%[^\n]s ", newNode->book.title) == EOF) {
		return NULL
	} else {
		fscanf(inFile, "%[^\n]s ", newNode->book.title);
		fscanf(inFile, "%[^\n]s ", newNode->book.author);
		fscanf(inFile, "%[^\n]s ", newNode->book.stockNumber);
		fscanf(inFile, "%[^\n]s ", newNode->book.WholesalePrice);
		fscanf(inFile, "%[^\n]s ", newNode->book.WholesaleQuantity);
		fscanf(inFile, "%[^\n]s ", newNode->book.RetailQuantity);
		newNode->next = NULL;
		return newNode;
	}
}

}


