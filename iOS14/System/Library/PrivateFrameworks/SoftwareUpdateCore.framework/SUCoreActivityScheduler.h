/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/


@protocol _CDContext, OS_dispatch_queue;
@class NSMutableArray, NSObject, SUCorePersistedState;

@interface SUCoreActivityScheduler : NSObject {

	id<_CDContext> _context;
	NSMutableArray* _activityArray;
	NSMutableArray* _registrationArray;
	NSObject*<OS_dispatch_queue> _stateQueue;
	SUCorePersistedState* _persistedState;

}
+(id)sharedInstance;
-(void)_loadPersistedRegistrationMap;
-(id)initWithPersistedStatePath:(id)arg1 ;
-(void)_queue_addRegistration:(id)arg1 forActivity:(id)arg2 ;
-(void)_queue_persistRegistrationMap;
-(id)_queue_registrationForActivity:(id)arg1 ;
-(void)_queue_removeRegistrationForActivity:(id)arg1 ;
-(id)_contextStoreRegisteredActivities;
-(id)sharedMemoryStore;
-(void)_registerRegistration:(id)arg1 forActivity:(id)arg2 ;
-(void)_unregisterRegistrationForActivity:(id)arg1 ;
-(void)_unregisterAllActivitiesWithName:(id)arg1 ;
-(id)_copyRegisteredActivities;
-(void)scheduleActivity:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)unregisterActivity:(id)arg1 ;
-(void)unregisterActivitiesWithName:(id)arg1 ;
-(id)copyScheduledActivities;
@end

