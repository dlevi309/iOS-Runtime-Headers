/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HKSPUserDefaults;
#import <SleepDaemon/SleepDaemon-Structs.h>
@class HKSPObserverSet, NSDate;

@interface HDSPWatchOnWristMonitor : NSObject {

	os_unfair_lock_s _lock;
	id<HKSPUserDefaults> _userDefaults;
	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) id<HKSPUserDefaults> userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * observers;                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                          //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) BOOL isOnWrist; 
@property (nonatomic,readonly) NSDate * lastOnWristDate; 
-(id)initWithUserDefaults:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(void)_withLock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)lock;
-(id<HKSPUserDefaults>)userDefaults;
-(void)removeObserver:(id)arg1 ;
-(id)initWithUserDefaults:(id)arg1 callbackScheduler:(id)arg2 ;
-(BOOL)_lock_isOnWrist;
-(id)_lock_lastOnWristDate;
-(BOOL)isOnWrist;
-(void)_lock_setIsOnWrist:(BOOL)arg1 ;
-(NSDate *)lastOnWristDate;
-(void)_lock_setLastOnWristDate:(id)arg1 ;
@end

