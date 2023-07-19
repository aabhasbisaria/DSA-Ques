LinkedListNode<int> *getMiddle(LinkedListNode<int> *head)
{
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head -> next;
    while(fast!=NULL && fast->next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
LinkedListNode<int> *reverse(LinkedListNode<int> *head)
{
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *forward = NULL;
    while(curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head == NULL || head->next == NULL)
    {
        return true;
    }
    
    LinkedListNode<int> *middle = getMiddle(head);
    LinkedListNode<int> *temp = middle -> next;
    middle->next = reverse(temp);
    LinkedListNode<int> *head1 = head;
    LinkedListNode<int> *head2 = middle->next;
    while(head2 != NULL)
    {
        if(head1 -> data != head2 -> data)
        {
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    
    temp = middle -> next;
    middle->next = reverse(temp);
    return true;
}
