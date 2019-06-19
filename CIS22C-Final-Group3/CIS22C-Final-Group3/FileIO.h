/********************************************************************************
*********************************** FileIO **************************************
*********************************************************************************
* Author: Olivier Chan - 100%
*
* The purpose of these functions are to handle saving and loading data from files.
*****************
***** USAGE *****
*****************
* WIP
*********************************************************************************/

#pragma once

#include <string>
#include "Item.h"
#include "Array.h"

namespace FileIO
{
	/**
	* @author Olivier Chan
	*
	* @brief Populates the passed empty List with all Items that can be loaded from the given file path.
	*
	* @pre arr must be empty. filePath must point to a file that is correctly formatted following the documentation.
	* @post arr will contain all Item objects that could be constructed from the file.
	*
	* @param arr The Array to populate.
	* @param filePath The filepath of the file containing the Item data.
	*/
	void loadFileIntoArray(Array<Item>& arr, const std::string& filePath);
	/**
	* @author Olivier Chan
	*
	* @brief Serializes the list of items into a file at the given filepath.
	*
	* @pre arr should contain any number of Items. filePath should point to the current data file location.
	* @post The file at filePath will be overwritten to contain the contents of list, serialized into database format following documentation.
	*
	* @param arr The Array to serialize.
	* @param filePath The filepath of the file to save the serialized data.
	*/
	void saveArrayIntoFile(Array<Item>& arr, const std::string& filePath);
};