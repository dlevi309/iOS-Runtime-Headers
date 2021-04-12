/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/SASLockStateMonitorDelegate.h>
#import <libobjc.A.dylib/AFMyriadDelegate.h>

@protocol SASMyriadControllerDelegate, OS_dispatch_semaphore;
@class AFMyriadCoordinator, NSObject, FBSDisplayLayoutMonitor, SASLockStateMonitor, CMMotionActivityManager, NSString;

@interface SASMyriadController : NSObject <SASLockStateMonitorDelegate, AFMyriadDelegate> {

	id<SASMyriadControllerDelegate> _delegate;
	AFMyriadCoordinator* _myriadCoordinator;
	BOOL _isLocked;
	NSObject*<OS_dispatch_semaphore> _myriadFinishedSemaphore;
	FBSDisplayLayoutMonitor* _displayMonitor;
	double _raiseToWakeTime;
	SASLockStateMonitor* _lockStateMonitor;
	BOOL _isStationary;
	double _liftEndTime;
	os_unfair_lock_s _activityManagerLock;
	CMMotionActivityManager* _activityManager;
	BOOL _canceledByMyriad;

}

@property (assign,nonatomic) BOOL canceledByMyriad;                 //@synthesize canceledByMyriad=_canceledByMyriad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCanceledByMyriad:(BOOL)arg1 ;
-(void)_configureMotionActivityManager;
-(void)didChangeLockState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)activateForInTaskRequest:(BOOL)arg1 isVisible:(BOOL)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)shouldContinue:(id)arg1 ;
-(BOOL)activateForRequest:(id)arg1 visible:(BOOL)arg2 ;
-(void)shouldAbortAnotherDeviceBetter:(id)arg1 ;
-(BOOL)canceledByMyriad;
-(void)_updateRaiseToWakeTimeForTransition:(id)arg1 ;
-(void)dealloc;
@end

