/*************************************************************************
	> File Name: multiplexingIO.h
	> Author: 
	> Mail: 
	> Created Time: Sun 04 Oct 2015 03:41:10 PM CEST
 ************************************************************************/

#ifndef _MULTIPLEXINGIO_H
#define _MULTIPLEXINGIO_H
typedef struct SockNode
{
    int socknum;
    struct SockNode *next;
}SockNode;

typedef struct SockLinklist
{
    fd_set fdset;
    int nfds;
    SockNode *first;
}SockLinklist;
SockLinklist linklist;
/////////////////////////////////////////////////////
void sock_linklist_init();
void sock_linklist_insert(SockNode *);	
void sock_linklist_destroy();
void sock_linklist_rm(SockNode *, SockNode **);
void multiplexing_IO_mode(int, struct sockaddr *);

#endif
