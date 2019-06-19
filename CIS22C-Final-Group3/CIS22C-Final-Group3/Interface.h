/********************************************************************************
********************************* Interface *************************************
*********************************************************************************
* Author: Olivier Chan - 50%
* Author: Luis Guerrero - 50%
*
* The purpose of this class is to display user interface.
*****************
***** USAGE *****
*****************
* WIP
*********************************************************************************/

#pragma once
#include "Item.h"
#include "List.h"
#include "AVLTree.h"
#include "HashTable.h"
#include "SortList.h"


namespace Interface
{
	void clearScreen(const bool = true);
	void pause();
	void initialize();
	void printHeader();
	void promptOption();
	void displayMainMenu();
	void displayInventory(List<Item>&);
	Item addNewItem(List<Item>&);
	void displayDeleteMenu();
	Item deleteByUid(List<Item>&);
	Item deleteByName(List<Item>&);
	Item deleteByUpc(List<Item>&);
	void displaySearchMenu();
	Item searchByName(List<Item>&);
	Item searchByUpc(List<Item>&);
	void displayHashTable(HashTable<int, Item>&);
	void displayKeySequence(List<Item>&);
	void displayTypeTrees();
	void calculateProfit(AVLTree<double>&, AVLTree<double>&);
};