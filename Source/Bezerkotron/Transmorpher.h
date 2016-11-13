// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Transmorpher.generated.h"

UCLASS()
class BEZERKOTRON_API ATransmorpher : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATransmorpher();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
};
