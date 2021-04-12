/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSource.h>

@class HDSPEnvironment, HKSPObserverSet, NSString;

@interface HDSPTimeChangeListener : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSource> {

	HDSPEnvironment* environment;
	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) HKSPObserverSet * observers;                       //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(void)handleTimeZoneChange;
-(void)handleSignificantTimeChange;
-(id)initWithEnvironment:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(NSString *)sourceIdentifier;
@end

