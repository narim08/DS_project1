#pragma once
#include <iostream>
#include "TermsBST.h"
using namespace std;

class TermsListNode
{
private:
	char type[2]; // Type of subscription terms
	int memNum; // number of members
	TermsBST* bPtr; //TermsBST pointer
	
	TermsListNode* next;

public:
	TermsListNode(const char* type) :memNum(0), bPtr(nullptr), next(nullptr) {
		strcpy(this->type, type);
	}
	~TermsListNode() {}

	TermsListNode* getNext() { return next; }
	const char* getType() { return this->type; }
	const int getNum() { return this->memNum; }
	const TermsBST* getPtr() { return this->bPtr; }

	void setNum() { this->memNum++; } // increase number of member
	void setDeNum() { this->memNum--; } // Decrease number of member
	void setPtr(TermsBST* ptr) { this->bPtr = ptr; } // Set object pointer

	void setNext(TermsListNode* next) { this->next = next; }
};