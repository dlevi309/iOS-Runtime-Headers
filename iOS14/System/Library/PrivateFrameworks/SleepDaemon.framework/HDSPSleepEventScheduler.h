/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPEventScheduleDelegate.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>
#import <libobjc.A.dylib/HDSPSleepEventDelegate.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPEventScheduler, HKSPExecutor;
@class HDSPEnvironment, HDSPSleepEventList, HKSPObserverSet, NSHashTable, NSDate, NSString;

@interface HDSPSleepEventScheduler : NSObject <HDSPEventScheduleDelegate, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepEventDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware> {

	os_unfair_lock_s _scheduleLock;
	HDSPEnvironment* _environment;
	HDSPSleepEventList* _sleepEvents;
	HKSPObserverSet* _eventHandlers;
	NSHashTable* _eventProviders;
	NSHashTable* _pendingEventProviders;
	id<HDSPEventScheduler> _scheduler;
	id<HKSPExecutor> _executor;

}

@property (nonatomic,readonly) os_unfair_lock_s scheduleLock;                     //@synthesize scheduleLock=_scheduleLock - In the implementation block
@property (nonatomic,readonly) HDSPSleepEventList * sleepEvents;                  //@synthesize sleepEvents=_sleepEvents - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * eventHandlers;                   //@synthesize eventHandlers=_eventHandlers - In the implementation block
@property (nonatomic,readonly) NSHashTable * eventProviders;                      //@synthesize eventProviders=_eventProviders - In the implementation block
@property (nonatomic,readonly) NSHashTable * pendingEventProviders;               //@synthesize pendingEventProviders=_pendingEventProviders - In the implementation block
@property (nonatomic,readonly) id<HDSPEventScheduler> scheduler;                  //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,copy,readonly) id<HKSPExecutor> executor;                    //@synthesize executor=_executor - In the implementation block
@property (nonatomic,retain) NSDate * lastEventTriggerDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
-(id)diagnosticInfo;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(HKSPObserverSet *)eventHandlers;
-(void)removeEventProvider:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(NSDate *)lastEventTriggerDate;
-(void)_withLock:(/*^block*/id)arg1 ;
-(NSHashTable *)eventProviders;
-(os_unfair_lock_s)scheduleLock;
-(void)setLastEventTriggerDate:(NSDate *)arg1 ;
-(NSHashTable *)pendingEventProviders;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(void)_lock_scheduledEventIsDue;
-(void)scheduledEventIsDue;
-(void)rescheduleEvents;
-(void)removeEventHandler:(id)arg1 ;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(HDSPSleepEventList *)sleepEvents;
-(id)diagnosticDescription;
-(BOOL)_shouldNotifyHandler:(id)arg1 forEvent:(id)arg2 ;
-(void)addEventProvider:(id)arg1 ;
-(void)eventProviderCancelledEvents:(id)arg1 ;
-(id<HKSPExecutor>)executor;
-(BOOL)_lock_shouldScheduleEvents;
-(HDSPEnvironment *)environment;
-(id)_allSleepEvents;
-(id)initWithEnvironment:(id)arg1 schedulerProvider:(/*^block*/id)arg2 executorProvider:(/*^block*/id)arg3 ;
-(void)eventProviderHasUpcomingEvents:(id)arg1 ;
-(void)_schedulePendingEvents;
-(void)addEventHandler:(id)arg1 ;
-(void)_lock_rescheduleEvents;
-(id<HDSPEventScheduler>)scheduler;
@end

