/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKDSystemAvailabilityWatcher.h>

@protocol OS_dispatch_queue, NSObject;
@class CKDClientContext, NSOperationQueue, NSString, NSObject, NSArray, NSMutableArray, NSMutableSet, NSDate, NSDictionary, NSMutableDictionary, CKDApplicationID, NSXPCConnection, CKDPCSFetchAggregator;

@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher> {

	CKDClientContext* _context;
	BOOL _sandboxed;
	BOOL _hasBeenThrottled;
	BOOL _canUsePackages;
	BOOL _canOpenByID;
	BOOL _holdAllOperations;
	BOOL _hasFakeEntitlements;
	int _pid;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _cleanupOperationQueue;
	NSString* _procName;
	NSObject*<OS_dispatch_queue> _setupQueue;
	NSObject*<OS_dispatch_queue> _cancellationQueue;
	NSObject*<OS_dispatch_queue> _statusQueue;
	NSOperationQueue* _cloudKitSupportOperationThrottleQueue;
	NSOperationQueue* _backgroundOperationThrottleQueue;
	NSArray* _cachedSandboxExtensions;
	NSMutableArray* _pendingContexts;
	NSMutableSet* _pendingOperationIDs;
	NSDate* _connectionDate;
	long long _hasTCCAuthorizationTernary;
	NSDictionary* _connectionEntitlements;
	long long _hasValidatedEntitlementsTernary;
	NSOperationQueue* _tccAuthOpQueue;
	NSObject*<OS_dispatch_queue> _tccAuthQueue;
	id<NSObject> _TCCDatabaseChangedNotificationObserver;
	NSMutableDictionary* _operationStatisticsByClassName;
	NSString* _cachedApplicationBundleID;
	CKDApplicationID* _applicationID;
	NSXPCConnection* _connection;
	CKDPCSFetchAggregator* _fetchAggregator;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> setupQueue;                               //@synthesize setupQueue=_setupQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cancellationQueue;                        //@synthesize cancellationQueue=_cancellationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statusQueue;                              //@synthesize statusQueue=_statusQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * cloudKitSupportOperationThrottleQueue;              //@synthesize cloudKitSupportOperationThrottleQueue=_cloudKitSupportOperationThrottleQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * backgroundOperationThrottleQueue;                   //@synthesize backgroundOperationThrottleQueue=_backgroundOperationThrottleQueue - In the implementation block
@property (nonatomic,retain) NSArray * cachedSandboxExtensions;                                     //@synthesize cachedSandboxExtensions=_cachedSandboxExtensions - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingContexts;                                      //@synthesize pendingContexts=_pendingContexts - In the implementation block
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed;                                     //@synthesize sandboxed=_sandboxed - In the implementation block
@property (assign,nonatomic) BOOL canUsePackages;                                                   //@synthesize canUsePackages=_canUsePackages - In the implementation block
@property (assign,nonatomic) BOOL canOpenByID;                                                      //@synthesize canOpenByID=_canOpenByID - In the implementation block
@property (assign,nonatomic) BOOL holdAllOperations;                                                //@synthesize holdAllOperations=_holdAllOperations - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingOperationIDs;                                    //@synthesize pendingOperationIDs=_pendingOperationIDs - In the implementation block
@property (nonatomic,retain) NSDate * connectionDate;                                               //@synthesize connectionDate=_connectionDate - In the implementation block
@property (assign,nonatomic) long long hasTCCAuthorizationTernary;                                  //@synthesize hasTCCAuthorizationTernary=_hasTCCAuthorizationTernary - In the implementation block
@property (nonatomic,retain) NSDictionary * connectionEntitlements;                                 //@synthesize connectionEntitlements=_connectionEntitlements - In the implementation block
@property (assign,nonatomic) BOOL hasFakeEntitlements;                                              //@synthesize hasFakeEntitlements=_hasFakeEntitlements - In the implementation block
@property (assign,nonatomic) long long hasValidatedEntitlementsTernary;                             //@synthesize hasValidatedEntitlementsTernary=_hasValidatedEntitlementsTernary - In the implementation block
@property (nonatomic,retain) NSOperationQueue * tccAuthOpQueue;                                     //@synthesize tccAuthOpQueue=_tccAuthOpQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> tccAuthQueue;                             //@synthesize tccAuthQueue=_tccAuthQueue - In the implementation block
@property (nonatomic,retain) id<NSObject> TCCDatabaseChangedNotificationObserver;                   //@synthesize TCCDatabaseChangedNotificationObserver=_TCCDatabaseChangedNotificationObserver - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * operationStatisticsByClassName;                  //@synthesize operationStatisticsByClassName=_operationStatisticsByClassName - In the implementation block
@property (nonatomic,retain) NSString * cachedApplicationBundleID;                                  //@synthesize cachedApplicationBundleID=_cachedApplicationBundleID - In the implementation block
@property (nonatomic,retain) CKDApplicationID * applicationID;                                      //@synthesize applicationID=_applicationID - In the implementation block
@property (assign,nonatomic,__weak) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned long long _outstandingOperationCount; 
@property (nonatomic,readonly) NSString * associatedApplicationBundleID; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForPush; 
@property (nonatomic,retain) CKDPCSFetchAggregator * fetchAggregator;                               //@synthesize fetchAggregator=_fetchAggregator - In the implementation block
@property (nonatomic,retain) CKDClientContext * context; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * cleanupOperationQueue;                              //@synthesize cleanupOperationQueue=_cleanupOperationQueue - In the implementation block
@property (nonatomic,readonly) int pid;                                                             //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * procName;                                                 //@synthesize procName=_procName - In the implementation block
@property (assign) BOOL hasBeenThrottled;                                                           //@synthesize hasBeenThrottled=_hasBeenThrottled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accountStatusWorkloop;
+(id)sharedClientThrottlingOperationQueue;
+(id)operationStatusReport:(id)arg1 ;
-(void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performFetchNotificationChangesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(CKDApplicationID *)applicationID;
-(NSMutableArray *)pendingContexts;
-(void)_dumpStatusReportArrayToOsTrace:(id)arg1 ;
-(void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performFetchShareMetadataOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)importantUserIDsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performFetchWebAuthTokenOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSOperationQueue *)backgroundOperationThrottleQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)tearDown;
-(BOOL)hasOutOfProcessUIEntitlement;
-(BOOL)_hasCustomAccountsEntitlement;
-(void)accountInfoWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performCodeFunctionInvokeOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)cancelOperationWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performDiscoverAllUserIdentitiesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)_hasEnvironmentEntitlement;
-(void)performFetchRecordChangesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_reallyPerformFetchRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performFetchRecordZonesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)forceFinishClientSetupWithClientContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performDiscoverUserIdentitiesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)submitClientEventMetric:(id)arg1 withSetupInfo:(id)arg2 completeWhenQueued:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)displayInfoOnAccountWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSOperationQueue *)operationQueue;
-(void)performFetchRecordZoneChangesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performFetchSubscriptionsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performModifyRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performAcceptSharesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)cancelAllOperations;
-(void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBackgroundOperationThrottleQueue:(NSOperationQueue *)arg1 ;
-(void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performQueryOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performFetchShareParticipantsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)tccAuthQueue;
-(void)performFetchRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performCodeOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performModifySubscriptionsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performModifyRecordZonesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performModifyBadgeOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performMarkNotificationsReadOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)performFetchDatabaseChangesOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSOperationQueue *)cloudKitSupportOperationThrottleQueue;
-(void)_setupOperationQueues;
-(int)pid;
-(long long)_accountStatusWithClientContext:(id)arg1 ;
-(id)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
-(id<NSObject>)TCCDatabaseChangedNotificationObserver;
-(id)initWithConnection:(id)arg1 ;
-(long long)_applicationPermissionStatusFromUserPrivacySetting:(long long)arg1 ;
-(void)setApplicationID:(CKDApplicationID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)cancellationQueue;
-(void)setCanUsePackages:(BOOL)arg1 ;
-(BOOL)_hasEntitlementForKey:(id)arg1 ;
-(long long)hasValidatedEntitlementsTernary;
-(BOOL)canOpenByID;
-(void)setCachedApplicationBundleID:(NSString *)arg1 ;
-(BOOL)hasCloudKitSystemServiceEntitlement;
-(id)apsEnvironmentEntitlement;
-(unsigned long long)_outstandingOperationCount;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(NSDictionary *)connectionEntitlements;
-(void)_lockedSetHasTCCAuthorizationTernary:(long long)arg1 ;
-(void)_performCodeFunctionInvokeOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)CKPropertiesDescription;
-(void)setHasTCCAuthorizationTernary:(long long)arg1 ;
-(void)setConnectionEntitlements:(NSDictionary *)arg1 ;
-(NSString *)procName;
-(void)setCancellationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTccAuthOpQueue:(NSOperationQueue *)arg1 ;
-(BOOL)isLongLived;
-(id)_locked_eligiblePendingContextForApplicationID:(id)arg1 ;
-(id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id*)arg3 ;
-(CKDClientContext *)context;
-(BOOL)hasProtectionDataEntitlement;
-(BOOL)hasMasqueradingEntitlement;
-(void)setSandboxed:(BOOL)arg1 ;
-(void)setHasBeenThrottled:(BOOL)arg1 ;
-(BOOL)hasExplicitCodeOperationURLEntitlement;
-(long long)hasTCCAuthorizationTernary;
-(void)_addOperationWithOperationInfo:(id)arg1 clientProvidedCallbackProxy:(id)arg2 factoryBlock:(/*^block*/id)arg3 ;
-(id)applicationIdentifier;
-(void)getTCCAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(void)setTCCDatabaseChangedNotificationObserver:(id<NSObject>)arg1 ;
-(void)setHasValidatedEntitlementsTernary:(long long)arg1 ;
-(BOOL)hasValidatedEntitlements;
-(void)setPendingContexts:(NSMutableArray *)arg1 ;
-(NSString *)description;
-(void)setStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_lockedHasTCCAuthorization;
-(void)setCloudKitSupportOperationThrottleQueue:(NSOperationQueue *)arg1 ;
-(NSXPCConnection *)connection;
-(void)_finishClientSetupWithClientContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTccAuthQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)cachedApplicationBundleID;
-(void)_performFetchCurrentUserRecordOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_globalStatusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasTCCAuthorization;
-(BOOL)hasDeviceIdentifierEntitlement;
-(void)setFetchAggregator:(CKDPCSFetchAggregator *)arg1 ;
-(void)_handleCompletionForOperation:(id)arg1 initialMessageReplyBlock:(/*^block*/id)arg2 customCompletionBlock:(/*^block*/id)arg3 ;
-(void)setCleanupOperationQueue:(NSOperationQueue *)arg1 ;
-(id)serviceNameForContainerIdentifierMapEntitlement;
-(NSObject*<OS_dispatch_queue>)setupQueue;
-(NSDate *)connectionDate;
-(BOOL)hasZoneProtectionDataEntitlement;
-(void)setClientProxyAvailable:(BOOL)arg1 ;
-(BOOL)canUsePackages;
-(void)addThrottle:(id)arg1 ;
-(NSMutableDictionary *)operationStatisticsByClassName;
-(BOOL)hasBeenThrottled;
-(CKDPCSFetchAggregator *)fetchAggregator;
-(void)handleSignificantIssueBehavior:(unsigned long long)arg1 reason:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)statusQueue;
-(BOOL)_isConnectionAuthorizedForOperation:(id)arg1 error:(id*)arg2 ;
-(id)_clientPrefixEntitlement;
-(id)codeServiceURLEntitlement;
-(BOOL)systemAvailabilityChanged:(unsigned long long)arg1 ;
-(void)resetThrottles;
-(void)_startClientSetupWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSOperationQueue *)cleanupOperationQueue;
-(NSOperationQueue *)tccAuthOpQueue;
-(id)openFileWithOpenInfo:(id)arg1 error:(id*)arg2 ;
-(void)setConnectionDate:(NSDate *)arg1 ;
-(NSString *)applicationBundleIdentifierForPush;
-(void)setHoldAllOperations:(BOOL)arg1 ;
-(BOOL)hasParticipantPIIEntitlement;
-(void)setSetupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCanOpenByID:(BOOL)arg1 ;
-(BOOL)hasCloudKitSupportServiceEntitlement;
-(id)callbackProxyForOperationInfo:(id)arg1 clientProvidedCallbackProxy:(id)arg2 ;
-(BOOL)hasDisplaysSystemAcceptPromptEntitlement;
-(void)setCachedSandboxExtensions:(NSArray *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)hasAllowUnverifiedAccountEntitlement;
-(BOOL)hasFakeEntitlements;
-(id)CKStatusReportArray;
-(id)applicationBundleID;
-(void)setHasFakeEntitlements:(BOOL)arg1 ;
-(void)_setupClientWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)canRunGivenAvailabilityState:(unsigned long long)arg1 ;
-(BOOL)holdAllOperations;
-(void)_handleCompletionForOperation:(id)arg1 initialMessageReplyBlock:(/*^block*/id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)canOpenFileAtURL:(id)arg1 ;
-(id)codeServiceURLByContainerAndServiceEntitlement;
-(id)CKStatusReportArrayIncludingSharedOperations:(BOOL)arg1 ;
-(void)setOperationStatisticsByClassName:(NSMutableDictionary *)arg1 ;
-(NSString *)associatedApplicationBundleID;
-(BOOL)canUsePackagesWithError:(id*)arg1 ;
-(BOOL)_updateConnectionEntitlementsWithFakeEntitlements:(id)arg1 ;
-(NSArray *)cachedSandboxExtensions;
-(BOOL)hasLightweightPCSEntitlement;
-(BOOL)hasNonLegacyShareURLEntitlement;
-(void)_setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSMutableSet *)pendingOperationIDs;
-(void)setPendingOperationIDs:(NSMutableSet *)arg1 ;
-(id)codeServiceURLByServiceEntitlement;
-(BOOL)isSandboxed;
-(void)forwardInvocation:(id)arg1 ;
-(void)setContext:(CKDClientContext *)arg1 ;
@end

