// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bala_Tiro_Al_Blanco.generated.h"

UCLASS()
class CAPSTONE_API ABala_Tiro_Al_Blanco : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABala_Tiro_Al_Blanco();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
