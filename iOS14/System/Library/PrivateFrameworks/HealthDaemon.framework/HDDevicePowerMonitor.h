/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, HKObserverSet, CUPowerSourceMonitor;

@interface HDDevicePowerMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	HKObserverSet* _observers;
	CUPowerSourceMonitor* _monitor;
	BOOL _isCharging;

}

@property (readonly) BOOL primarySourceIsCharging; 
-(id)init;
-(void)dealloc;
-(void)powerSourceFound:(id)arg1 ;
-(void)powerSourceLost:(id)arg1 ;
-(void)powerSource:(id)arg1 changed:(unsigned)arg2 ;
-(void)_queue_updatePrimaryPowerSourceState:(int)arg1 ;
-(void)addDevicePowerObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeDevicePowerObserver:(id)arg1 ;
-(BOOL)primarySourceIsCharging;
@end

