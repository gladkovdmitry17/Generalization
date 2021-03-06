#pragma once

#include "common.h"

class GeneralizationFile
{
private:
	std::string path;
	std::string pathRes;
	uint32_t numOfCurves = 0;
	std::vector<uint32_t> pointInCurves;
	curvesCoord curvesX;
	curvesCoord curvesY;
	curves Curves;

	void BuildCurvesMap();
public:
	GeneralizationFile();
	uint32_t GetNumberOfCurves();
	curves GetCurves();
	curveCoord GetCurveCoordPointsX(uint32_t curve);
	curveCoord GetCurveCoordPointsY(uint32_t curve);
	uint32_t GetCurveNumberPoints(uint32_t curve);
	void SetPath(std::string string_path);
	int ParseAllDataInFile();
	virtual ~GeneralizationFile();
};

