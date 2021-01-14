/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/EKUIAccountRefresherDelegate.h>

@class EKSource, CalendarModel, EKUIAccountRefresher, NSString;

@interface CSDelegateDetailsController : PSListController <EKUIAccountRefresherDelegate> {

	EKSource* _source;
	CalendarModel* _model;
	EKUIAccountRefresher* _currentAccountRefresher;
	BOOL _reloadingAccount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)accountRefreshFinished:(id)arg1 ;
-(void)cleanupAccountRefresher;
-(void)_setShowDelegationCalendar:(id)arg1 ;
-(id)_showDelegationCalendar;
-(BOOL)_shouldShowNotificationSetting;
-(BOOL)_canChangeNotificationSetting;
-(void)_setShowNotifications:(id)arg1 ;
-(id)_showNotifications;
-(BOOL)_canChangeDefaultCalendar;
-(BOOL)_shouldShowSpinner;
-(void)_setDefaultCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)_defaultCalendar;
-(void)_refreshAccounts;
@end

