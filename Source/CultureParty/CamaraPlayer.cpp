// Fill out your copyright notice in the Description page of Project Settings.


#include "CamaraPlayer.h"

// Sets default values
ACamaraPlayer::ACamaraPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACamaraPlayer::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACamaraPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACamaraPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}