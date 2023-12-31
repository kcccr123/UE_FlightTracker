// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "viewModelCesium.h"
#include "MyHUD.generated.h"

/**
 *
 */
UCLASS()
class AMyHUD : public AHUD
{
	GENERATED_BODY()
	virtual void BeginPlay() override;
	UViewModelCesium* ViewModelInstance;
protected:
	TSharedPtr<class SSlateUI> SearchMenu;
	TSharedPtr<class SFlightListView> ListMenu;
	TSharedPtr<class SSlateUI> MenuWidget;
	TSharedPtr<class SWidget> MenuContainer;


public:
	bool isOpen;
	void QuitProject();
	void ShowMenu();
	void CloseMenu();
	void OpenList(const char *);
};
