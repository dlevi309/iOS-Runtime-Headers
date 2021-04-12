/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBUIUserAgent_Internal.h>

@class SBIdleTimerPolicyAggregator, NSMutableDictionary, NSString;

@interface SBUserAgent : NSObject <SBUIUserAgent_Internal> {

	NSMutableDictionary* _idleTimerDisableAssertions;
	SBIdleTimerPolicyAggregator* _idleTimerPolicyAggregator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long softwareUpdatePasscodePolicyType; 
@property (setter=_setIdleTimerPolicyAggregator:,nonatomic,retain) SBIdleTimerPolicyAggregator * _idleTimerPolicyAggregator;              //@synthesize idleTimerPolicyAggregator=_idleTimerPolicyAggregator - In the implementation block
-(id)init;
-(BOOL)deviceIsLocked;
-(BOOL)isInternalInstall;
-(long long)activeInterfaceOrientation;
-(BOOL)isScreenOn;
-(void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setIdleText:(id)arg1 ;
-(void)addActiveInterfaceOrientationObserver:(id)arg1 ;
-(void)removeActiveInterfaceOrientationObserver:(id)arg1 ;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)lockScreenIsShowing;
-(BOOL)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3 ;
-(BOOL)springBoardIsActive;
-(void)_setIdleTimerPolicyAggregator:(id)arg1 ;
-(SBIdleTimerPolicyAggregator *)_idleTimerPolicyAggregator;
-(CFRunLoopRef)wifiRunLoopRef;
-(id)folderNameForDisplayID:(id)arg1 ;
-(BOOL)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(BOOL)arg4 options:(id)arg5 ;
-(BOOL)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 ;
-(id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 ;
-(void)_cleanupFromBannerLaunch;
-(BOOL)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4 animate:(BOOL)arg5 ;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 andDimScreen:(BOOL)arg2 ;
-(void)updateInterfaceOrientationIfNecessary;
-(id)foregroundApplicationDisplayID;
-(id)localizedDisplayNameForDisplayID:(id)arg1 ;
-(BOOL)isApplicationForegroundObscured:(id)arg1 ;
-(BOOL)applicationInstalledForDisplayID:(id)arg1 ;
-(BOOL)deviceIsPasscodeLockedRemotely;
-(BOOL)deviceIsTethered;
-(int)networkUsageTypeForAppWithDisplayID:(id)arg1 ;
-(BOOL)openURL:(id)arg1 allowUnlock:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3 ;
-(BOOL)isApplicationRestrictedOrHidden:(id)arg1 ;
-(void)undimScreen;
-(BOOL)isIdleTimerDisabledForReason:(id)arg1 ;
-(void)addIdleTimerHandler:(id)arg1 ;
-(void)removeIdleTimerHandler:(id)arg1 ;
-(void)lockAndDimDevice;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 ;
-(void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2 ;
-(void)activateModalBulletinAlert:(id)arg1 ;
-(void)notifyOnNextUserEvent;
-(void)setMinimumBacklightLevel:(float)arg1 animated:(BOOL)arg2 ;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(BOOL)isNamedRemoteAlertServiceActive:(id)arg1 controllerClassName:(id)arg2 ;
-(void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2 ;
-(void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
-(id)topSuspendedEventsOnlyDisplayID;
-(long long)softwareUpdatePasscodePolicyType;
-(void)setSoftwareUpdatePasscodePolicyType:(long long)arg1 ;
-(BOOL)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4 ;
@end

