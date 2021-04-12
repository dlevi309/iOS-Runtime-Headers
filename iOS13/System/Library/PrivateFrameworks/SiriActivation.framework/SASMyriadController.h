/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/SASLockStateMonitorDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, CMMotionActivityManager, SASLockStateMonitor, FBSDisplayLayoutMonitor, NSString;

@interface SASMyriadController : NSObject <SASLockStateMonitorDelegate> {

	NSObject*<OS_dispatch_semaphore> _myriadFinishedSemaphore;
	CMMotionActivityManager* _activityManager;
	BOOL _isLifted;
	double _liftEndTime;
	BOOL _isLocked;
	SASLockStateMonitor* _lockStateMonitor;
	FBSDisplayLayoutMonitor* _displayMonitor;
	double _raiseToWakeTime;
	NSObject*<OS_dispatch_queue> _myriadWorkQueue;
	SCD_Struct_SA2 _mobileClockObserver;
	BOOL _canceledByMyriad;

}

@property (assign,nonatomic) BOOL canceledByMyriad;                 //@synthesize canceledByMyriad=_canceledByMyriad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentController;
-(void)dealloc;
-(id)_init;
-(void)timersChanged:(id)arg1 ;
-(void)alarmsChanged:(id)arg1 ;
-(void)_handleCMMotionActivity:(id)arg1 ;
-(void)_updateRaiseToWakeTimeForTransition:(id)arg1 ;
-(void)_startObservingMTTimerNotifications;
-(void)_startObservingMTAlarmNotifications;
-(void)_resetMTTimerObserver;
-(void)_stopObservingMTTimerNotifications;
-(void)_resetMTAlarmObserver;
-(void)_stopObservingMTAlarmNotifications;
-(void)setCanceledByMyriad:(BOOL)arg1 ;
-(void)timersReset:(id)arg1 ;
-(void)alarmsReset:(id)arg1 ;
-(void)_setFiringTimerIfNeeded:(id)arg1 ;
-(void)_setFiringAlarmIfNeeded:(id)arg1 ;
-(void)didChangeLockState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(BOOL)activateForRequest:(id)arg1 visible:(BOOL)arg2 ;
-(void)activateForInTaskRequest:(BOOL)arg1 isVisible:(BOOL)arg2 ;
-(BOOL)canceledByMyriad;
@end

