/*
 * insert.c
 *
 *  Created on: Sep 28, 2017
 *      Author: artyt
 */
insert(Node *listHead, Node *insertNode) {
	Node *traversePtr;
	Node *priorNode;
	traversePtr = &listHead;
	if (insertNode->book.stockNumber < traversePtr->book.stockNumber) {
		insertNode->next = traversePtr;
	} else {
		priorNode = traversePtr;
		traversePtr = traversePtr->next;
		if (traversePtr == NULL) {
			insertNode->next = NULL;
			traversePtr->next = insertNode;
		}else{
			insert(traversePtr, insertNode);
		}

	}

}


