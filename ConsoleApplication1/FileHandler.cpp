#include "stdafx.h"
#include "FileHandler.h"



bool writeToFileOnce(string fileName, string content, bool rewrite)
{
	bool returnRes = true;
	ofstream fout;
	if (rewrite)
	{
		fout.open(fileName.c_str());
	} else
	{
		fout.open(fileName.c_str(), ios::app);
	}

	
	if (!fout.is_open())
	{
		PRINT_ERROR << "файл открыть не удалось: "<< fileName << endl;
		returnRes = false;
		return returnRes;
	}
	
	fout << content << endl;

	fout.close();
	return returnRes;
}