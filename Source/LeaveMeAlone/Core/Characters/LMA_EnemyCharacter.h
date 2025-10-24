// LeaveMeAlone game by Netologia. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LMA_EnemyCharacter.generated.h"

class ULMAHealthComponent;
class UBehaviorTree;

UCLASS()
class LEAVEMEALONE_API ALMA_EnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALMA_EnemyCharacter();
	//void OnHealthChanged(float NewHealth);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI")
	UBehaviorTree* BehaviorTreeAsset;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	ULMAHealthComponent* HealthComponent;

	
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	

};
