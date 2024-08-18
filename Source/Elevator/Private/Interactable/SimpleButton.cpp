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
	BoxCollision->SetBoxExtent(FVector(20.f, 20.f, 7.5));
	BoxCollision->SetRelativeLocation(FVector(0.f, 0.f, 20.f));
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ASimpleButton::OnBeginOverlap);
	
}

void ASimpleButton::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("OVERLAP BEGIN"))
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

