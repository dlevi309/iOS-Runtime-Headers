/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/


@protocol OS_dispatch_queue;
@class NSDate, NSString, PCDispatchTimer, NSRunLoop, NSObject;

@interface PCSimpleTimer : NSObject {

	double _fireTime;
	double _startTime;
	double _lastUpdateTime;
	double _earlyFireDelta;
	BOOL _triggerOnGMTChange;
	BOOL _disableSystemWaking;
	NSDate* _scheduledWakeDate;
	NSString* _serviceIdentifier;
	id _target;
	SEL _selector;
	id _userInfo;
	BOOL _userVisible;
	PCDispatchTimer* _preventSleepTimer;
	PCDispatchTimer* _fireTimer;
	BOOL _sleepIsImminent;
	unsigned _powerAssertionID;
	id _timeChangeSource;
	NSRunLoop* _timerRunLoop;
	NSString* _timerMode;
	int _significantTimeChangeToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) BOOL disableSystemWaking;                           //@synthesize disableSystemWaking=_disableSystemWaking - In the implementation block
@property (assign,getter=isUserVisible,nonatomic) BOOL userVisible; 
+(id)lastSystemWakeDate;
+(double)currentMachTimeInterval;
-(void)dealloc;
-(id)debugDescription;
-(void)invalidate;
-(id)userInfo;
-(BOOL)isValid;
-(void)scheduleInQueue:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)_significantTimeChange;
-(id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)setDisableSystemWaking:(BOOL)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 ;
-(BOOL)isUserVisible;
-(void)_updateTimers;
-(void)setUserVisible:(BOOL)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2 ;
-(void)_fireTimerFired;
-(id)initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(BOOL)arg6 ;
-(BOOL)firingIsImminent;
-(void)updateFireTime:(double)arg1 triggerOnGMTChange:(BOOL)arg2 ;
-(BOOL)disableSystemWaking;
-(void)_scheduleTimer;
-(void)_preventSleepFired;
-(void)_setPowerMonitoringEnabled:(BOOL)arg1 ;
-(void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)arg1 ;
-(id)_getTimerRunLoop;
-(id)_getTimerMode;
-(void)_performBlockOnQueue:(/*^block*/id)arg1 ;
-(void)_powerNotificationSleepIsNotImminent;
-(void)_powerNotificationSleepIsImminent;
@end

