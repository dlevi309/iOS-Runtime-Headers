/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/DDRResetObserver.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>

@protocol SBIdleTimerCoordinating;
@class NSTimer, SBFAuthenticationAssertion, SBAppStatusBarSettingsAssertion, NSString;

@interface SBSyncController : NSObject <DDRResetObserver, SBIdleTimerProviding> {

	int _restoreState;
	int _resetState;
	int _restoreTimerState;
	NSTimer* _restoreTimer;
	NSTimer* _progressTimer;
	BOOL _appsChangedDuringSync;
	int _restoreStartedNotifyToken;
	int _restoreEndedNotifyToken;
	SBFAuthenticationAssertion* _disableDeviceLockAssertion;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	BOOL _isAppSyncing;
	BOOL _inExtendedAppSyncCoalescePeriod;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;

}

@property (assign,setter=_setIdleTimerCoordinator:,getter=_idleTimerCoordinator,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;              //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)startObserving;
-(void)stopObserving;
-(void)_restoreTimerFired:(id)arg1 ;
-(BOOL)isRestoring;
-(void)_rebootNow;
-(void)_setupRestoreTimer;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)finishedTerminatingApplications;
-(void)_delayedQuitApplications;
-(void)_invalidateRestoreTimer;
-(id)_idleTimerCoordinator;
-(void)_didEndRestoring:(int)arg1 ;
-(void)_appInstallationNotification;
-(BOOL)isInUse;
-(void)resetService:(id)arg1 willBeginDataResetWithMode:(long long)arg2 ;
-(void)_wirelessSyncBegan:(id)arg1 ;
-(void)beginRestoring;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(int)restoreState;
-(void)_syncSessionDidEnd;
-(void)_killApplicationsIfNecessary;
-(int)resetState;
-(BOOL)isResetting;
-(void)resetService:(id)arg1 didCompleteDataResetMode:(long long)arg2 withError:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_syncSessionDidBegin;
-(void)_setRestoreState:(int)arg1 ;
-(void)cancelRestoring;
-(void)_notifyRestoreCanProceed;
-(void)resetService:(id)arg1 didBeginDataResetWithMode:(long long)arg2 ;
-(BOOL)_isBackupAgentRunning;
-(id)_idleTimerBehavior;
-(void)_wirelessSyncEnded:(id)arg1 ;
-(void)dealloc;
@end

