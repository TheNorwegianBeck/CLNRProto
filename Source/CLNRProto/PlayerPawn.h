// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class CLNRPROTO_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Move_X(float AxisValue);
	void Move_Y(float AxisValue);
	void InteractPressed();
	void InteractReleased();

	FVector CurrentVelocity;	

	UPROPERTY(EditAnywhere)
		USceneComponent* OurVisibleComponent;

	UPROPERTY(EditAnywhere)
		float MoveSpeed = 100;

	UPROPERTY(EditAnywhere)
		float CurrentKit;
	UPROPERTY(EditAnywhere)
		bool Interacting = false;

	
	
};
