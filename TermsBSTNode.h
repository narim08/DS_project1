#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class TermsBSTNode
{
private:

	TermsBSTNode* left;
	TermsBSTNode* right;

	char name[21]; //Member name
	int age; //Member age
	char infoDate[12]; //Personal information collection date
	char endDate[12]; //Personal information expiration date

public:
	TermsBSTNode(const char* name, int age, const char* infoDate, const char* endDate) {
		strcpy(this->name, name);
		this->age = age;
		strcpy(this->infoDate, infoDate);
		strcpy(this->endDate, endDate);
		left = nullptr;
		right = nullptr;
	}
	~TermsBSTNode() {}

	const char* get_name() const { return this->name; }
	int get_age() const { return this->age; }
	const char* get_infoDate() const { return this->infoDate; }
	const char* get_endDate() const { return this->endDate; }

	TermsBSTNode* getLeft() { return left; }
	TermsBSTNode* getRight() { return right; }

	void setLeft(TermsBSTNode* left) { this->left = left; }
	void setRight(TermsBSTNode* right) { this->right = right; }
	void setEndDate(const char* endDate) { strcpy(this->endDate, endDate); }
};