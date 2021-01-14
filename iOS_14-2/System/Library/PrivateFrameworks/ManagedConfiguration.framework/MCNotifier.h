/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@interface MCNotifier : NSObject
-(void)sendRestrictionChangedNotification;
-(void)sendPasscodeChangedNotification;
-(void)sendPasscodePolicyChangedNotification;
-(void)sendKeyboardSettingsChangedNotification;
-(void)sendUserNotificationsSettingsChangedNotification;
-(void)sendHomeScreenLayoutChangedNotification;
-(void)sendNewsSettingsChangedNotification;
-(void)sendProfileListChangedNotification;
-(void)sendSettingsChangedNotification;
-(void)sendManagingOrgInfoChangedNotification;
-(void)sendEffectiveSettingsChangedNotificationWithPID:(int)arg1 ;
-(void)sendClientTruthChangedNotification;
-(void)sendAppWhitelistChangedNotification;
-(void)sendCloudConfigurationDetailsChangedNotification;
-(void)sendWebContentFilterChangedNotification;
-(void)sendWebContentFilterUIActiveChangedNotification;
-(void)sendWebContentFilterTypeChangedNotification;
-(void)sendAirPlayPreferencesChangedNotification;
-(void)sendUnlockScreenTypeDidChangeNotification;
-(void)sendManagedBooksChangedNotification;
-(void)sendManagedAppsChangedNotification;
-(void)sendSafariCookiePolicyChangedNotification;
-(void)sendAllowPasscodeModificationChangedNotification;
-(void)sendRemovedSystemAppsChangedNotification;
-(void)sendDiagnosticsCollectedNotification;
-(void)sendDependencyChangedNotification;
-(void)sendTriggerRollKeybagsNotification;
-(void)sendActivationLockBypassCodeWasStoredNotification;
@end

