/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSTimeRangeCellDelegate.h>

@class CBClient, NSDateFormatter, NSTimer, PSSpecifier;

@interface DBSColorTemperatureController : PSListController <PSTimeRangeCellDelegate> {

	CBClient* _brightnessClient;
	NSDateFormatter* _timeFormatter;
	BOOL _temperatureSliderWasTracking;
	NSTimer* _blueLightReductionLabelRefreshTimer;
	BOOL _showColorTemperature;
	BOOL _showingScheduleRange;
	PSSpecifier* _scheduleRangeSpecifier;
	PSSpecifier* _scheduleSwitchSpecifier;
	PSSpecifier* _manualSwitchSpecifier;
	PSSpecifier* _temperatureSlider;

}
-(id)specifiers;
-(id)fromDetailForCell:(id)arg1 ;
-(id)toDetailForCell:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)handleBlueLightStatusChanged:(SCD_Struct_DB2*)arg1 ;
-(id)blueLightReductionFooter;
-(void)showScheduleRange:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_printBlueLightStatus:(SCD_Struct_DB2*)arg1 ;
-(void)showAlertToDisableAccessibilityFiltersForBlueLightReduction:(/*^block*/id)arg1 cancel:(/*^block*/id)arg2 ;
-(void)colorTemperatureSliderDidChange;
-(id)localizedTimeForTime:(SCD_Struct_DB0)arg1 ;
-(id)getBlueLightReductionEnabled:(id)arg1 ;
-(void)setBlueLightReductionEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getBlueLightReductionScheduleEnabled:(id)arg1 ;
-(void)setBlueLightReductionSchedule:(id)arg1 forSpecifier:(id)arg2 ;
-(id)temperatureStrength:(id)arg1 ;
-(void)setTemperatureStrength:(id)arg1 specifier:(id)arg2 ;
@end

