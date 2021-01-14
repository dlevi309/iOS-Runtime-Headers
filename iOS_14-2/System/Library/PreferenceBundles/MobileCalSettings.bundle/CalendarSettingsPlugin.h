/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSSystemPolicyForAppDelegate.h>

@class PSSpecifier, EKEventStore, ACAccountStore, PSSystemPolicyForApp, NSString;

@interface CalendarSettingsPlugin : PSListController <PSSystemPolicyForAppDelegate> {

	PSSpecifier* _showInviteeDeclinesSpecifier;
	PSSpecifier* _syncDaysSpecifier;
	PSSpecifier* _timeZoneSupportSpecifier;
	PSSpecifier* _defaultCalendarSpecifier;
	PSSpecifier* _identityListSpecifier;
	PSSpecifier* _birthdayCalendarSpecifier;
	PSSpecifier* _defaultAlarmsSpecifier;
	PSSpecifier* _overlayCalendarSpecifier;
	PSSpecifier* _showWeekNumbersSpecifier;
	PSSpecifier* _weekViewStartsOnTodaySpecifier;
	PSSpecifier* _suggestedLocationsSpecifier;
	PSSpecifier* _showAccountsSupportingDelegationSpecifier;
	PSSpecifier* _showSingleAccountSupportingDelegationSpecifier;
	EKEventStore* _eventStore;
	ACAccountStore* _accountStore;
	BOOL _numTotalCalendars;
	BOOL _delegationSpecifierShowing;
	PSSystemPolicyForApp* _appPolicy;
	PSSpecifier* _weekStartSpecifier;

}

@property (nonatomic,retain) PSSpecifier * weekStartSpecifier;              //@synthesize weekStartSpecifier=_weekStartSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_eventStoreChanged:(id)arg1 ;
-(id)specifiers;
-(id)init;
-(id)_accountStore;
-(void)reloadSpecifiers:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(id)_eventStore;
-(void)dealloc;
-(void)_freeSpecifiers;
-(void)setShowInviteeDeclinesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)showInviteeDeclinesEnabled:(id)arg1 ;
-(id)timeZoneSupportEnabled:(id)arg1 ;
-(void)setOverlayCalendarID:(id)arg1 specifier:(id)arg2 ;
-(id)overlayCalendarID:(id)arg1 ;
-(id)_titlesForCalendarIdentifiers:(id)arg1 ;
-(void)setShowWeekNumbers:(id)arg1 specifier:(id)arg2 ;
-(id)showWeekNumbers:(id)arg1 ;
-(void)setWeekViewStartsOnToday:(id)arg1 specifier:(id)arg2 ;
-(id)weekViewStartsOnToday:(id)arg1 ;
-(void)setDaysToSync:(id)arg1 specifier:(id)arg2 ;
-(id)daysToSync:(id)arg1 ;
-(id)_titlesForDaysToSync;
-(void)setDefaultCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)defaultCalendarName:(id)arg1 ;
-(void)setWeekStart:(id)arg1 specifier:(id)arg2 ;
-(id)weekStart:(id)arg1 ;
-(id)_numbersForWeekdays;
-(id)_titlesForWeekDays:(id)arg1 ;
-(void)setWeekStartSpecifier:(PSSpecifier *)arg1 ;
-(void)setSuggestEventLocations:(id)arg1 specifier:(id)arg2 ;
-(id)suggestEventLocations:(id)arg1 ;
-(id)_localeSpecificLocalizedTwoWeeksSyncTitleWithNumberFormatter:(id)arg1 bundle:(id)arg2 ;
-(id)_localeSpecificLocalizedOneMonthSyncTitleWithNumberFormatter:(id)arg1 bundle:(id)arg2 ;
-(id)_localeSpecificLocalizedThreeMonthsSyncTitleWithNumberFormatter:(id)arg1 bundle:(id)arg2 ;
-(id)_localeSpecificLocalizedSixMonthsSyncTitleWithNumberFormatter:(id)arg1 bundle:(id)arg2 ;
-(id)_localizedNoLimitSyncTitleInBundle:(id)arg1 ;
-(id)_localizedOneMonthSyncTitleOverrideInBundle:(id)arg1 ;
-(void)_createAllCommonSpecifiers;
-(long long)_countOfAccountsSyncingCalendars;
-(PSSpecifier *)weekStartSpecifier;
-(BOOL)_shouldShowDefaultCalendarSpecifier;
-(id)accountsSupportingDelegation;
-(void)setImmediateAlarmCreation:(id)arg1 specifier:(id)arg2 ;
-(id)immediateAlarmCreation:(id)arg1 ;
-(id)writableEnabledIdentities;
@end

