Node *detectLoop(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}
Node *firstNode(Node *head)
{
	//    Write your code here.
    Node *intersection = detectLoop(head);
    if(intersection != NULL)
    {
        Node *slow = head;
        while (slow != intersection)
        {
            slow = slow->next;
            intersection = intersection->next;
        }
            return slow;
    }   
}
