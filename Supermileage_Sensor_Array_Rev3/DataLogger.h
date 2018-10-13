#pragma once

#include <fstream>
#include <iostream>

class DataLogger
{
public:
	DataLogger();
	void logData(double distance, double speed, double acceleration, double engineRPM);
	~DataLogger();
	std::fstream file;
	std::ofstream outputFile;
};

