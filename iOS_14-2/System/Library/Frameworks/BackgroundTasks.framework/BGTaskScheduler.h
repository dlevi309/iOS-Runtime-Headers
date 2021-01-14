/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
*/

#import <BackgroundTasks/BackgroundTasks-Structs.h>
#import <libobjc.A.dylib/_DASActivityBackgroundTasksSchedulerDelegate.h>

@protocol _DASActivityBackgroundTasksScheduler;
@class NSMutableSet, NSMutableDictionary, NSSet, NSMapTable, NSString;

@interface BGTaskScheduler : NSObject <_DASActivityBackgroundTasksSchedulerDelegate> {

	os_unfair_lock_s __lock;
	id<_DASActivityBackgroundTasksScheduler> __scheduler;
	NSMutableSet* __queuedLaunchActivities;
	NSMutableSet* __queuedExpiredLaunchActivities;
	NSMutableDictionary* __registrations;
	NSSet* __permittedIdentifiers;
	NSMapTable* __runningTasksMap;

}

@property (setter=_setScheduler:,nonatomic,retain) id<_DASActivityBackgroundTasksScheduler> _scheduler;                            //@synthesize _scheduler=__scheduler - In the implementation block
@property (setter=_setQueuedLaunchActivities:,nonatomic,retain) NSMutableSet * _queuedLaunchActivities;                            //@synthesize _queuedLaunchActivities=__queuedLaunchActivities - In the implementation block
@property (setter=_setQueuedExpiredLaunchActivities:,nonatomic,retain) NSMutableSet * _queuedExpiredLaunchActivities;              //@synthesize _queuedExpiredLaunchActivities=__queuedExpiredLaunchActivities - In the implementation block
@property (assign,setter=_setLock:,nonatomic) os_unfair_lock_s _lock;                                                              //@synthesize _lock=__lock - In the implementation block
@property (setter=_setRegistrations:,nonatomic,retain) NSMutableDictionary * _registrations;                                       //@synthesize _registrations=__registrations - In the implementation block
@property (setter=_setPermittedIdentifiers:,nonatomic,retain) NSSet * _permittedIdentifiers;                                       //@synthesize _permittedIdentifiers=__permittedIdentifiers - In the implementation block
@property (setter=_setRunningTasksMap:,nonatomic,retain) NSMapTable * _runningTasksMap;                                            //@synthesize _runningTasksMap=__runningTasksMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(BOOL)_isRunningInExtension;
+(void)_applicationDidFinishLaunching:(id)arg1 ;
+(id)_log;
+(id)sharedScheduler;
+(id)_sharedSchedulerIfExists;
-(void)_handleAppLaunch;
-(os_unfair_lock_s)_lock;
-(BOOL)_isRunningTaskOfClass:(Class)arg1 ;
-(id)init;
-(void)_callExpirationHandlersForActivities:(id)arg1 shouldQueue:(BOOL)arg2 ;
-(NSMutableDictionary *)_registrations;
-(NSSet *)_permittedIdentifiers;
-(void)_setPermittedIdentifiers:(id)arg1 ;
-(void)_setRegistrations:(id)arg1 ;
-(id<_DASActivityBackgroundTasksScheduler>)_scheduler;
-(id)_runningTasks;
-(void)_setLock:(os_unfair_lock_s)arg1 ;
-(void)scheduler:(id)arg1 willExpireActivities:(id)arg2 ;
-(NSMutableSet *)_queuedExpiredLaunchActivities;
-(void)_setQueuedLaunchActivities:(id)arg1 ;
-(BOOL)_unsafe_submitTaskRequest:(id)arg1 error:(id*)arg2 ;
-(void)_runTask:(id)arg1 registration:(id)arg2 ;
-(void)scheduler:(id)arg1 handleLaunchForActivities:(id)arg2 ;
-(BOOL)_unsafe_registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(/*^block*/id)arg3 ;
-(void)_setQueuedExpiredLaunchActivities:(id)arg1 ;
-(void)_setRunningTasksMap:(id)arg1 ;
-(BOOL)submitTaskRequest:(id)arg1 error:(id*)arg2 ;
-(void)_setScheduler:(id)arg1 ;
-(void)cancelAllTaskRequests;
-(id)_queueForRegistration:(id)arg1 ;
-(id)_init;
-(void)_callRegisteredHandlersForActivities:(id)arg1 ;
-(NSMapTable *)_runningTasksMap;
-(void)_simulateExpirationForTaskWithIdentifier:(id)arg1 ;
-(void)cancelTaskRequestWithIdentifier:(id)arg1 ;
-(void)getPendingTaskRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(/*^block*/id)arg3 ;
-(void)_simulateLaunchForTaskWithIdentifier:(id)arg1 ;
-(NSMutableSet *)_queuedLaunchActivities;
-(id)_unsafe_registrationForIdentifier:(id)arg1 ;
@end

