#include "pch.h"
#include "DataLogger.h"

#include <set>
#include <iterator>
#include <string>
#include <algorithm>


DataLogger::DataLogger()
{
	
}

void DataLogger::logData(double distance, double speed, double acceleration, double engineRPM)
{
	file.open("test1.csv", std::ofstream::out | std::ofstream::app);
	file << distance << ", " << speed << ", " << acceleration << ", " << engineRPM <<  "\n";
	file.close();
}

DataLogger::~DataLogger()
{
}
