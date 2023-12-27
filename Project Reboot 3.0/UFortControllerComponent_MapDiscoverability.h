#pragma once
#include "FortPlayerController.h"

class UFortControllerComponent_MapDiscoverability : public AFortPlayerController
{
public:
	void DiscoverAllPois();
	void DiscoverAllLandmarks();
	void DiscoverAllAreas();
};
