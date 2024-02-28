// The meats of the program

#include "Resources.hpp"
#include "OtherFunc.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace::std;

int fabSize = 70;

int main() {
	cout << "Are you using a smithy?: ";
	string input;
	cin >> input;
	if (input == "yes") {
		cout << "Use an Argentavis" << endl;
		exit(1);
	}

	cout << "Input your stack size multiplier: ";
	float stackMult;
	cin >> stackMult;
	if (stackMult <= 0) {
		cout << "Invalid stack multiplier\n";
		exit(3);
	}

	cout << "Input the number of resources required in recipe: ";
	int numResources;
	cin >> numResources;
	if (numResources <= 0) {
		cout << "No resources required, so yes?\n";
		exit(2);
	}

	vector<string> listResources; // Looks like: {metal, organic poly, cp}
	for (int i = 1; i <= numResources; i++) {
		cout << "Input resource type (metal or hide or poly, etc...) #" << i << ": ";
		string tempResourceInput;
		cin >> tempResourceInput;
		if (tempResourceInput == "poly") {
			cout << "organic or hard? ";
			string orgOrHard;
			cin >> orgOrHard;
			if (orgOrHard == "organic") {
				tempResourceInput = "organic poly";
			}
			else if (orgOrHard == "hard") {
				tempResourceInput = "hard poly";
			}
		}
		listResources.push_back(tempResourceInput);
	}
	cout << "Your resources are: " << listResources << endl;

	vector<float> IlistResourcesStackSize; // Looks like {300 (for metal), 20 (for organic poly)}
	for (string resource : listResources) {
		if (resource == "metal") {
			metal resource;
			IlistResourcesStackSize.push_back(stackMult * resource.getStack());
		}
		else if (resource == "cp") {
			cementPaste resource;
			IlistResourcesStackSize.push_back(stackMult * resource.getStack());
		}
		else if (resource == "organic poly") {
			orgPoly resource;
			IlistResourcesStackSize.push_back(stackMult * resource.getStack());
		}
		else if (resource == "hard poly") {
			hardPoly resource;
			IlistResourcesStackSize.push_back(stackMult * resource.getStack());
		}
		else if (resource == "fiber") {
			fiber resource;
			IlistResourcesStackSize.push_back(stackMult * resource.getStack());
		}
		else if (resource == "hide") {
			hide resource;
			IlistResourcesStackSize.push_back(stackMult * resource.getStack());
		}
		else if (resource == "pelt") {
			pelt resource;
			IlistResourcesStackSize.push_back(stackMult * resource.getStack());
		}
		else if (resource == "chitin" || resource == "keratin") {
			chitinKeratin resource;
			IlistResourcesStackSize.push_back(stackMult * resource.getStack());
		}
		else if (resource == "crystal") {
			crystal resource;
			IlistResourcesStackSize.push_back(stackMult * resource.getStack());
		}
	}

	vector<float> listCost; // Looks like {cost for metal, cost for poly}
	for (int i = 0; i < listResources.size(); i++) {
		cout << "How much " << listResources[i] << ": ";
		int temp;
		cin >> temp;
		listCost.push_back(temp);
	}

	int totalStacks = 0;
	for (int i = 0; i < listCost.size(); i++) {
		totalStacks += (listCost[i] / IlistResourcesStackSize[i]);
	}
	if (totalStacks > fabSize) {
		cout << "You cannot craft this in a fabricator, it takes " << totalStacks << " slots." << endl;
	}
	else {
		cout << "You can craft this in a fabricator, it takes " << totalStacks << " slots." << endl;
	}

	return 0;
}
