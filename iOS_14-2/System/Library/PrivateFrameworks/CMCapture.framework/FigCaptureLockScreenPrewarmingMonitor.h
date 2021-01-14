/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/FigCaptureDisplayLayoutObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDictionary, NSString;

@interface FigCaptureLockScreenPrewarmingMonitor : NSObject <FigCaptureDisplayLayoutObserver> {

	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _biometricEnrollmentChangedToken;
	BOOL _haveEnrolledBiometricIdentities;
	int _activeBiometricOperationChangedToken;
	int _activeBiometricOperationType;
	long long _lastBiometricMatchCompleteTime;
	NSDictionary* _mobileKeyBagOptions;
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
+(void)start;
+(void)stop;
-(void)_stopMonitoring;
-(void)_invalidate;
-(void)_registerForBiometricEnrollmentChangesAndStartMonitoring;
-(void)_updateActiveBiometricOperation:(int)arg1 ;
-(void)_updateDeviceLockState;
-(void)_evaluatePrewarmingConditions;
-(BOOL)_shouldPrewarmForHostTime:(long long)arg1 ;
-(void)_setIsPrewarming:(BOOL)arg1 ;
-(void)_prewarmAfterDelay:(float)arg1 ;
-(void)_cancelDelayedPrewarmTimer;
-(void)_startMonitoring;
-(void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 obscuredApps:(id)arg3 transitioningApps:(id)arg4 pipApps:(id)arg5 ;
-(id)_init;
-(void)dealloc;
@end

