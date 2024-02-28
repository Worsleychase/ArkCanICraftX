// List of resources and their stack size on default

#ifndef RESOURCESTACK_HPP
#define RESOURCESTACK_HPP
#include<iostream>
#include <vector>
#include <string>

class metal {
public:
	int getStack(void) {
		return stackSize;
	}
private:
	int stackSize = 300;
};

class cementPaste {
public:
	int getStack(void) {
		return stackSize;
	}
private:
	int stackSize = 100;
};

class orgPoly {
public:
	int getStack(void) {
		return stackSize;
	}
private:
	int stackSize = 20;
};

class hardPoly {
public:
	int getStack(void) {
		return stackSize;
	}
private:
	int stackSize = 100;
};

class fiber {
public:
	int getStack(void) {
		return stackSize;
	}
private:
	int stackSize = 300;
};

class hide {
public:
	int getStack(void) {
		return stackSize;
	}
private:
	int stackSize = 200;
};

class pelt {
public:
	int getStack(void) {
		return stackSize;
	}
private:
	int stackSize = 200;
};

class chitinKeratin {
public:
	int getStack(void) {
		return stackSize;
	}
private:
	int stackSize = 100;
};

class crystal {
public:
	int getStack(void) {
		return stackSize;
	}
private:
	int stackSize = 100;
};

#endif
