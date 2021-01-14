/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_queue;
@class SBPasscodeAlertItem, NSString, SBPasscodeComplianceAlertItem, NSDate, NSObject;

@interface SBPasscodeController : NSObject {

	SBPasscodeAlertItem* _passcodeAlertItem;
	int _mode;
	NSString* _previousPasscode;
	NSString* _newPasscode;
	int _unlockScreenType;
	int _simplePasscodeType;
	SBPasscodeComplianceAlertItem* _complianceAlertItem;
	NSDate* _forcedComplianceDate;
	id _manageConfigurationEffectiveSettingsObserver;
	id _telephonyNotificationObserver;
	int _restoreCompletedAlertStateChangedToken;
	BOOL _delayedComplianceAlertUntilAfterRestoreCompletedAlert;
	NSObject*<OS_dispatch_queue> _passcodeComplianceQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)_passwordEntered:(id)arg1 ;
-(void)_abort;
-(void)dealloc;
-(void)_userWantsToComplyNow:(BOOL)arg1 ;
-(void)_startListeningToManagedConfigurationNotification;
-(void)_stopListeningToManagedConfigurationNotification;
-(void)_fetchAndSetUnlockScreenTypeForNewPasscode:(BOOL)arg1 ;
-(void)_presentPasscodeAlertItemWithMode:(int)arg1 alertItemErrorString:(id)arg2 unlockScreenType:(int)arg3 ;
-(void)_stopListeningToRestoreCompletedAlertStateChangedNotifications;
-(void)checkPasscodeCompliance;
-(void)forceUserToChangePasscode;
-(void)_stopListeningToTelephonyNotifications;
-(void)_didEndCall;
-(BOOL)_isRestoreCompletedAlertActive;
-(void)_activateComplianceAlert;
-(void)_startListeningToTelephonyNotifications;
-(void)_startListeningToRestoreCompletedAlertStateChangedNotifications;
@end

