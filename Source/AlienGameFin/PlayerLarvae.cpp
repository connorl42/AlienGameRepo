// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerLarvae.h"

// Sets default values
APlayerLarvae::APlayerLarvae()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerLarvae::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerLarvae::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerLarvae::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

