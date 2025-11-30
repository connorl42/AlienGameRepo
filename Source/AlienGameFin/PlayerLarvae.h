// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerLarvae.generated.h"



UCLASS()
class ALIENGAMEFIN_API APlayerLarvae : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

protected:
	UPROPERTY(EditAnywhere, Category = "EnhanacedInput")
	class UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, Category = "EnhanacedInput")
	class UInputAction* LarvaeMoveAction;

	UPROPERTY(EditAnywhere, Category = "EnhanacedInput")
	class UInputAction* LarvaeLookAction;

	UPROPERTY(EditAnywhere, Category = "EnhanacedInput")
	class UInputAction* LarvaeJumpAction;


public:
	// Sets default values for this character's properties
	APlayerLarvae();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	void Move(const FInputActionValue& InputValue);
	void Look(const FInputActionValue& InputValue);
	void StartJump();
};
