/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncContextObject.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/_DKKnowledgeStorageEventNotificationDelegate.h>
#import <libobjc.A.dylib/_DKSyncRemoteKnowledgeStorageFetchDelegate.h>
#import <libobjc.A.dylib/_DKSyncCoordinator.h>

@protocol NSObject, OS_xpc_object, _DKKeyValueStore, _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKSyncType, _DKThrottledActivity, NSMutableSet, NSMutableArray, _DKDataProtectionStateMonitor, NSString, _DKSync2State, APSConnection, _CDMutablePerfMetric, _DKSyncToggle, _CDPeriodicSchedulerJob, NSObject, _DKKnowledgeStorage, NSUUID;

@interface _DKSync2Coordinator : _DKSyncContextObject <APSConnectionDelegate, _DKKnowledgeStorageEventNotificationDelegate, _DKSyncRemoteKnowledgeStorageFetchDelegate, _DKSyncCoordinator> {

	_DKThrottledActivity* _activityThrottler;
	id<NSObject> _observerToken;
	NSMutableSet* _busyTransactions;
	NSMutableArray* _insertedSyncedEvents;
	NSMutableArray* _deletedSyncedEvents;
	NSMutableSet* _activatedPeers;
	_DKDataProtectionStateMonitor* _dataProtectionMonitor;
	BOOL _hasRegisteredOptionalObservers;
	BOOL _isEnabled;
	NSString* _triggeredSyncDelayActivityName;
	NSString* _syncActivityName;
	_DKSync2State* _syncState;
	double _periodicJobInterval;
	BOOL _databaseObserversRegistered;
	BOOL _cloudDeviceCountChangedObserverRegistered;
	BOOL _cloudSyncAvailablityObserverRegistered;
	BOOL _rapportAvailablityObserverRegistered;
	BOOL _siriSyncEnabledObserverRegistered;
	BOOL _syncPolicyChangedObserverRegistered;
	APSConnection* _connection;
	NSMutableSet* _streamNamesObservedForAdditions;
	NSMutableSet* _streamNamesObservedForDeletions;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;
	_DKSyncToggle* _syncEnabledToggler;
	_DKSyncToggle* _someTransportIsAvailableToggler;
	_DKSyncToggle* _cloudIsAvailableToggler;
	_DKSyncToggle* _rapportIsAvailableToggler;
	_CDPeriodicSchedulerJob* _periodicJob;
	BOOL _triggeredSyncActivityRegistered;
	NSObject*<OS_xpc_object> _triggeredSyncActivity;
	BOOL _isBusy;
	BOOL _hasSyncedUpHistoryToCloud;
	_DKKnowledgeStorage* _storage;
	id<_DKKeyValueStore> _keyValueStore;
	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transportCloudDown;
	id<_DKSyncRemoteKnowledgeStorage> _transportCloudUp;
	id<_DKSyncRemoteKnowledgeStorage> _transportRapport;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * deviceUUID; 
@property (nonatomic,readonly) _DKSyncType * syncType; 
@property (assign) BOOL isBusy;                                                                 //@synthesize isBusy=_isBusy - In the implementation block
@property (nonatomic,retain) id<_DKKeyValueStore> keyValueStore;                                //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (assign,nonatomic) BOOL hasSyncedUpHistoryToCloud;                                    //@synthesize hasSyncedUpHistoryToCloud=_hasSyncedUpHistoryToCloud - In the implementation block
@property (nonatomic,retain) id<_DKSyncLocalKnowledgeStorage> localStorage;                     //@synthesize localStorage=_localStorage - In the implementation block
@property (nonatomic,retain) id<_DKSyncRemoteKnowledgeStorage> transportCloudDown;              //@synthesize transportCloudDown=_transportCloudDown - In the implementation block
@property (nonatomic,retain) id<_DKSyncRemoteKnowledgeStorage> transportCloudUp;                //@synthesize transportCloudUp=_transportCloudUp - In the implementation block
@property (nonatomic,retain) id<_DKSyncRemoteKnowledgeStorage> transportRapport;                //@synthesize transportRapport=_transportRapport - In the implementation block
@property (nonatomic,readonly) _DKKnowledgeStorage * storage;                                   //@synthesize storage=_storage - In the implementation block
+(id)storage;
+(id)keyValueStoreForDomain:(id)arg1 ;
+(BOOL)isOnPower;
+(void)_updateEventStatsWithSyncType:(id)arg1 ;
+(void)_updateEventStatsWithSyncElapsedTimeStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)_syncTypeFromActivity:(id)arg1 ;
+(BOOL)shouldDeferSyncOperationWithClass:(Class)arg1 syncType:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 ;
+(BOOL)canPerformSyncOperationWithClass:(Class)arg1 syncType:(id)arg2 history:(id)arg3 transport:(id)arg4 peer:(id)arg5 policy:(id)arg6 ;
+(id)streamNamesToTombstone;
-(void)dealloc;
-(_DKKnowledgeStorage *)storage;
-(void)start;
-(BOOL)isSingleDevice;
-(id)policyForSyncTransportType:(long long)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)_syncEnabledToggle;
-(void)_syncDisabledToggle;
-(void)_someTransportIsAvailableToggle;
-(void)_noTransportIsAvailableToggle;
-(void)_cloudIsAvailableToggle;
-(void)_cloudIsUnavailableToggle;
-(void)_rapportIsAvailableToggle;
-(void)_rapportIsUnavailableToggle;
-(void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(BOOL)arg2 ;
-(void)_reregisterPeriodicJob;
-(void)_performSyncTogglesChangedActions;
-(NSUUID *)deviceUUID;
-(void)_registerSyncPolicyChangedObserver;
-(void)_registerRapportAvailablityObserver;
-(void)_registerCloudSyncAvailablityObserver;
-(void)_registerSiriSyncEnabledObserver;
-(void)_registerRapportLaunchOnDemandHandler;
-(void)_performEnableAndStart;
-(void)_deleteSiriEventsIfSiriCloudSyncHasBeenDisabled;
-(void)_unregisterRapportAvailablityObserver;
-(void)_unregisterCloudSyncAvailablityObserver;
-(void)_unregisterSiriSyncEnabledObserver;
-(void)_registerPeriodicJob;
-(void)_registerDatabaseObservers;
-(void)_registerTriggeredSyncActivityWithIsStartup:(BOOL)arg1 ;
-(void)_unregisterPeriodicJob;
-(void)_unregisterDatabaseObservers;
-(void)_createPushConnection;
-(void)_registerCloudDeviceCountChangedObserver;
-(void)_possiblyPerformInitialSync;
-(void)_destroyPushConnection;
-(void)_unregisterCloudDeviceCountChangedObserver;
-(void)configureTracker;
-(void)setupStorage;
-(void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2 ;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 ;
-(void)setIsBusy:(BOOL)arg1 ;
-(id)createBusyTransactionWithName:(const char*)arg1 ;
-(void)handleFetchedSourceDeviceID:(id)arg1 version:(id)arg2 fromPeer:(id)arg3 error:(id)arg4 ;
-(void)removeBusyTransaction:(id)arg1 ;
-(void)_performSyncWithForceSync:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performSyncWithSyncType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unregisterTriggeredSyncActivity;
-(void)__performSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateTriggeredSyncActivity;
-(id<_DKKeyValueStore>)keyValueStore;
-(void)setHasSyncedUpHistoryToCloud:(BOOL)arg1 ;
-(void)__finishSyncWithTransaction:(id)arg1 startDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performInitialSync;
-(void)_finishActivityWithError:(id)arg1 ;
-(double)_intervalForJobGivenIsSingleDevice:(BOOL)arg1 ;
-(void)_registerPeriodicJobWithInterval:(double)arg1 ;
-(id)_executionCriteriaWithInterval:(double)arg1 ;
-(void)_performPeriodicJob;
-(void)_cloudSyncAvailabilityDidChange:(id)arg1 ;
-(void)_syncPolicyDidChange:(id)arg1 ;
-(void)_deleteForeignSiriEvents;
-(void)_deleteSiriCloudEvents;
-(void)_deleteNextBatchOfOurSiriEventsFromCloudWithStartDate:(id)arg1 ;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id*)arg5 ;
-(void)possiblyUpdateIsBusyProperty;
-(id)_updatedExecutionCriteriaFromType:(id)arg1 ;
-(void)_checkInTriggeredSyncActivity:(id)arg1 isStartup:(BOOL)arg2 ;
-(void)_runTriggeredSyncActivity:(id)arg1 ;
-(void)syncWithReply:(/*^block*/id)arg1 ;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)deleteRemoteStateWithReply:(/*^block*/id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)_siriSyncEnabledDidChange;
-(void)_unregisterSyncPolicyChangedObserver;
-(BOOL)isBusy;
-(void)setKeyValueStore:(id<_DKKeyValueStore>)arg1 ;
-(BOOL)hasSyncedUpHistoryToCloud;
-(id<_DKSyncLocalKnowledgeStorage>)localStorage;
-(void)setLocalStorage:(id<_DKSyncLocalKnowledgeStorage>)arg1 ;
-(id<_DKSyncRemoteKnowledgeStorage>)transportCloudDown;
-(void)setTransportCloudDown:(id<_DKSyncRemoteKnowledgeStorage>)arg1 ;
-(id<_DKSyncRemoteKnowledgeStorage>)transportCloudUp;
-(void)setTransportCloudUp:(id<_DKSyncRemoteKnowledgeStorage>)arg1 ;
-(id<_DKSyncRemoteKnowledgeStorage>)transportRapport;
-(void)setTransportRapport:(id<_DKSyncRemoteKnowledgeStorage>)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)_databaseDidDeleteFromStreamNameCounts:(id)arg1 ;
-(void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2 ;
-(void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2 ;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6 ;
-(id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5 ;
-(_DKSyncType *)syncType;
@end

