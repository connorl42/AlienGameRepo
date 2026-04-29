USTRUCT()
struct FPlayerData
{
    GENERATED_BODY()

    UPROPERTY()
    FVector Location;

    UPROPERTY()
    FRotator Rotation;

    UPROPERTY()
    int32 Health;

    UPROPERTY()
    int32 XP;
};
