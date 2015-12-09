//
//  main.cpp
//  chain table
//
//  Created by 孙宇 on 15/12/2.
//  Copyright © 2015年 孙宇. All rights reserved.
//

#include <iostream>
 struct student
    {
        char name[50];
        int num;
        struct student *next;
        
    };
int main(int argc, const char * argv[]) {
    // insert code here...

    int i;
    student *p,*q,*head;
    head=new student;
    head->next=0;
    p=head;
    for(i=0;i<4;i++)
    {
        q=new student;
        p->next=q;
        q->next=0;
        scanf("%s %d",q->name,&(q->num));
        p=q;
    }
    p=head->next;
    while (p!=0)
    {
        printf("%s %d\n",p->name,p->num);
        p=p->next;
    }
    while(p!=0)
    {
        q=p;
        p=p->next;
        free(q);
        
    }
    return 0;
}
