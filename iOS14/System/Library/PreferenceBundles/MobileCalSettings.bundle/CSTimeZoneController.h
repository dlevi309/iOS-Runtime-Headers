/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)timeZoneSupportEnabled:(id)arg1 ;
-(void)setCalendarTimeZone:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_timeZoneSupportEnabled;
-(void)setTimeZoneSupportEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)calendarTimeZone:(id)arg1 ;
-(void)loadTimeZoneController:(id)arg1 ;
@end

