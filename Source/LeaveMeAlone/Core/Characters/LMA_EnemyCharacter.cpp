// LeaveMeAlone game by Netologia. All rights reserved.


#include "Core/Characters/LMA_EnemyCharacter.h"
#include "Core/Components/LMAHealthComponent.h"

// Sets default values
ALMA_EnemyCharacter::ALMA_EnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HealthComponent = CreateDefaultSubobject<ULMAHealthComponent>("HealthComponent");
}

// Called when the game starts or when spawned
void ALMA_EnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALMA_EnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




