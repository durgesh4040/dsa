class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node *fast=head;
        Node *slow=head;
        int c=0;
        while(fast!=NULL&& fast->next!=NULL){
         fast=fast->next->next;
         slow=slow->next;
         if(fast==slow){
             do{
                 slow=slow->next;
                 c++;
                 
             }while(slow!=fast);
             return c;
         }
        }
        return 0;
    }
};
