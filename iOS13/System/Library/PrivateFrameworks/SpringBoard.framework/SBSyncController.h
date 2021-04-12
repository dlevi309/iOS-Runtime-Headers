/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)startObserving;
-(void)stopObserving;
-(BOOL)isInUse;
-(int)restoreState;
-(int)resetState;
-(BOOL)isRestoring;
-(BOOL)isResetting;
-(void)resetService:(id)arg1 willBeginDataResetWithMode:(long long)arg2 ;
-(void)resetService:(id)arg1 didBeginDataResetWithMode:(long long)arg2 ;
-(void)resetService:(id)arg1 didCompleteDataResetMode:(long long)arg2 withError:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setRestoreState:(int)arg1 ;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)beginRestoring;
-(void)_didEndRestoring:(int)arg1 ;
-(void)_wirelessSyncEnded:(id)arg1 ;
-(void)_wirelessSyncBegan:(id)arg1 ;
-(void)_appInstallationNotification;
-(void)finishedTerminatingApplications;
-(void)_notifyRestoreCanProceed;
-(void)_setupRestoreTimer;
-(void)_killApplicationsIfNecessary;
-(void)_syncSessionDidBegin;
-(void)_syncSessionDidEnd;
-(id)_idleTimerCoordinator;
-(id)_idleTimerBehavior;
-(void)_invalidateRestoreTimer;
-(void)_rebootNow;
-(BOOL)_isBackupAgentRunning;
-(void)_restoreTimerFired:(id)arg1 ;
-(void)cancelRestoring;
-(void)_delayedQuitApplications;
@end

