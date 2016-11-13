// Fill out your copyright notice in the Description page of Project Settings.

#include "Bezerkotron.h"
#include "Transmorpher.h"


// Sets default values
ATransmorpher::ATransmorpher()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATransmorpher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATransmorpher::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ATransmorpher::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

