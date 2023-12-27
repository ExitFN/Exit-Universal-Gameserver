#include "UFortControllerComponent_MapDiscoverability.h"

void UFortControllerComponent_MapDiscoverability::DiscoverAllPois()
{
	static auto DiscoverAllPois = FindObject<UFunction>("/Script/FortniteGame.FortControllerComponent_MapDiscoverability.DiscoverAllPois");
	this->ProcessEvent(DiscoverAllPois);
}

void UFortControllerComponent_MapDiscoverability::DiscoverAllLandmarks()
{
	static auto DiscoverAllLandmarks = FindObject<UFunction>("/Script/FortniteGame.FortControllerComponent_MapDiscoverability.DiscoverAllLandmarks");
	this->ProcessEvent(DiscoverAllLandmarks);
}

void UFortControllerComponent_MapDiscoverability::DiscoverAllAreas()
{
	static auto DiscoverAllAreas = FindObject<UFunction>("/Script/FortniteGame.FortControllerComponent_MapDiscoverability.DiscoverAllAreas");
	this->ProcessEvent(DiscoverAllAreas);
}