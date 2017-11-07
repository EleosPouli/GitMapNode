/*
 * main.c
 *
 *  Created on: Sep 28, 2017
 *      Author: artyt
 */

#include "../../../git/GitMapNode/getDataAndBuildList.c"
#include "../../../git/GitMapNode/getUserOption.c"
#include "../../../git/GitMapNode/header.h"

int main(int argc, char *argv[]) {
	FILE *inputFile;
	Node *listHead;
	int i;
	inputFile = fopen(argv[1]);
	listHead = NULL;
	listHead = getDataAndBuildList(inputFile);
	fclose(argv[1]);

	return getUserOption(listHead, argv[2]);
}

