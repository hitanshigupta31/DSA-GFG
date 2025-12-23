class Solution {
  public:
    bool searchLinkedList(Node *head, int x) {
        // Your code here
        Node* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            if(temp->data==x)
            {
                return 1;
            }
            temp=temp->next;
        }
        return false;
    }
};