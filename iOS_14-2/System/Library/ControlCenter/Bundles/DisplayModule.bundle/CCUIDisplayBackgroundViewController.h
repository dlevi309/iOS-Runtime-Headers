/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_styleModeButtonPressed:(id)arg1 ;
-(BOOL)_toggleNightShift;
-(BOOL)_uses24HourTime;
-(id)_timeStringForHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(void)_toggleTrueTone;
-(void)setStyleModeButton:(CCUILabeledRoundButtonViewController *)arg1 ;
-(id)_alertControllerForDisablingAccessibilityScreenFilter:(/*^block*/id)arg1 cancelBlock:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_subtitleForBlueLightStatus:(SCD_Struct_CC3)arg1 ;
-(CCUILabeledRoundButtonViewController *)trueToneButton;
-(id)_timeStringForBlueLightTransitionTime:(SCD_Struct_CC0)arg1 ;
-(CCUILabeledRoundButtonViewController *)styleModeButton;
-(unsigned long long)_formattedHourForTransitionTime:(SCD_Struct_CC0)arg1 ;
-(void)_toggleStyleMode;
-(void)_setNightShiftEnabled:(BOOL)arg1 ;
-(void)_updateState;
-(void)_styleModeDidChange;
-(void)_setupStyleMode;
-(void)setNightShiftButton:(CCUILabeledRoundButtonViewController *)arg1 ;
-(CCUILabeledRoundButtonViewController *)nightShiftButton;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_nightShiftButtonPressed:(id)arg1 ;
-(void)_trueToneButtonPressed:(id)arg1 ;
-(unsigned long long)_formattedHourForHour:(unsigned long long)arg1 ;
-(void)setTrueToneButton:(CCUILabeledRoundButtonViewController *)arg1 ;
-(id)_subtitleForUserInterfaceStyle:(long long)arg1 nextTransition:(id)arg2 ;
-(id)_subtitleForTrueToneEnabled:(BOOL)arg1 ;
-(void)_getBlueLightStatus:(/*^block*/id)arg1 ;
-(id)_subtitleFormatStringForBlueLightEnabled:(BOOL)arg1 transitionTime:(SCD_Struct_CC0)arg2 ;
-(void)_setupNightShift;
@end

