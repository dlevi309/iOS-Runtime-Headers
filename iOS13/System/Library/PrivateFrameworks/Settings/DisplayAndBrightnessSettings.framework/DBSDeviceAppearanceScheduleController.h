/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSDateTimePickerCellDelegate.h>

@class PSSpecifier, UISUserInterfaceStyleMode, NSDateFormatter;

@interface DBSDeviceAppearanceScheduleController : PSListController <PSDateTimePickerCellDelegate> {

	BOOL __showingScheduleSpecifiers;
	PSSpecifier* __radioGroup;
	PSSpecifier* __timeGroup;
	PSSpecifier* __lightAppearanceStartTimeSpecifier;
	PSSpecifier* __darkAppearanceStartTimeSpecifier;
	PSSpecifier* __lightAppearanceTimePickerSpecifier;
	PSSpecifier* __darkAppearanceTimePickerSpecifier;
	PSSpecifier* __selectedTimeSpecifier;
	UISUserInterfaceStyleMode* __styleMode;
	NSDateFormatter* __timeFormatter;

}

@property (nonatomic,retain) PSSpecifier * _radioGroup;                                      //@synthesize _radioGroup=__radioGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * _timeGroup;                                       //@synthesize _timeGroup=__timeGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * _lightAppearanceStartTimeSpecifier;               //@synthesize _lightAppearanceStartTimeSpecifier=__lightAppearanceStartTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * _darkAppearanceStartTimeSpecifier;                //@synthesize _darkAppearanceStartTimeSpecifier=__darkAppearanceStartTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * _lightAppearanceTimePickerSpecifier;              //@synthesize _lightAppearanceTimePickerSpecifier=__lightAppearanceTimePickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * _darkAppearanceTimePickerSpecifier;               //@synthesize _darkAppearanceTimePickerSpecifier=__darkAppearanceTimePickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * _selectedTimeSpecifier;                           //@synthesize _selectedTimeSpecifier=__selectedTimeSpecifier - In the implementation block
@property (assign,nonatomic) BOOL _showingScheduleSpecifiers;                                //@synthesize _showingScheduleSpecifiers=__showingScheduleSpecifiers - In the implementation block
@property (assign,nonatomic,__weak) UISUserInterfaceStyleMode * _styleMode;                  //@synthesize _styleMode=__styleMode - In the implementation block
@property (nonatomic,retain) NSDateFormatter * _timeFormatter;                               //@synthesize _timeFormatter=__timeFormatter - In the implementation block
-(NSDateFormatter *)_timeFormatter;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UISUserInterfaceStyleMode *)_styleMode;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)datePickerChanged:(id)arg1 ;
-(id)datePickerForSpecifier:(id)arg1 ;
-(void)showScheduleSpecifiers:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showPickerSpecifierForSpecifier:(id)arg1 ;
-(PSSpecifier *)_radioGroup;
-(PSSpecifier *)_timeGroup;
-(PSSpecifier *)_selectedTimeSpecifier;
-(BOOL)_showingScheduleSpecifiers;
-(void)set_styleMode:(UISUserInterfaceStyleMode *)arg1 ;
-(void)set_selectedTimeSpecifier:(PSSpecifier *)arg1 ;
-(void)set_radioGroup:(PSSpecifier *)arg1 ;
-(void)set_timeGroup:(PSSpecifier *)arg1 ;
-(id)_lightAppearanceTimeString;
-(void)set_lightAppearanceStartTimeSpecifier:(PSSpecifier *)arg1 ;
-(id)_darkAppearanceTimeString;
-(void)set_darkAppearanceStartTimeSpecifier:(PSSpecifier *)arg1 ;
-(void)set_lightAppearanceTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)_lightAppearanceTimePickerSpecifier;
-(void)set_darkAppearanceTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)_darkAppearanceTimePickerSpecifier;
-(void)set_showingScheduleSpecifiers:(BOOL)arg1 ;
-(PSSpecifier *)_lightAppearanceStartTimeSpecifier;
-(PSSpecifier *)_darkAppearanceStartTimeSpecifier;
-(void)set_timeFormatter:(NSDateFormatter *)arg1 ;
@end

