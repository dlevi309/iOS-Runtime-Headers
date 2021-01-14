/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_group;
#import <CoreData/CoreData-Structs.h>
@class NSObject, NSPersistentStoreCoordinator, NSPersistentStore, NSString;

@interface PFCloudKitStoreMonitor : NSObject {

	NSObject*<OS_dispatch_group> _monitorGroup;
	os_unfair_lock_s _aliveLock;
	BOOL _storeIsAlive;
	BOOL _declaredDead;
	int _retryCount;
	int _timeoutSeconds;
	NSPersistentStoreCoordinator* _monitoredCoordinator;
	NSPersistentStore* _monitoredStore;
	NSString* _storeIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> monitorGroup;                               //@synthesize monitorGroup=_monitorGroup - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStoreCoordinator * monitoredCoordinator;              //@synthesize monitoredCoordinator=_monitoredCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStore * monitoredStore;                               //@synthesize monitoredStore=_monitoredStore - In the implementation block
@property (nonatomic,readonly) int retryCount;                                                          //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) int timeoutSeconds;                                                      //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,readonly) NSString * storeIdentifier;                                              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL declaredDead;                                                       //@synthesize declaredDead=_declaredDead - In the implementation block
-(int)timeoutSeconds;
-(NSPersistentStore *)monitoredStore;
-(id)newBackgroundContextForMonitoredCoordinator;
-(int)retryCount;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(id)retainedMonitoredStore;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSPersistentStoreCoordinator *)monitoredCoordinator;
-(void)declareStoreDead;
-(id)instantiateNewBackgroundContext;
-(id)retainedMonitoredCoordinator;
-(BOOL)declaredDead;
-(NSObject*<OS_dispatch_group>)monitorGroup;
-(void)pfcloudstoremonitor_is_holding_your_store_open_waiting_for_cloudkit_activity_to_finish;
-(NSString *)storeIdentifier;
-(id)initForStore:(id)arg1 ;
-(void)dealloc;
@end

