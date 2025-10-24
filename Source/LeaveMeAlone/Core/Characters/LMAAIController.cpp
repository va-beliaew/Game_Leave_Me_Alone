// LeaveMeAlone game by Netologia. All rights reserved.


#include "Core/Characters/LMAAIController.h"
#include "Core/Characters/LMA_EnemyCharacter.h"


void ALMAAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	const auto AICharacter = Cast<ALMA_EnemyCharacter>(InPawn);
	if (AICharacter)
	{
		RunBehaviorTree(AICharacter->BehaviorTreeAsset);
	}
}
