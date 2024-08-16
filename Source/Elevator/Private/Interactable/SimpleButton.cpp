// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable/SimpleButton.h"
#include "Components/BoxComponent.h"

// Sets default values
ASimpleButton::ASimpleButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	SceneComponent = CreateDefaultSubobject<USceneComponent>("Scene");
	SetRootComponent(SceneComponent);

	ButtonMesh = CreateDefaultSubobject<UStaticMeshComponent>("Button");
	ButtonMesh->SetupAttachment(SceneComponent); 

	BoxCollision = CreateDefaultSubobject<UBoxComponent>("Box Collision");
	BoxCollision->SetupAttachment(ButtonMesh);
	
	

	

}

// Called when the game starts or when spawned
void ASimpleButton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASimpleButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

