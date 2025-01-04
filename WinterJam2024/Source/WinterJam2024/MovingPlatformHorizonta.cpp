// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatformHorizonta.h"

// Sets default values
AMovingPlatformHorizonta::AMovingPlatformHorizonta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatformHorizonta::BeginPlay()
{
	Super::BeginPlay();
	
	StartPosition = GetActorLocation();
}

// Called every frame
void AMovingPlatformHorizonta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CurrentPosition = CurrentPosition + FVector(0,10,0) * DeltaTime;
	SetActorLocation(CurrentPosition);
	MovingDistance = FVector::Dist(StartPosition, CurrentPosition);
}

