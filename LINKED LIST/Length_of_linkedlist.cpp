class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        Node* temp=head;
        int count=0;
        
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
        
    }
};