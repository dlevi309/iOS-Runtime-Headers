/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPNotificationObserver.h>

@class HKSPObserverSet, NSNumber, NSString;

@interface HDSPDeviceUnlockMonitor : NSObject <HDSPNotificationObserver> {

	BOOL _hasBeenUnlockedSinceBoot;
	os_unfair_lock_s _monitorLock;
	HKSPObserverSet* _observers;
	NSNumber* _overrideDeviceHasBeenUnlockedSinceBoot;

}

@property (nonatomic,readonly) os_unfair_lock_s monitorLock;                                 //@synthesize monitorLock=_monitorLock - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * observers;                                  //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSNumber * overrideDeviceHasBeenUnlockedSinceBoot;              //@synthesize overrideDeviceHasBeenUnlockedSinceBoot=_overrideDeviceHasBeenUnlockedSinceBoot - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenUnlockedSinceBoot;                                //@synthesize hasBeenUnlockedSinceBoot=_hasBeenUnlockedSinceBoot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)setOverrideDeviceHasBeenUnlockedSinceBoot:(NSNumber *)arg1 ;
-(HKSPObserverSet *)observers;
-(os_unfair_lock_s)monitorLock;
-(id)init;
-(id)initWithCallbackScheduler:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(NSNumber *)overrideDeviceHasBeenUnlockedSinceBoot;
-(void)handleFirstUnlock;
-(BOOL)hasBeenUnlockedSinceBoot;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
@end

