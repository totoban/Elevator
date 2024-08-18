

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimpleButton.generated.h"

class UBoxComponent;

UCLASS()
class ELEVATOR_API ASimpleButton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASimpleButton();

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);


	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	TObjectPtr<USceneComponent> SceneComponent;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> ButtonMesh; 
	UPROPERTY(EditAnywhere)
	TObjectPtr<UBoxComponent> BoxCollision;

	



	

private:

};
