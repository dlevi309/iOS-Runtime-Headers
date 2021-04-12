/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <libobjc.A.dylib/FigCaptureDisplayLayoutObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface FigCaptureLockScreenPrewarmingMonitor : NSObject <FigCaptureDisplayLayoutObserver> {

	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _biometricEnrollmentChangedToken;
	BOOL _haveEnrolledBiometricIdentities;
	int _activeBiometricOperationChangedToken;
	int _activeBiometricOperationType;
	long long _lastBiometricMatchCompleteTime;
	int _deviceLockStateChangedToken;
	int _deviceLockState;
	long long _lastDeviceUnlockTime;
	BOOL _onLockScreen;
	BOOL _addingLayoutObserver;
	BOOL _observingLayoutChanges;
	BOOL _isPrewarming;
	NSObject*<OS_dispatch_source> _delayedPrewarmTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)stop;
+(void)start;
-(void)dealloc;
-(void)_invalidate;
-(id)_init;
-(void)_stopMonitoring;
-(void)_startMonitoring;
-(void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 obscuredApps:(id)arg3 transitioningApps:(id)arg4 ;
-(void)_registerForBiometricEnrollmentChangesAndStartMonitoring;
-(void)_updateActiveBiometricOperation:(int)arg1 ;
-(void)_updateDeviceLockState;
-(void)_evaluatePrewarmingConditions;
-(BOOL)_shouldPrewarmForHostTime:(long long)arg1 ;
-(void)_setIsPrewarming:(BOOL)arg1 ;
-(void)_prewarmAfterDelay:(float)arg1 ;
-(void)_cancelDelayedPrewarmTimer;
@end

