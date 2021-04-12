/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSDateTimePickerCellDelegate.h>

@class CBClient, PSSpecifier, NSDateFormatter;

@interface DBSColorScheduleController : PSListController <PSDateTimePickerCellDelegate> {

	CBClient* _brightnessClient;
	PSSpecifier* _radioGroup;
	PSSpecifier* _sunsetToSunriseRadioSpecifier;
	PSSpecifier* _scheduleRadioSpecifier;
	PSSpecifier* _timeGroup;
	PSSpecifier* _startTimeSpecifier;
	PSSpecifier* _endTimeSpecifier;
	PSSpecifier* _startTimePickerSpecifier;
	PSSpecifier* _endTimePickerSpecifier;
	PSSpecifier* _selectedTimeSpecifier;
	NSDateFormatter* _timeFormatter;
	BOOL _showingScheduleSpecifiers;

}
-(void)dealloc;
-(id)startTime;
-(id)endTime;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)datePickerChanged:(id)arg1 ;
-(id)datePickerForSpecifier:(id)arg1 ;
-(void)handleBlueLightStatusChanged:(SCD_Struct_DB2*)arg1 ;
-(void)showScheduleSpecifiers:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showPickerSpecifierForSpecifier:(id)arg1 ;
-(int)blueLightMode;
@end

