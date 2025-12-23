class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        // Code here
        Node* temp=*head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if(count%2==0)
        {
            return true;
        }
        else
        return false;
    }
};