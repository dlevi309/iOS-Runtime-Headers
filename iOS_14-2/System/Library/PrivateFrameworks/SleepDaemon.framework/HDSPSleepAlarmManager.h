/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPSource.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>

@protocol HDSPSleepAlarmProvider;
@class HDSPEnvironment, HKSPObserverSet, NSString;

@interface HDSPSleepAlarmManager : NSObject <HDSPSource, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver> {

	HDSPEnvironment* _environment;
	HKSPObserverSet* _sleepAlarmObservers;
	id<HDSPSleepAlarmProvider> _sleepAlarmProvider;

}

@property (nonatomic,readonly) HKSPObserverSet * sleepAlarmObservers;                      //@synthesize sleepAlarmObservers=_sleepAlarmObservers - In the implementation block
@property (nonatomic,readonly) id<HDSPSleepAlarmProvider> sleepAlarmProvider;              //@synthesize sleepAlarmProvider=_sleepAlarmProvider - In the implementation block
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                       //@synthesize environment=_environment - In the implementation block
-(void)resetSleepAlarmSnoozeState;
-(void)addObserver:(id)arg1 ;
-(HKSPObserverSet *)sleepAlarmObservers;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(id)initWithEnvironment:(id)arg1 sleepAlarmProvider:(id)arg2 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)currentSleepAlarmWithIdentifier:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(id)currentSleepAlarms;
-(NSString *)sourceIdentifier;
-(id<HDSPSleepAlarmProvider>)sleepAlarmProvider;
@end

