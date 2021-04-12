/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, HKSPObserverSet, NSMutableDictionary, NSString;

@interface HDSPNotificationListener : NSObject <HDSPEnvironmentAware> {

	os_unfair_lock_s _launchNotificationRegistrationLock;
	HDSPEnvironment* _environment;
	HKSPObserverSet* _observers;
	NSMutableDictionary* _launchNotificationRegistrations;

}

@property (nonatomic,readonly) HKSPObserverSet * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * launchNotificationRegistrations;              //@synthesize launchNotificationRegistrations=_launchNotificationRegistrations - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s launchNotificationRegistrationLock;                //@synthesize launchNotificationRegistrationLock=_launchNotificationRegistrationLock - In the implementation block
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                               //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)startListening;
-(void)unregisterForLaunchNotificationWithName:(const char*)arg1 key:(id)arg2 ;
-(os_unfair_lock_s)launchNotificationRegistrationLock;
-(HKSPObserverSet *)observers;
-(void)_withLock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)launchNotificationRegistrations;
-(void)_handleNotificationWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithEnvironment:(id)arg1 ;
-(void)registerForLaunchNotificationWithName:(const char*)arg1 key:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(void)_registerForStream:(id)arg1 ;
@end

