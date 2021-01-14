/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <libobjc.A.dylib/CUTPowerMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSString, PCSimpleTimer, NSObject;

@interface PCPersistentTimer : NSObject <CUTPowerMonitorDelegate> {

	double _fireTime;
	double _startTime;
	unsigned long long _guidancePriority;
	double _minimumEarlyFireProportion;
	BOOL _triggerOnGMTChange;
	BOOL _disableSystemWaking;
	BOOL _userVisible;
	NSString* _serviceIdentifier;
	id _target;
	SEL _selector;
	id _userInfo;
	PCSimpleTimer* _simpleTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_log> _logObject;
	double _earlyFireConstantInterval;

}

@property (assign,nonatomic) double minimumEarlyFireProportion;                  //@synthesize minimumEarlyFireProportion=_minimumEarlyFireProportion - In the implementation block
@property (assign,nonatomic) double earlyFireConstantInterval;                   //@synthesize earlyFireConstantInterval=_earlyFireConstantInterval - In the implementation block
@property (assign,nonatomic) BOOL disableSystemWaking;                           //@synthesize disableSystemWaking=_disableSystemWaking - In the implementation block
@property (assign,getter=isUserVisible,nonatomic) BOOL userVisible; 
@property (nonatomic,readonly) double fireTime; 
@property (nonatomic,readonly) double startTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lastSystemWakeDate;
+(void)_updateTime:(double)arg1 forGuidancePriority:(unsigned long long)arg2 ;
+(double)currentMachTimeInterval;
+(id)_backgroundUpdateQueue;
+(double)_currentGuidanceTime;
-(void)scheduleInRunLoop:(id)arg1 ;
-(id)userInfo;
-(double)fireTime;
-(void)scheduleInQueue:(id)arg1 ;
-(void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1 ;
-(void)_updateTimers;
-(BOOL)firingIsImminent;
-(NSString *)debugDescription;
-(BOOL)disableSystemWaking;
-(id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 ;
-(double)_nextForcedAlignmentAbsoluteTime;
-(double)earlyFireConstantInterval;
-(BOOL)isValid;
-(void)setDisableSystemWaking:(BOOL)arg1 ;
-(BOOL)isUserVisible;
-(double)_earlyFireTime;
-(void)setUserVisible:(BOOL)arg1 ;
-(void)setEarlyFireConstantInterval:(double)arg1 ;
-(id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)invalidate;
-(void)_fireTimerFired;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1 ;
-(void)setMinimumEarlyFireProportion:(double)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2 ;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg1 ;
-(id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 triggerOnGMTChange:(BOOL)arg7 ;
-(double)minimumEarlyFireProportion;
-(double)startTime;
-(void)dealloc;
-(id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1 ;
@end

