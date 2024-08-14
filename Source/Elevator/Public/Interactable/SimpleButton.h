

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimpleButton.generated.h"

UCLASS()
class ELEVATOR_API ASimpleButton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASimpleButton();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> ButtonMesh;

	TObjectPtr<USceneComponent> SceneComponent;

private:

};
