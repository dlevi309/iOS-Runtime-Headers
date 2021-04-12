/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <Preferences/PSListController.h>

@class NSNumber;

@interface CSDefaultAlarmsController : PSListController {

	NSNumber* _defaultAllDayAlarmOffset;
	NSNumber* _defaultTimedAlarmOffset;

}
-(id)specifiers;
-(id)_defaultTimedAlarmOffset;
-(id)_defaultAllDayAlarmOffset;
-(void)setDefaultAlarmOffset:(id)arg1 specifier:(id)arg2 ;
-(id)defaultAlarmOffsetForSpecifier:(id)arg1 ;
-(id)_alarmValuesForAllDay:(BOOL)arg1 ;
-(id)_alarmTitlesForAllDay:(BOOL)arg1 shortened:(BOOL)arg2 ;
-(void)_setEnableTravelAdvisoriesForAutomaticBehavior:(id)arg1 specifier:(id)arg2 ;
-(id)_enableTravelAdvisoriesForAutomaticBehavior:(id)arg1 ;
-(id)_defaultBirthdayAlarmOffset;
@end

