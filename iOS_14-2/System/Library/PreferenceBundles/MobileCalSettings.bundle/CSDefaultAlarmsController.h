/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <Preferences/PSListController.h>

@class NSNumber, PSSpecifier, CUIKDefaultAlarmPreferences;

@interface CSDefaultAlarmsController : PSListController {

	NSNumber* _defaultAllDayAlarmOffset;
	NSNumber* _defaultTimedAlarmOffset;
	PSSpecifier* _timeToLeaveGroupSpecifier;
	PSSpecifier* _timeToLeaveAlertsSpecifier;
	unsigned long long currentTTLStatus;
	CUIKDefaultAlarmPreferences* _defaultAlarmPreferences;

}

@property (nonatomic,readonly) CUIKDefaultAlarmPreferences * defaultAlarmPreferences;              //@synthesize defaultAlarmPreferences=_defaultAlarmPreferences - In the implementation block
-(id)specifiers;
-(id)init;
-(void)locationAuthorizationChanged:(id)arg1 ;
-(void)setDefaultAlarmOffset:(id)arg1 specifier:(id)arg2 ;
-(id)defaultAlarmOffsetForSpecifier:(id)arg1 ;
-(id)_alarmValuesForAllDay:(BOOL)arg1 ;
-(id)_alarmTitlesForAllDay:(BOOL)arg1 shortened:(BOOL)arg2 ;
-(void)_setEnableTravelAdvisoriesForAutomaticBehavior:(id)arg1 specifier:(id)arg2 ;
-(id)_enableTravelAdvisoriesForAutomaticBehavior:(id)arg1 ;
-(void)configureTTL;
-(BOOL)ttlAlertsEffectivelyDisabledDueToLocationAuthorization;
-(CUIKDefaultAlarmPreferences *)defaultAlarmPreferences;
@end

