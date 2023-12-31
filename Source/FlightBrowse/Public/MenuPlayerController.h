// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CesiumGeoreference.h"
#include "MyGlobeAwareDefaultPawn.h"
#include "PlaneActor.h"
#include "MenuPlayerController.generated.h"

/**
 *
 */
UCLASS()
class AMenuPlayerController : public APlayerController
{
	GENERATED_BODY()
	AMenuPlayerController();
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	void OpenMenu();
	AMyGlobeAwareDefaultPawn* player;
	APlaneActor* plane;
	ACesiumGeoreference* CesiumGeoreference;
	class UCesiumFlyToComponent* FlyToComponent;


public:
	void TeleportPlayer(double longta, double lata, double alta, int32 heading);

};
