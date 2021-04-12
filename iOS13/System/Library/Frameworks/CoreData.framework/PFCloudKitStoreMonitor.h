/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) BOOL declaredDead;                                                       //@synthesize declaredDead=_declaredDead - In the implementation block
@property (nonatomic,readonly) BOOL storeIsAlive;                                                       //@synthesize storeIsAlive=_storeIsAlive - In the implementation block
@property (nonatomic,readonly) NSString * storeIdentifier;                                              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
-(int)timeoutSeconds;
-(int)retryCount;
-(id)initForStore:(id)arg1 ;
-(BOOL)storeIsAlive;
-(id)newBackgroundContextForMonitoredCoordinator;
-(NSString *)storeIdentifier;
-(id)retainedMonitoredCoordinator;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(void)declareStoreDead;
-(void)pfcloudstoremonitor_is_holding_your_store_open_waiting_for_cloudkit_activity_to_finish;
-(id)instantiateNewBackgroundContext;
-(NSObject*<OS_dispatch_group>)monitorGroup;
-(NSPersistentStoreCoordinator *)monitoredCoordinator;
-(NSPersistentStore *)monitoredStore;
-(BOOL)declaredDead;
@end

