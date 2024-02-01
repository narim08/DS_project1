#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class NameBSTNode
{
private:

	NameBSTNode* left;
	NameBSTNode* right;

	char name[21]; //Member name
	int age; //Member age
	char infoDate[12]; //Personal information collection date
	char endDate[12]; //Personal information expiration date
	char type[2]; //Type of subscription terms and conditions

public:
	NameBSTNode(const char* name, int age, const char* infoDate, const char* endDate, const char* type) {
		strcpy(this->name, name);
		this->age = age;
		strcpy(this->infoDate, infoDate);
		strcpy(this->endDate, endDate);
		strcpy(this->type, type);
		left = nullptr;
		right = nullptr;
	}
	~NameBSTNode() {}

	const char* get_name() const { return this->name; }
	int get_age() const { return this->age; }
	const char* get_infoDate() const { return this->infoDate; }
	const char* get_endDate() const { return this->endDate; }
	const char* get_type() const { return this->type; }

	NameBSTNode* getLeft() { return left; }
	NameBSTNode* getRight() { return right; }

	void setLeft(NameBSTNode* left) { this->left = left; }
	void setRight(NameBSTNode* right) { this->right = right; }
	void setName(const char* name){ strcpy(this->name, name); }
};