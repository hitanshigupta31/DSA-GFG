class Solution {
  public:
    vector<int> printList(Node *head) {
        // code here
        Node* temp=head;
        vector<int> result;
        while(temp!=NULL)
        {
            result.push_back(temp->data);
            temp=temp->next;
        }
        return result;
    }
};