#pragma once

#include "Object.h"

class UCheatManager : public UObject
{
public:
	void Teleport();
	void Fly();
	void DestroyTarget();

	static UClass* StaticClass();
};