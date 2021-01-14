/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <libobjc.A.dylib/SCKDatabaseStoreCoordinatorObserver.h>

@protocol SCKDatabaseStoreCoordinator, SCKContainerProxying, OS_dispatch_queue;
@class SCKDatabaseSchema, NSArray, SCKStartupQueue, SCKAsyncSerialQueue, NSObject, NSMutableDictionary;

@interface SCKDatabase : NSObject <SCKDatabaseStoreCoordinatorObserver> {

	os_unfair_lock_s _observersLock;
	SCKDatabaseSchema* _schema;
	id<SCKDatabaseStoreCoordinator> _storeCoordinator;
	id<SCKContainerProxying> _container;
	NSArray* _mergeHandlers;
	SCKStartupQueue* _startupQueue;
	SCKAsyncSerialQueue* _ckSyncQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _observersByZoneName;
	long long _status;
	NSMutableDictionary* _zoneSnapshotsByZoneName;

}

@property (nonatomic,retain) SCKDatabaseSchema * schema;                                    //@synthesize schema=_schema - In the implementation block
@property (nonatomic,retain) id<SCKDatabaseStoreCoordinator> storeCoordinator;              //@synthesize storeCoordinator=_storeCoordinator - In the implementation block
@property (nonatomic,retain) id<SCKContainerProxying> container;                            //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSArray * mergeHandlers;                                       //@synthesize mergeHandlers=_mergeHandlers - In the implementation block
@property (nonatomic,retain) SCKStartupQueue * startupQueue;                                //@synthesize startupQueue=_startupQueue - In the implementation block
@property (nonatomic,retain) SCKAsyncSerialQueue * ckSyncQueue;                             //@synthesize ckSyncQueue=_ckSyncQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                    //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observersByZoneName;                     //@synthesize observersByZoneName=_observersByZoneName - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s observersLock;                                //@synthesize observersLock=_observersLock - In the implementation block
@property (assign) long long status;                                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneSnapshotsByZoneName;                 //@synthesize zoneSnapshotsByZoneName=_zoneSnapshotsByZoneName - In the implementation block
-(void)setSchema:(SCKDatabaseSchema *)arg1 ;
-(SCKDatabaseSchema *)schema;
-(id)_emptyZonesNeedingFirstSync;
-(void)_enqueueStartupSequenceWithFeatures:(long long)arg1 ;
-(id)_sanitizeErrorForClients:(id)arg1 ;
-(NSMutableDictionary *)zoneSnapshotsByZoneName;
-(id<SCKDatabaseStoreCoordinator>)storeCoordinator;
-(SCKStartupQueue *)startupQueue;
-(void)_fetchDatabaseChangesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)t_flushChangesWithTimeout:(double)arg1 ;
-(void)_saveZoneToContainer:(id)arg1 allowRecoveryAttempt:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(os_unfair_lock_s)observersLock;
-(void)_saveZonesToContainer:(id)arg1 allowRecoveryAttempt:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_squashZoneForMerge:(id)arg1 zoneStore:(id)arg2 ;
-(void)setZoneSnapshotsByZoneName:(NSMutableDictionary *)arg1 ;
-(void)setObserversLock:(os_unfair_lock_s)arg1 ;
-(void)setMergeHandlers:(NSArray *)arg1 ;
-(void)pollForChangesWithCondition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContainer:(id<SCKContainerProxying>)arg1 ;
-(void)_fetchZoneChangesForZones:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setObserversByZoneName:(NSMutableDictionary *)arg1 ;
-(void)storeCoordinatorDiscoveredExternalChanges:(id)arg1 ;
-(void)synchronize;
-(void)checkSyncingEnabledWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSchema:(id)arg1 store:(id)arg2 features:(long long)arg3 mergeHandlers:(id)arg4 containerProxy:(id)arg5 ;
-(void)_fetchDatabaseAndZoneChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)setCkSyncQueue:(SCKAsyncSerialQueue *)arg1 ;
-(void)modifyContentsOfZone:(id)arg1 withCommand:(id)arg2 ;
-(id)initWithSchema:(id)arg1 store:(id)arg2 features:(long long)arg3 containerProxy:(id)arg4 ;
-(id)initWithSchema:(id)arg1 store:(id)arg2 migrationPlan:(id)arg3 features:(long long)arg4 containerProxy:(id)arg5 ;
-(id)_zonesNeedingFetch;
-(void)_reloadSnapshotOfZone:(id)arg1 fromStore:(id)arg2 ;
-(void)_createZoneInContainerWithSchema:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSchema:(id)arg1 store:(id)arg2 migrationPlan:(id)arg3 containerProxy:(id)arg4 ;
-(NSMutableDictionary *)observersByZoneName;
-(SCKAsyncSerialQueue *)ckSyncQueue;
-(NSArray *)mergeHandlers;
-(void)readContentsOfZone:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)addObserver:(id)arg1 forZone:(id)arg2 ;
-(void)_runCKOperation:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setStartupQueue:(SCKStartupQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)removeObserver:(id)arg1 forZone:(id)arg2 ;
-(void)_deleteAndRecreateAllZonesWithCompletion:(/*^block*/id)arg1 ;
-(void)setStoreCoordinator:(id<SCKDatabaseStoreCoordinator>)arg1 ;
-(id<SCKContainerProxying>)container;
-(void)handleRemoteNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_recoverFromIdentityLossWithCompletion:(/*^block*/id)arg1 ;
-(void)savePendingChangesToServerWithCompletion:(/*^block*/id)arg1 ;
-(long long)status;
-(id)_zoneWithSchema:(id)arg1 zoneStore:(id)arg2 ;
-(id)_zonesNeedingSave;
@end

