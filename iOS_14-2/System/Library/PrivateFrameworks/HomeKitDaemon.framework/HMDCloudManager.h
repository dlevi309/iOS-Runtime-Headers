/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBCloudPushObserver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCloudManagerDelegate, HMDCloudManagerDataSource, OS_dispatch_source;
@class NSObject, CKContainer, CKDatabase, HMDCloudCache, HMFMessageDispatcher, HMDCloudDataSyncStateFilter, HMDSyncOperationManager, NSMutableArray, HMDCloudLegacyZone, HMDCloudMetadataZone, HMDCloudHomeManagerZone, NSData, NSString;

@interface HMDCloudManager : HMFObject <HMBCloudPushObserver, HMFLogging> {

	BOOL _accountActive;
	BOOL _cloudHomeDataRecordExists;
	BOOL _keychainSyncEnabled;
	BOOL _firstV3FetchRun;
	BOOL _firstDBQueryRun;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<HMDCloudManagerDelegate> _delegate;
	id<HMDCloudManagerDataSource> _dataSource;
	CKContainer* _container;
	CKDatabase* _database;
	HMDCloudCache* _cloudCache;
	HMFMessageDispatcher* _configSyncDispatcher;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _fetchCompletionHandler;
	NSObject*<OS_dispatch_queue> _clientCallbackQueue;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSObject*<OS_dispatch_source> _pollTimer;
	NSObject*<OS_dispatch_source> _controllerKeyPollTimer;
	NSObject*<OS_dispatch_source> _watchdogControllerKeyPollTimer;
	/*^block*/id _cloudDataDeletedNotificationHandler;
	/*^block*/id _cloudMetadataDeletedNotificationHandler;
	/*^block*/id _controllerKeyAvailableNotificationHandler;
	HMDCloudDataSyncStateFilter* _cloudDataSyncStateFilter;
	HMFMessageDispatcher* _msgDispatcher;
	HMDSyncOperationManager* _syncManager;
	NSMutableArray* _currentBackoffTimerValuesInMinutes;
	/*^block*/id _dataDecryptionFailedHandler;
	/*^block*/id _accountActiveUpdateHandler;

}

@property (__weak,readonly) id<HMDCloudManagerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (__weak,readonly) id<HMDCloudManagerDataSource> dataSource;                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                                 //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) CKDatabase * database;                                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) HMDCloudCache * cloudCache;                                                //@synthesize cloudCache=_cloudCache - In the implementation block
@property (nonatomic,readonly) HMDCloudLegacyZone * legacyZone; 
@property (nonatomic,readonly) HMDCloudMetadataZone * metadataZone; 
@property (nonatomic,readonly) HMDCloudHomeManagerZone * homeManagerZone; 
@property (nonatomic,retain) HMFMessageDispatcher * configSyncDispatcher;                               //@synthesize configSyncDispatcher=_configSyncDispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                    //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) BOOL accountActive;                                                        //@synthesize accountActive=_accountActive - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                                                   //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientCallbackQueue;                          //@synthesize clientCallbackQueue=_clientCallbackQueue - In the implementation block
@property (assign,nonatomic) BOOL cloudHomeDataRecordExists;                                            //@synthesize cloudHomeDataRecordExists=_cloudHomeDataRecordExists - In the implementation block
@property (assign,nonatomic) BOOL keychainSyncEnabled;                                                  //@synthesize keychainSyncEnabled=_keychainSyncEnabled - In the implementation block
@property (nonatomic,readonly) BOOL decryptionFailed; 
@property (nonatomic,retain) NSObject*<OS_dispatch_source> retryTimer;                                  //@synthesize retryTimer=_retryTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> pollTimer;                                   //@synthesize pollTimer=_pollTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> controllerKeyPollTimer;                      //@synthesize controllerKeyPollTimer=_controllerKeyPollTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> watchdogControllerKeyPollTimer;              //@synthesize watchdogControllerKeyPollTimer=_watchdogControllerKeyPollTimer - In the implementation block
@property (nonatomic,copy) id cloudDataDeletedNotificationHandler;                                      //@synthesize cloudDataDeletedNotificationHandler=_cloudDataDeletedNotificationHandler - In the implementation block
@property (nonatomic,copy) id cloudMetadataDeletedNotificationHandler;                                  //@synthesize cloudMetadataDeletedNotificationHandler=_cloudMetadataDeletedNotificationHandler - In the implementation block
@property (nonatomic,copy) id controllerKeyAvailableNotificationHandler;                                //@synthesize controllerKeyAvailableNotificationHandler=_controllerKeyAvailableNotificationHandler - In the implementation block
@property (nonatomic,retain) HMDCloudDataSyncStateFilter * cloudDataSyncStateFilter;                    //@synthesize cloudDataSyncStateFilter=_cloudDataSyncStateFilter - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                      //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDSyncOperationManager * syncManager;                              //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentBackoffTimerValuesInMinutes;                       //@synthesize currentBackoffTimerValuesInMinutes=_currentBackoffTimerValuesInMinutes - In the implementation block
@property (nonatomic,copy) id dataDecryptionFailedHandler;                                              //@synthesize dataDecryptionFailedHandler=_dataDecryptionFailedHandler - In the implementation block
@property (nonatomic,copy) id accountActiveUpdateHandler;                                               //@synthesize accountActiveUpdateHandler=_accountActiveUpdateHandler - In the implementation block
@property (assign,getter=isFirstV3FetchRun,nonatomic) BOOL firstV3FetchRun;                             //@synthesize firstV3FetchRun=_firstV3FetchRun - In the implementation block
@property (assign,getter=isFirstDBQueryRun,nonatomic) BOOL firstDBQueryRun;                             //@synthesize firstDBQueryRun=_firstDBQueryRun - In the implementation block
@property (nonatomic,readonly) NSData * serverTokenData; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(void)setClientCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<HMDCloudManagerDelegate>)delegate;
-(void)setSyncManager:(HMDSyncOperationManager *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setRetryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)retryTimer;
-(NSObject*<OS_dispatch_queue>)clientCallbackQueue;
-(id<HMDCloudManagerDataSource>)dataSource;
-(void)handler:(id)arg1 didReceiveCKNotification:(id)arg2 ;
-(HMDSyncOperationManager *)syncManager;
-(id)fetchCompletionHandler;
-(BOOL)keychainSyncEnabled;
-(CKDatabase *)database;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(CKContainer *)container;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(HMDCloudCache *)cloudCache;
-(void)handler:(id)arg1 didReceivePushForTopic:(id)arg2 ;
-(BOOL)accountActive;
-(HMDCloudDataSyncStateFilter *)cloudDataSyncStateFilter;
-(BOOL)decryptionFailed;
-(id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 delegate:(id)arg4 dataSource:(id)arg5 syncManager:(id)arg6 callbackQueue:(id)arg7 container:(id)arg8 workQueue:(id)arg9 ;
-(void)resetCloudServerTokenData:(id)arg1 ;
-(void)handleKeychainStateChangedNotification:(id)arg1 ;
-(void)_registerForProxSetupNotifications;
-(void)__addCKDatabaseOperation:(id)arg1 ;
-(void)__deleteRecordZonesWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDCloudLegacyZone *)legacyZone;
-(HMDCloudMetadataZone *)metadataZone;
-(HMDCloudHomeManagerZone *)homeManagerZone;
-(void)_addHomeZoneName:(id)arg1 owner:(id)arg2 ;
-(void)_setupSubscriptionForZone:(id)arg1 ;
-(void)_removeHomeZoneName:(id)arg1 ;
-(void)_fetchTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_checkZoneAndUploadTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_uploadTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__saveRecordZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__deleteRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createZoneAndUploadTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__fetchRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_verifyZoneHasBeenDeletedTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeZonesTransactions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_uploadLegacyTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCloudHomeDataRecordExists:(BOOL)arg1 ;
-(void)_resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_resetCloudZonesIgnoreHomeManager:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchAndVerifyZoneRootRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_verifyAndRemoveZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__fetchAllRecordZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_resetCloudServerTokenData;
-(void)_stopFetchRetryTimer;
-(void)_updateServerTokenStatusOnCloudFilter;
-(void)_resetCloudCache:(/*^block*/id)arg1 ;
-(void)updateServerTokenStatusOnCloudFilter;
-(id)_serverTokenData;
-(void)_handleAccountStatus:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCloudDataDeletedNotificationHandler:(id)arg1 ;
-(void)setCloudMetadataDeletedNotificationHandler:(id)arg1 ;
-(void)setControllerKeyAvailableNotificationHandler:(id)arg1 ;
-(void)setDataDecryptionFailedHandler:(id)arg1 ;
-(void)setAccountActiveUpdateHandler:(id)arg1 ;
-(void)_fetchLegacyTransaction:(id)arg1 forceFetch:(BOOL)arg2 accountCompletionHandler:(/*^block*/id)arg3 dataCompletionHandler:(/*^block*/id)arg4 ;
-(id)cloudMetadataDeletedNotificationHandler;
-(void)_forceCleanCloud:(BOOL)arg1 fetchTransaction:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_resetHomeDataRecordState;
-(void)_startControllerKeyPollTimer;
-(BOOL)cloudHomeDataRecordExists;
-(BOOL)_processFetchedTransaction:(id)arg1 ;
-(void)_processFetchCompletedWithError:(id)arg1 serverToken:(id)arg2 fetchTransaction:(id)arg3 migrationOptions:(long long)arg4 completionHandler:(/*^block*/id)arg5 moreRecordsComing:(BOOL)arg6 emptyRecord:(BOOL)arg7 ;
-(void)setFirstV3FetchRun:(BOOL)arg1 ;
-(void)setFirstDBQueryRun:(BOOL)arg1 ;
-(BOOL)isFirstV3FetchRun;
-(NSObject*<OS_dispatch_source>)watchdogControllerKeyPollTimer;
-(NSMutableArray *)currentBackoffTimerValuesInMinutes;
-(void)setCurrentBackoffTimerValuesInMinutes:(NSMutableArray *)arg1 ;
-(void)_startControllerKeyPollTimerWithBackoff;
-(id)dataDecryptionFailedHandler;
-(void)_removeAllHomeZonesCompletionHandler:(/*^block*/id)arg1 ;
-(void)_verifyAndRemoveAllHomeZonesCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_validFetchRetryCKErrorCode:(long long)arg1 ;
-(void)_startFetchRetryTimer;
-(void)fetchCurrentAccountStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_createZoneAndFetchChanges:(/*^block*/id)arg1 ;
-(void)_registerForPushNotifications;
-(void)setAccountActive:(BOOL)arg1 ;
-(void)_stopFetchPollTimer;
-(void)_stopControllerKeyPollTimer;
-(void)setKeychainSyncEnabled:(BOOL)arg1 ;
-(void)_accountIsActive;
-(void)_verifyZonesExist:(id)arg1 zoneIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleKeychainSyncStateChanged:(BOOL)arg1 ;
-(void)_startFetchPollTimer;
-(void)fetchDatabaseZoneChanges;
-(id)accountActiveUpdateHandler;
-(id)cloudDataDeletedNotificationHandler;
-(void)__deleteRecordWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPollTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)pollTimer;
-(void)_handleControllerKeyAvailable;
-(id)controllerKeyAvailableNotificationHandler;
-(void)_stopWatchdogControllerKeyPollTimer;
-(void)setWatchdogControllerKeyPollTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_startControllerKeyPollTimerWithValue:(long long)arg1 ;
-(void)setControllerKeyPollTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)controllerKeyPollTimer;
-(void)_startWatchdogControllerKeyPollTimer;
-(void)_auditProxSetupNotification:(id)arg1 ;
-(void)__saveSubscription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__fetchSubscriptionWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchDatabaseZoneChangesCompletion:(/*^block*/id)arg1 ;
-(void)_scheduleZoneFetch:(id)arg1 ;
-(BOOL)isFirstDBQueryRun;
-(id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 delegate:(id)arg4 dataSource:(id)arg5 syncManager:(id)arg6 callbackQueue:(id)arg7 ;
-(BOOL)legacyZoneHasRecordsAvaliable;
-(void)addHomeZoneName:(id)arg1 owner:(id)arg2 ;
-(void)removeHomeZoneName:(id)arg1 ;
-(void)fetchTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeZonesTransactions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadLegacyTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetCloudCache:(/*^block*/id)arg1 ;
-(NSData *)serverTokenData;
-(void)setDataAvailableFromCloudCompletionBlock:(/*^block*/id)arg1 ;
-(void)setCloudDataDeletedNotificationBlock:(/*^block*/id)arg1 ;
-(void)setCloudMetadataDeletedNotificationBlock:(/*^block*/id)arg1 ;
-(void)setControllerKeyAvailableNotificationBlock:(/*^block*/id)arg1 ;
-(void)setDataDecryptionFailedCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAccountActiveUpdateCallback:(/*^block*/id)arg1 ;
-(void)fetchLegacyTransaction:(id)arg1 forceFetch:(BOOL)arg2 accountCompletionHandler:(/*^block*/id)arg3 dataCompletionHandler:(/*^block*/id)arg4 ;
-(void)updateAccountStatusChanged:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_changeTokenFromData:(id)arg1 ;
-(void)updateCloudDataSyncFilterState:(BOOL)arg1 ;
-(void)initializeServerTokenStatusOnCloudFilter;
-(void)cacheDatabaseServerToken;
-(void)setCloudCache:(HMDCloudCache *)arg1 ;
-(HMFMessageDispatcher *)configSyncDispatcher;
-(void)setConfigSyncDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)setCloudDataSyncStateFilter:(HMDCloudDataSyncStateFilter *)arg1 ;
@end

