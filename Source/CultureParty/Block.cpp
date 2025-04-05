// Fill out your copyright notice in the Description page of Project Settings.


#include "Block.h"

#include "CharacterPlayer.h"
#include "Components/BoxComponent.h"

// Sets default values
ABlock::ABlock()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	Block = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block"));

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));

	Block->SetupAttachment(RootComponent);
	BoxCollision->SetupAttachment(Block);

	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABlock::BeginOverlap);
}

void ABlock::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacterPlayer* Character = Cast<ACharacterPlayer>(OtherActor);
	if (Character)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Object"));
		//Block->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();

	Block->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called every frame
void ABlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

