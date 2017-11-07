/*
 * getDataAndBuildList.c
 *
 *  Created on: Sep 28, 2017
 *      Author: artyt
 */
#include "../../../git/GitMapNode/createNodeAndGetData.c"

Node getDataAndBuildList(FILE *inFile, Node *listHead) {
	Node *member
	if (listHead == NULL) {
		listHead = createNodeAndGetData(inFile);
	} else {
		member = createNodeAndGetData(inFile);

		if (member != NULL) {
			getDataAndBuildList(inFile, listHead);
			insert(&listHead, member);
		}

		return listHead;
	}
}


