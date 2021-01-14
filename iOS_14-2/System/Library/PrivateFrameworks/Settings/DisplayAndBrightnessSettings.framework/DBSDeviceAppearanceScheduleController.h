/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSDateTimePickerCellDelegate.h>

@class PSSpecifier, UISUserInterfaceStyleMode, NSDateFormatter, UIDatePicker;

@interface DBSDeviceAppearanceScheduleController : PSListController <PSDateTimePickerCellDelegate> {

	BOOL __showingScheduleSpecifiers;
	PSSpecifier* __radioGroup;
	PSSpecifier* __timeGroup;
	PSSpecifier* __lightAppearanceTimePickerSpecifier;
	PSSpecifier* __darkAppearanceTimePickerSpecifier;
	UISUserInterfaceStyleMode* __styleMode;
	NSDateFormatter* __timeFormatter;
	UIDatePicker* __lightAppearanceTimePicker;
	UIDatePicker* __darkAppearanceTimePicker;

}

@property (nonatomic,retain) PSSpecifier * _radioGroup;                                      //@synthesize _radioGroup=__radioGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * _timeGroup;                                       //@synthesize _timeGroup=__timeGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * _lightAppearanceTimePickerSpecifier;              //@synthesize _lightAppearanceTimePickerSpecifier=__lightAppearanceTimePickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * _darkAppearanceTimePickerSpecifier;               //@synthesize _darkAppearanceTimePickerSpecifier=__darkAppearanceTimePickerSpecifier - In the implementation block
@property (assign,nonatomic) BOOL _showingScheduleSpecifiers;                                //@synthesize _showingScheduleSpecifiers=__showingScheduleSpecifiers - In the implementation block
@property (assign,nonatomic,__weak) UISUserInterfaceStyleMode * _styleMode;                  //@synthesize _styleMode=__styleMode - In the implementation block
@property (nonatomic,retain) NSDateFormatter * _timeFormatter;                               //@synthesize _timeFormatter=__timeFormatter - In the implementation block
@property (nonatomic,retain) UIDatePicker * _lightAppearanceTimePicker;                      //@synthesize _lightAppearanceTimePicker=__lightAppearanceTimePicker - In the implementation block
@property (nonatomic,retain) UIDatePicker * _darkAppearanceTimePicker;                       //@synthesize _darkAppearanceTimePicker=__darkAppearanceTimePicker - In the implementation block
-(void)setSpecifier:(id)arg1 ;
-(NSDateFormatter *)_timeFormatter;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)willResignActive;
-(void)datePickerChanged:(id)arg1 ;
-(id)datePickerForSpecifier:(id)arg1 ;
-(UISUserInterfaceStyleMode *)_styleMode;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(PSSpecifier *)_radioGroup;
-(void)showScheduleSpecifiers:(BOOL)arg1 animated:(BOOL)arg2 ;
-(PSSpecifier *)_timeGroup;
-(BOOL)_showingScheduleSpecifiers;
-(void)set_styleMode:(UISUserInterfaceStyleMode *)arg1 ;
-(void)set_radioGroup:(PSSpecifier *)arg1 ;
-(void)set_timeGroup:(PSSpecifier *)arg1 ;
-(void)set_showingScheduleSpecifiers:(BOOL)arg1 ;
-(void)set_lightAppearanceTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)_lightAppearanceTimePickerSpecifier;
-(void)set_darkAppearanceTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)_darkAppearanceTimePickerSpecifier;
-(UIDatePicker *)_lightAppearanceTimePicker;
-(UIDatePicker *)_darkAppearanceTimePicker;
-(void)set_darkAppearanceTimePicker:(UIDatePicker *)arg1 ;
-(void)set_lightAppearanceTimePicker:(UIDatePicker *)arg1 ;
-(id)_lightAppearanceTimeString;
-(id)_darkAppearanceTimeString;
-(void)set_timeFormatter:(NSDateFormatter *)arg1 ;
@end

