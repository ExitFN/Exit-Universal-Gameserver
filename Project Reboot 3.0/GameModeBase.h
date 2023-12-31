#pragma once

#include "Actor.h"

#include "Controller.h"
#include "Pawn.h"
#include "UnrealString.h"
#include "GameSession.h"

class AGameModeBase : public AActor // AInfo
{
public:
	AGameSession* GetGameSession()
	{
		static auto GameSessionOffset = this->GetOffset("GameSession");
		return this->Get<AGameSession*>(GameSessionOffset);
	}

	UClass* GetDefaultPawnClassForController(AController* InController);
	void ChangeName(AController* Controller, const FString& NewName, bool bNameChange);
	AActor* K2_FindPlayerStart(AController* Player, FString IncomingName);
	void RestartPlayerAtTransform(AController* NewPlayer, FTransform SpawnTransform);
	void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot);
	void RestartPlayer(AController* NewPlayer);

	static APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot);
};