#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UI.generated.h"
#include "Camera/CameraComponent.h"
#include "Blueprint/UserWidget.h"

UCLASS()
class DUMBWAYSTODATE_API AUI : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AUI();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Référence à la caméra
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComponent;

	// Classe du widget à afficher
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> WidgetClass;

	// Instance du widget
	UUserWidget* WidgetInstance;
};
