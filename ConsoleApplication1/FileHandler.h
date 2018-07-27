#pragma once
#include <string>
#include <fstream>
#include "Defs.h"
using namespace std;

bool writeToFileOnce(string fileName, string content, bool rewrite);
bool writeToFileOnce(string * fileName, string * content, bool  rewrite);
