// LeaveMeAlone game by Netologia. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "LMAAIController.generated.h"

class ALMA_EnemyCharacter;

UCLASS()
class LEAVEMEALONE_API ALMAAIController : public AAIController
{
	GENERATED_BODY()
	

protected:

	virtual void OnPossess(APawn* InPawn) override;
};
