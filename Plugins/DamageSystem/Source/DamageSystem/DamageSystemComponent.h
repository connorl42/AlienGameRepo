#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageSystemTypes.h"
#include "DamageSystemComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DAMAGESYSTEM_API UDamageSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDamageSystemComponent();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth = 100.0f;

private:
	
	UPROPERTY()
	float CurrentHealth = MaxHealth; 
	
	UPROPERTY()
	bool IsDead = false;
	
	UPROPERTY()
	bool IsBlocking = false;

	UPROPERTY()
	bool IsInvincible = false;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	
	UFUNCTION(BlueprintCallable, Category = "Damage")
	bool HandleIncomingDamage(const FDamageInfo& DamageInfo);
	
	UFUNCTION(BlueprintCallable, Category = "Damage")
	void HandleIncomingHeal(float HealAmount, AActor* Healer);
	
	//Get functions
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Health")
	float GetCurrentHealth() { return CurrentHealth; };
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Health")
	float GetMaxHealth() const { return MaxHealth; };
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Health")
	bool GetIsDead() const { return IsDead; };
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "States")
	bool GetIsInvincible() const { return IsInvincible; };
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "States")
	bool GetIsBlocking() const { return IsBlocking; };
	
	//Setter Functions
	UFUNCTION(BlueprintCallable, Category = "States")
	void SetIsInvincible(bool NewInvincible) { IsInvincible = NewInvincible; };
	
	UFUNCTION(BlueprintCallable, Category = "States")
	void SetIsBlocking(bool NewBlocking) { IsBlocking = NewBlocking; };
};
