/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
*/

#import <DisplayModule/DisplayModule-Structs.h>
#import <ControlCenterUIKit/CCUISliderModuleBackgroundViewController.h>

@class CBClient, CBAdaptationClient, CBBlueLightClient, UIAlertController, NSMutableArray, CCUILabeledRoundButtonViewController;

@interface CCUIDisplayBackgroundViewController : CCUISliderModuleBackgroundViewController {

	CBClient* _brightnessClient;
	CBAdaptationClient* _trueToneClient;
	CBBlueLightClient* _nightShiftClient;
	SCD_Struct_CC2 _currentStatus;
	UIAlertController* _presentedAlertController;
	NSMutableArray* _buttons;
	CCUILabeledRoundButtonViewController* _styleModeButton;
	CCUILabeledRoundButtonViewController* _nightShiftButton;
	CCUILabeledRoundButtonViewController* _trueToneButton;

}

@property (nonatomic,retain) CCUILabeledRoundButtonViewController * styleModeButton;               //@synthesize styleModeButton=_styleModeButton - In the implementation block
@property (nonatomic,retain) CCUILabeledRoundButtonViewController * nightShiftButton;              //@synthesize nightShiftButton=_nightShiftButton - In the implementation block
@property (nonatomic,retain) CCUILabeledRoundButtonViewController * trueToneButton;                //@synthesize trueToneButton=_trueToneButton - In the implementation block
-(id)_timeFormatter;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)_updateState;
-(CGRect)effectiveContentFrameForContainerFrame:(CGRect)arg1 ;
-(void)_styleModeButtonPressed:(id)arg1 ;
-(void)_setupStyleMode;
-(void)_nightShiftButtonPressed:(id)arg1 ;
-(void)_setupNightShift;
-(void)_trueToneButtonPressed:(id)arg1 ;
-(void)_toggleStyleMode;
-(BOOL)_toggleNightShift;
-(void)_toggleTrueTone;
-(void)_styleModeDidChange;
-(CCUILabeledRoundButtonViewController *)nightShiftButton;
-(id)_subtitleForBlueLightStatus:(SCD_Struct_CC3)arg1 ;
-(id)_subtitleForTrueToneEnabled:(BOOL)arg1 ;
-(CCUILabeledRoundButtonViewController *)styleModeButton;
-(id)_subtitleForUserInterfaceStyle:(long long)arg1 nextTransition:(id)arg2 ;
-(void)_getBlueLightStatus:(/*^block*/id)arg1 ;
-(void)_setNightShiftEnabled:(BOOL)arg1 ;
-(id)_alertControllerForDisablingAccessibilityScreenFilter:(/*^block*/id)arg1 cancelBlock:(/*^block*/id)arg2 ;
-(id)_subtitleFormatStringForBlueLightEnabled:(BOOL)arg1 transitionTime:(SCD_Struct_CC0)arg2 ;
-(unsigned long long)_formattedHourForTransitionTime:(SCD_Struct_CC0)arg1 ;
-(id)_timeStringForBlueLightTransitionTime:(SCD_Struct_CC0)arg1 ;
-(id)_timeStringForHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(unsigned long long)_formattedHourForHour:(unsigned long long)arg1 ;
-(BOOL)_uses24HourTime;
-(void)setStyleModeButton:(CCUILabeledRoundButtonViewController *)arg1 ;
-(void)setNightShiftButton:(CCUILabeledRoundButtonViewController *)arg1 ;
-(CCUILabeledRoundButtonViewController *)trueToneButton;
-(void)setTrueToneButton:(CCUILabeledRoundButtonViewController *)arg1 ;
@end

