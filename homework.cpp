question 1
struct node*update(struct node*start,int p)
{
    //Add your code here
    node* temp=start;
    for(int i=1;i<p;i++){
        temp=temp->next;
    }
    node* head2=temp->next;
    temp->next=NULL;
    start=reverseDLL(start);
    head2=reverseDLL(head2);
    
    temp=start;
    for(int i=1;i<p;i++){
        temp=temp->next;
    }
    temp->next=head2;
    head2->prev=temp;
    start=reverseDLL(start);
    return start;
}


Question 2
node* reverseDLL(node * head){
    //Your code here
    if(head==NULL || head->next==NULL)
    return head;
    
    node* curr=head;
    node* p=NULL;
    node* n=head->next;
    
    while(curr!=NULL){
        curr->next=p;
        curr->prev=n;
        
        p=curr;
        curr=n;
        
        if(n==NULL)
        break;
        
        n=n->next;
    }
    head=p;
    return head;
}
