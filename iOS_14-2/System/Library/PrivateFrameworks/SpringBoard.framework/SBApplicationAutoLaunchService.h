/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBFMobileKeyBagObserver.h>

@class SBMainWorkspace, SBApplicationController, SBRestartManager, SBSyncController, SBFMobileKeyBag, NSMutableArray, NSTimer, NSArray, NSString;

@interface SBApplicationAutoLaunchService : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver> {

	SBMainWorkspace* _mainWorkspace;
	SBApplicationController* _applicationController;
	SBRestartManager* _restartManager;
	SBSyncController* _syncController;
	SBFMobileKeyBag* _keybag;
	NSMutableArray* _queuedApplicationsThrottledForRelaunch;
	NSTimer* _queuedApplicationsThrottledForRelaunchTimer;
	BOOL _autoLaunchSynchronously;
	BOOL _invalidated;

}

@property (assign,setter=_setAutoLaunchSynchronously:,getter=_autoLaunchSynchronously,nonatomic) BOOL autoLaunchSynchronously;                         //@synthesize autoLaunchSynchronously=_autoLaunchSynchronously - In the implementation block
@property (getter=_queuedApplicationsThrottledForRelaunchTimer,nonatomic,readonly) NSTimer * queuedApplicationsThrottledForRelaunchTimer;              //@synthesize queuedApplicationsThrottledForRelaunchTimer=_queuedApplicationsThrottledForRelaunchTimer - In the implementation block
@property (getter=_queuedApplicationsThrottledForRelaunch,nonatomic,readonly) NSArray * queuedApplicationsThrottledForRelaunch;                        //@synthesize queuedApplicationsThrottledForRelaunch=_queuedApplicationsThrottledForRelaunch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)_memoryPressureWarn:(id)arg1 ;
-(void)_recalculateVoIPBehaviorForApplication:(id)arg1 withExitContext:(id)arg2 ;
-(void)_setAutoLaunchSynchronously:(BOOL)arg1 ;
-(void)_noteTerminationAssertionRemovedForApplication:(id)arg1 ;
-(BOOL)_autoLaunchSynchronously;
-(void)_memoryPressureRelieved:(id)arg1 ;
-(void)_reallyDoAutoLaunchToBackground:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithWorkspace:(id)arg1 applicationController:(id)arg2 restartManager:(id)arg3 syncController:(id)arg4 keybag:(id)arg5 ;
-(void)_autoLaunchAppsIfNecessaryAfterFirstUnlock;
-(void)_autoLaunchIfNecessary:(id)arg1 forReason:(unsigned long long)arg2 ;
-(BOOL)_shouldAutoLaunchApplication:(id)arg1 forReason:(unsigned long long)arg2 ;
-(void)keybagDidUnlockForTheFirstTime:(id)arg1 ;
-(void)_launchNextQueuedApplicationThrottledForRelaunch;
-(NSString *)description;
-(void)_invalidateQueuedApplicationsThrottledForRelaunchTimer;
-(void)_applicationProcessStateDidChange:(id)arg1 ;
-(void)_installedApplicationsDidChange:(id)arg1 ;
-(id)_queuedApplicationsThrottledForRelaunch;
-(void)invalidate;
-(void)_scheduleAutoLaunchForApplicationExited:(id)arg1 withExitContext:(id)arg2 ;
-(void)_scheduleThrottledApplicationRelaunchTimerIfNecessary;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)_queuedApplicationsThrottledForRelaunchTimer;
-(void)_noteKeybagDidUnlock;
-(void)dealloc;
-(void)autoLaunchApplicationsIfNecessaryForStartup;
@end

