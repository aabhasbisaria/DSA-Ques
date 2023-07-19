int length(Node* head){
	if(head == NULL){
        return 0;
    }
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

Node* findIntersection(Node *firstHead, Node *secondHead){
    int lenFirstList = length(firstHead);
    int lenSecondList = length(secondHead);

    while(lenFirstList > lenSecondList){
        firstHead = firstHead->next;
        lenFirstList--;
    }
    while(lenSecondList > lenFirstList){
        secondHead = secondHead->next;
        lenSecondList--;
    }

    // now firstHead and secondHead are at same positions
    while(firstHead != secondHead && firstHead != NULL && secondHead != NULL){
        firstHead = firstHead->next;
        secondHead = secondHead->next;
    }

    if(firstHead == secondHead){
        return firstHead;
    }
    return NULL;

}
