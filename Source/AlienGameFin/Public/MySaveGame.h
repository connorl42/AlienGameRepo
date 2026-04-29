#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"


UCLASS()
class ALIENGAMEFIN_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	
    UPROPERTY()
    //FPlayerData PlayerData;

    UPROPERTY()
    //TMap<FString, FLevelSaveData> WorldData;

    UPROPERTY()
    //FInventoryData InventoryData;
};
