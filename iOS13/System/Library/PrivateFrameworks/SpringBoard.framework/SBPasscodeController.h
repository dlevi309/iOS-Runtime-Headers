/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)_passwordEntered:(id)arg1 ;
-(void)_abort;
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

