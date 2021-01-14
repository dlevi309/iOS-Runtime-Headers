/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKAssetRepairSchedulerDelegate.h>
#import <libobjc.A.dylib/CKSyncEngineDataSource.h>

@protocol NSObject, OS_dispatch_queue;
@class CKUploadRequestManagerStateMachine, NSString, CKContainer, CKUploadRequestConfiguration, CKSyncEngine, CKAssetRepairScheduler, CKUploadRequestPersistentStore, CKSchedulerActivity, CKUploadRequestManagerResponseActionThrottler, NSObject, NSMutableDictionary;

@interface CKUploadRequestManagerInternals : NSObject <CKAssetRepairSchedulerDelegate, CKSyncEngineDataSource> {

	BOOL _ignoringSystemConditions;
	BOOL _hasRegisteredActivity;
	int _fetchAllToken;
	CKUploadRequestManagerStateMachine* _stateMachine;
	NSString* _machServiceName;
	CKContainer* _container;
	CKContainer* _repairContainer;
	CKUploadRequestConfiguration* _repairContainerOverrides;
	CKSyncEngine* _repairZoneSyncEngine;
	NSString* _assignedMachServiceName;
	CKAssetRepairScheduler* _repairProcessor;
	CKUploadRequestPersistentStore* _database;
	NSString* _deviceID;
	NSString* _cachesDirectory;
	SCNetworkReachabilityRef _reachability;
	id<NSObject> _accountChangeObserver;
	/*^block*/id _scheduledAccountStatusCheck;
	/*^block*/id _repairActivityHandler;
	CKSchedulerActivity* _observedRepairActivity;
	CKUploadRequestManagerResponseActionThrottler* _responseActionThrottler;
	NSObject*<OS_dispatch_queue> _stateMachineQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _callbackForOverridePoint;
	/*^block*/id _assetRequestCallback;
	/*^block*/id _packageRequestCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CKContainer * container;                                                              //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) CKContainer * repairContainer;                                                        //@synthesize repairContainer=_repairContainer - In the implementation block
@property (nonatomic,retain) CKUploadRequestConfiguration * repairContainerOverrides;                              //@synthesize repairContainerOverrides=_repairContainerOverrides - In the implementation block
@property (nonatomic,retain) CKUploadRequestManagerStateMachine * stateMachine;                                    //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) CKSyncEngine * repairZoneSyncEngine;                                                  //@synthesize repairZoneSyncEngine=_repairZoneSyncEngine - In the implementation block
@property (nonatomic,retain) NSString * assignedMachServiceName;                                                   //@synthesize assignedMachServiceName=_assignedMachServiceName - In the implementation block
@property (assign,nonatomic) BOOL hasRegisteredActivity;                                                           //@synthesize hasRegisteredActivity=_hasRegisteredActivity - In the implementation block
@property (nonatomic,retain) CKAssetRepairScheduler * repairProcessor;                                             //@synthesize repairProcessor=_repairProcessor - In the implementation block
@property (nonatomic,retain) CKUploadRequestPersistentStore * database;                                            //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                                                                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * cachesDirectory;                                                           //@synthesize cachesDirectory=_cachesDirectory - In the implementation block
@property (assign,nonatomic) SCNetworkReachabilityRef reachability;                                                //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) id<NSObject> accountChangeObserver;                                                   //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
@property (nonatomic,copy) id scheduledAccountStatusCheck;                                                         //@synthesize scheduledAccountStatusCheck=_scheduledAccountStatusCheck - In the implementation block
@property (assign,nonatomic) int fetchAllToken;                                                                    //@synthesize fetchAllToken=_fetchAllToken - In the implementation block
@property (nonatomic,copy) id repairActivityHandler;                                                               //@synthesize repairActivityHandler=_repairActivityHandler - In the implementation block
@property (nonatomic,retain) CKSchedulerActivity * observedRepairActivity;                                         //@synthesize observedRepairActivity=_observedRepairActivity - In the implementation block
@property (nonatomic,retain) CKUploadRequestManagerResponseActionThrottler * responseActionThrottler;              //@synthesize responseActionThrottler=_responseActionThrottler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateMachineQueue;                                       //@synthesize stateMachineQueue=_stateMachineQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateQueue;                                              //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                           //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * callbackForOverridePoint;                                       //@synthesize callbackForOverridePoint=_callbackForOverridePoint - In the implementation block
@property (nonatomic,readonly) BOOL ignoringSystemConditions;                                                      //@synthesize ignoringSystemConditions=_ignoringSystemConditions - In the implementation block
@property (copy) id assetRequestCallback;                                                                          //@synthesize assetRequestCallback=_assetRequestCallback - In the implementation block
@property (copy) id packageRequestCallback;                                                                        //@synthesize packageRequestCallback=_packageRequestCallback - In the implementation block
@property (copy) NSString * machServiceName;                                                                       //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,readonly) NSString * activityIdentifierForSchedulingRepairs; 
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)setDatabase:(CKUploadRequestPersistentStore *)arg1 ;
-(void)setAccountChangeObserver:(id<NSObject>)arg1 ;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStateMachine:(CKUploadRequestManagerStateMachine *)arg1 ;
-(SCNetworkReachabilityRef)reachability;
-(NSString *)machServiceName;
-(void)setContainer:(CKContainer *)arg1 ;
-(BOOL)ignoringSystemConditions;
-(CKUploadRequestManagerStateMachine *)stateMachine;
-(void)setAssetRequestCallback:(id)arg1 ;
-(void)setPackageRequestCallback:(id)arg1 ;
-(void)manuallyTriggerUploadRequests;
-(id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(BOOL)arg3 ;
-(id)assetRequestCallback;
-(id)packageRequestCallback;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(CKUploadRequestPersistentStore *)database;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)registerForAccountNotifications;
-(void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2 ;
-(void)syncEngine:(id)arg1 didSaveRecord:(id)arg2 ;
-(void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3 ;
-(void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2 ;
-(void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3 ;
-(id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2 ;
-(void)syncEngine:(id)arg1 didFetchRecord:(id)arg2 ;
-(void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3 ;
-(void)syncEngine:(id)arg1 zoneWithIDChanged:(id)arg2 ;
-(void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2 ;
-(void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2 ;
-(id)repairZoneID;
-(void)dispatchEvent:(long long)arg1 synchronously:(BOOL)arg2 ;
-(CKSyncEngine *)repairZoneSyncEngine;
-(id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ;
-(NSString *)activityIdentifierForSchedulingRepairs;
-(CKContainer *)repairContainer;
-(void)fetchServerChanges:(/*^block*/id)arg1 ;
-(void)scheduleOrInvokeRepairsNow;
-(void)setCallback:(/*^block*/id)arg1 forOverridePoint:(long long)arg2 ;
-(void)dispatchEvent:(long long)arg1 ;
-(void)commonInitWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ;
-(id)createStateMachine;
-(NSString *)assignedMachServiceName;
-(NSObject*<OS_dispatch_queue>)stateMachineQueue;
-(CKUploadRequestConfiguration *)repairContainerOverrides;
-(NSMutableDictionary *)callbackForOverridePoint;
-(void)setCallbackForOverridePoint:(NSMutableDictionary *)arg1 ;
-(id)createDatabase;
-(void)setRepairActivityHandler:(id)arg1 ;
-(void)invokeCallbackForOverridePoint:(long long)arg1 withError:(id)arg2 onCallbackQueue:(BOOL)arg3 ;
-(void)setRepairContainer:(CKContainer *)arg1 ;
-(void)setRepairContainerOverrides:(CKUploadRequestConfiguration *)arg1 ;
-(void)setRepairZoneSyncEngine:(CKSyncEngine *)arg1 ;
-(void)setRepairProcessor:(CKAssetRepairScheduler *)arg1 ;
-(CKContainer *)container;
-(void)setAssignedMachServiceName:(NSString *)arg1 ;
-(BOOL)hasRegisteredActivity;
-(void)setHasRegisteredActivity:(BOOL)arg1 ;
-(CKAssetRepairScheduler *)repairProcessor;
-(void)setCachesDirectory:(NSString *)arg1 ;
-(void)setReachability:(SCNetworkReachabilityRef)arg1 ;
-(id)scheduledAccountStatusCheck;
-(int)fetchAllToken;
-(void)setScheduledAccountStatusCheck:(id)arg1 ;
-(void)setFetchAllToken:(int)arg1 ;
-(id)repairActivityHandler;
-(void)setStateMachineQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CKSchedulerActivity *)observedRepairActivity;
-(void)setObservedRepairActivity:(CKSchedulerActivity *)arg1 ;
-(CKUploadRequestManagerResponseActionThrottler *)responseActionThrottler;
-(void)setResponseActionThrottler:(CKUploadRequestManagerResponseActionThrottler *)arg1 ;
-(void)scheduleRecordRepair:(id)arg1 withDelay:(double)arg2 increasingCount:(BOOL)arg3 ;
-(BOOL)canPerformFunction:(long long)arg1 ;
-(void)performRepairs;
-(void)assetRepairScheduler:(id)arg1 completedRequestWithMetadata:(id)arg2 result:(long long)arg3 ;
-(BOOL)isRepairRecordActionable:(id)arg1 ;
-(void)assetRepairScheduler:(id)arg1 completedRepairWithMetadata:(id)arg2 error:(id)arg3 ;
-(void)assetRepairScheduler:(id)arg1 preparingRepairWithOperation:(id)arg2 ;
-(void)assetRepairSchedulerAllRequestsComplete:(id)arg1 ;
-(void)scheduleRepairsWithDelay:(double)arg1 ;
-(id)nextRepairDateForDate:(id)arg1 ;
-(id)repairableAssetsForDate:(id)arg1 ;
-(void)closeSyncEngine;
-(void)respondToStateMachineAction:(long long)arg1 isRetry:(BOOL)arg2 ;
-(void)respondToStateMachineChangeState:(long long)arg1 enter:(BOOL)arg2 ;
-(void)registerForRepairScheduler;
-(void)openSyncEngine;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancelScheduledEvent;
-(void)checkNetworkReachability;
-(void)registerForNetworkReachability;
-(void)checkAccountID;
-(void)unregisterFromNetworkReachability;
-(void)fetchRepairContainerMetadata;
-(void)checkAccountStatus;
-(void)unregisterFromAccountNotifications;
-(void)finishSchedulerCallbackWithDeferral:(BOOL)arg1 ;
-(void)scheduleNextSync;
-(void)scheduleRecurringFetch;
-(void)registerForFetchAllNotifications;
-(void)unregisterFromFetchAllNotifications;
-(id<NSObject>)accountChangeObserver;
-(NSString *)cachesDirectory;
@end

