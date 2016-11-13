// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/SceneComponent.h"
#include "WeaponBase.generated.h"



UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	beam,
	projectile,
	melee
};

UCLASS( Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BEZERKOTRON_API UWeaponBase : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponBase();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Damage)
	float baseDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Damage)
	EWeaponType weaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Update)
	bool isFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parent)
	AActor* parent;
};
