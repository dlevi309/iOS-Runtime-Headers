/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface CSTimeZoneController : PSListController {

	PSSpecifier* _calendarTimeZoneSpecifier;
	PSSpecifier* _timeZoneSupportSpecifier;
	BOOL _timeZoneSupportEnabled;

}
-(id)specifiers;
-(void)loadTimeZoneController:(id)arg1 ;
-(id)timeZoneSupportEnabled:(id)arg1 ;
-(void)setCalendarTimeZone:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_timeZoneSupportEnabled;
-(void)setTimeZoneSupportEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)calendarTimeZone:(id)arg1 ;
@end

