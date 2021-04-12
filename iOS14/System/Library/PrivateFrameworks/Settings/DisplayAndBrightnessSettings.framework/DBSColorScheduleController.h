/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSDateTimePickerCellDelegate.h>

@class CBClient, PSSpecifier, NSDateFormatter, UIDatePicker;

@interface DBSColorScheduleController : PSListController <PSDateTimePickerCellDelegate> {

	CBClient* _brightnessClient;
	PSSpecifier* _radioGroup;
	PSSpecifier* _sunsetToSunriseRadioSpecifier;
	PSSpecifier* _scheduleRadioSpecifier;
	PSSpecifier* _timeGroup;
	PSSpecifier* _startTimePickerSpecifier;
	PSSpecifier* _endTimePickerSpecifier;
	NSDateFormatter* _timeFormatter;
	BOOL _showingScheduleSpecifiers;
	UIDatePicker* _startTimePicker;
	UIDatePicker* _endTimePicker;

}
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)willResignActive;
-(void)datePickerChanged:(id)arg1 ;
-(id)datePickerForSpecifier:(id)arg1 ;
-(id)endTime;
-(id)startTime;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)handleBlueLightStatusChanged:(SCD_Struct_DB2*)arg1 ;
-(void)showScheduleSpecifiers:(BOOL)arg1 animated:(BOOL)arg2 ;
-(int)blueLightMode;
@end

