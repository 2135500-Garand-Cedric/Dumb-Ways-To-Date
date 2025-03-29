
#include "UI.h"
#include "Camera/CameraComponent.h"

// Sets default values
AUI::AUI()
{
	// Set this actor to call Tick() every frame. 
	PrimaryActorTick.bCanEverTick = true;

	// Create and configure the camera component
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	RootComponent = CameraComponent;

	// Load the widget class (ensure the path is correct)
	static ConstructorHelpers::FClassFinder<UUserWidget> WidgetObj(TEXT("/UI/SampleUI"));
	if (WidgetObj.Succeeded())
	{
		WidgetClass = WidgetObj.Class;
	}
}

// Called when the game starts or when spawned
void AUI::BeginPlay()
{
	BeginPlay();

	if (WidgetClass)
	{
		// Create the widget and add it to the viewport
		WidgetInstance = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
		if (WidgetInstance)
		{
			WidgetInstance->AddToViewport();
		}
	}
}

// Called every frame
void AUI::Tick(float DeltaTime)
{
	Tick(DeltaTime);
}
