/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/CKXPCClient.h>
#import <libobjc.A.dylib/CKXPCDiscretionaryClient.h>

@protocol OS_dispatch_queue;
@class NSString, CKUploadRequestManager, CKContainerID, CKRecordID, CKContainerOptions, CKDatabase, NSXPCConnection, NSOperationQueue, CKOperationCallbackManager, CKOperationFlowControlManager, NSMutableArray, CKContainerSetupInfo, NSMapTable, NSMutableDictionary, NSNumber, NSObject, CKAccountOverrideInfo;

@interface CKContainer : NSObject <CKXPCClient, CKXPCDiscretionaryClient> {

	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	BOOL _holdAllOperations;
	BOOL _masqueradeAsThirdPartyApp;
	CKUploadRequestManager* _uploadRequestManager;
	BOOL _hasValidConnection;
	BOOL _hasValidDiscretionaryXPCConnection;
	BOOL _hasCachedSetupInfo;
	int _statusReportToken;
	int _killSwitchToken;
	int _identityUpdateToken;
	CKContainerID* _containerID;
	CKRecordID* _containerScopedUserID;
	CKRecordID* _orgAdminUserID;
	CKContainerOptions* _options;
	CKDatabase* _privateCloudDatabase;
	CKDatabase* _publicCloudDatabase;
	CKDatabase* _sharedCloudDatabase;
	CKDatabase* _organizationCloudDatabase;
	NSXPCConnection* _xpcConnection;
	NSXPCConnection* _discretionaryXPCConnection;
	NSOperationQueue* _convenienceOperationQueue;
	NSOperationQueue* _throttlingOperationQueue;
	NSOperationQueue* _backgroundThrottlingOperationQueue;
	NSOperationQueue* _discretionaryThrottlingOperationQueue;
	CKOperationCallbackManager* _callbackManager;
	CKOperationFlowControlManager* _flowControlManager;
	NSMutableArray* _sandboxExtensionHandles;
	CKContainerSetupInfo* _cachedSetupInfo;
	NSMapTable* _assetsByUUID;
	NSMutableDictionary* _fakeInstanceEntitlements;
	NSNumber* _fakeDeviceToDeviceEncryptionAvailability;
	unsigned long long _stateHandle;
	NSObject*<OS_dispatch_queue> _underlyingDispatchQueue;
	NSString* _personaIdentifier;

}

@property (nonatomic,readonly) NSString * primaryIdentifier; 
@property (nonatomic,readonly) CKUploadRequestManager * uploadRequestManager; 
@property (nonatomic,retain) CKContainerID * containerID;                                           //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) CKRecordID * containerScopedUserID;                                    //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (nonatomic,retain) CKRecordID * orgAdminUserID;                                           //@synthesize orgAdminUserID=_orgAdminUserID - In the implementation block
@property (nonatomic,retain) CKContainerOptions * options;                                          //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) CKDatabase * privateCloudDatabase;                                     //@synthesize privateCloudDatabase=_privateCloudDatabase - In the implementation block
@property (nonatomic,retain) CKDatabase * publicCloudDatabase;                                      //@synthesize publicCloudDatabase=_publicCloudDatabase - In the implementation block
@property (nonatomic,retain) CKDatabase * sharedCloudDatabase;                                      //@synthesize sharedCloudDatabase=_sharedCloudDatabase - In the implementation block
@property (nonatomic,retain) CKDatabase * organizationCloudDatabase;                                //@synthesize organizationCloudDatabase=_organizationCloudDatabase - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                       //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL hasValidConnection;                                               //@synthesize hasValidConnection=_hasValidConnection - In the implementation block
@property (nonatomic,retain) NSXPCConnection * discretionaryXPCConnection;                          //@synthesize discretionaryXPCConnection=_discretionaryXPCConnection - In the implementation block
@property (assign,nonatomic) BOOL hasValidDiscretionaryXPCConnection;                               //@synthesize hasValidDiscretionaryXPCConnection=_hasValidDiscretionaryXPCConnection - In the implementation block
@property (nonatomic,retain) NSOperationQueue * convenienceOperationQueue;                          //@synthesize convenienceOperationQueue=_convenienceOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * throttlingOperationQueue;                           //@synthesize throttlingOperationQueue=_throttlingOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * backgroundThrottlingOperationQueue;                 //@synthesize backgroundThrottlingOperationQueue=_backgroundThrottlingOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * discretionaryThrottlingOperationQueue;              //@synthesize discretionaryThrottlingOperationQueue=_discretionaryThrottlingOperationQueue - In the implementation block
@property (nonatomic,retain) CKOperationCallbackManager * callbackManager;                          //@synthesize callbackManager=_callbackManager - In the implementation block
@property (nonatomic,retain) CKOperationFlowControlManager * flowControlManager;                    //@synthesize flowControlManager=_flowControlManager - In the implementation block
@property (assign,nonatomic) int statusReportToken;                                                 //@synthesize statusReportToken=_statusReportToken - In the implementation block
@property (assign,nonatomic) int killSwitchToken;                                                   //@synthesize killSwitchToken=_killSwitchToken - In the implementation block
@property (assign,nonatomic) int identityUpdateToken;                                               //@synthesize identityUpdateToken=_identityUpdateToken - In the implementation block
@property (nonatomic,retain) NSMutableArray * sandboxExtensionHandles;                              //@synthesize sandboxExtensionHandles=_sandboxExtensionHandles - In the implementation block
@property (nonatomic,retain) CKContainerSetupInfo * cachedSetupInfo;                                //@synthesize cachedSetupInfo=_cachedSetupInfo - In the implementation block
@property (assign,nonatomic) BOOL hasCachedSetupInfo;                                               //@synthesize hasCachedSetupInfo=_hasCachedSetupInfo - In the implementation block
@property (nonatomic,retain) NSMapTable * assetsByUUID;                                             //@synthesize assetsByUUID=_assetsByUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fakeInstanceEntitlements;                        //@synthesize fakeInstanceEntitlements=_fakeInstanceEntitlements - In the implementation block
@property (nonatomic,retain) NSNumber * fakeDeviceToDeviceEncryptionAvailability;                   //@synthesize fakeDeviceToDeviceEncryptionAvailability=_fakeDeviceToDeviceEncryptionAvailability - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandle;                                        //@synthesize stateHandle=_stateHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> underlyingDispatchQueue;                  //@synthesize underlyingDispatchQueue=_underlyingDispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * personaIdentifier;                                            //@synthesize personaIdentifier=_personaIdentifier - In the implementation block
@property (assign,nonatomic) BOOL captureResponseHTTPHeaders; 
@property (assign,nonatomic) BOOL wantsSiloedContext; 
@property (nonatomic,copy) CKAccountOverrideInfo * accountInfoOverride; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerWithIdentifier:(id)arg1 ;
+(void)_checkSelfCloudServicesEntitlement;
+(id)sharedAccountStore;
+(id)accountChangeNotificationRegistrationQueue;
+(id)_checkSelfContainerIdentifier;
+(long long)_untrustedDatabaseEnvironment;
+(id)containerIDForContainerIdentifier:(id)arg1 environment:(long long)arg2 ;
+(id)containerIDForContainerIdentifier:(id)arg1 ;
+(id)sharedOutstandingOperations;
+(id)sharedCompletedLongLivedOperationIDs;
+(id)fakeClassEntitlements;
+(id)_untrustedEntitlementForKey:(id)arg1 ;
+(id)_untrustedApplicationBundleID;
+(void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)defaultContainer;
+(void)registerOutstandingOperationWithID:(id)arg1 ;
+(void)unregisterOutstandingOperationWithID:(id)arg1 ;
+(void)registerCompletedLongLivedOperationWithID:(id)arg1 ;
+(void)setFakeClassEntitlement:(id)arg1 forKey:(id)arg2 ;
+(void)clearFakeClassEntitlementForKey:(id)arg1 ;
+(id)uploadRequestFetchAllNotificationName;
-(void)dealloc;
-(NSString *)description;
-(CKContainerOptions *)options;
-(void)addOperation:(id)arg1 ;
-(void)setOptions:(CKContainerOptions *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSString *)containerIdentifier;
-(void)accountInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(CKDatabase *)privateCloudDatabase;
-(id)initWithContainerID:(id)arg1 options:(id)arg2 ;
-(void)submitEventMetric:(id)arg1 ;
-(NSString *)personaIdentifier;
-(CKContainerID *)containerID;
-(id)setupInfo;
-(void)fetchUserRecordIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)CKPropertiesDescription;
-(void)trackAssets:(id)arg1 ;
-(id)sourceApplicationBundleIdentifier;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(BOOL)captureResponseHTTPHeaders;
-(BOOL)wantsSiloedContext;
-(BOOL)holdAllOperations;
-(BOOL)masqueradeAsThirdPartyApp;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(id)arg1 ;
-(void)setAccountInfoOverride:(CKAccountOverrideInfo *)arg1 ;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(void)setWantsSiloedContext:(BOOL)arg1 ;
-(void)setHoldAllOperations:(BOOL)arg1 ;
-(void)setMasqueradeAsThirdPartyApp:(BOOL)arg1 ;
-(void)setPersonaIdentifier:(NSString *)arg1 ;
-(void)discretionarySuspensionForOperationID:(id)arg1 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)openFileWithOpenInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)consumeSandboxExtensions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 ;
-(id)_initWithContainerIdentifier:(id)arg1 ;
-(void)registerForAccountChangeNotifications;
-(void)setContainerScopedUserID:(CKRecordID *)arg1 ;
-(void)setOrgAdminUserID:(CKRecordID *)arg1 ;
-(id)CKStatusReportArray;
-(void)_setupWithContainerID:(id)arg1 options:(id)arg2 ;
-(id)_optionsFromContainerSetupInfo:(id)arg1 ;
-(NSXPCConnection *)discretionaryXPCConnection;
-(NSMutableArray *)sandboxExtensionHandles;
-(void)_cleanupSandboxExtensionHandles:(id)arg1 ;
-(unsigned long long)stateHandle;
-(void)unregisterForAccountChangeNotifications;
-(id)sourceApplicationSecondaryIdentifier;
-(id)_containerSetupInfoFromOptions:(id)arg1 ;
-(id)_resolvedFakeEntitlements;
-(NSMutableDictionary *)fakeInstanceEntitlements;
-(id)_untrustedEntitlementForKey:(id)arg1 ;
-(CKDatabase *)publicCloudDatabase;
-(CKDatabase *)sharedCloudDatabase;
-(CKDatabase *)organizationCloudDatabase;
-(void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)accountsWillDeleteAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountWithID:(id)arg1 changedWithChangeType:(long long)arg2 ;
-(void)wipeAllCachesAndDie;
-(void)clearContextFromMetadataCache;
-(void)clearPILSCacheForLookupInfos:(id)arg1 ;
-(void)updatePushTokens;
-(void)flushOperationMetricsToPowerLog;
-(void)triggerAutoBugCaptureSnapshot;
-(BOOL)hasValidConnection;
-(void)_prepareForDaemonLaunch;
-(void)setHasValidConnection:(BOOL)arg1 ;
-(CKOperationCallbackManager *)callbackManager;
-(CKOperationFlowControlManager *)flowControlManager;
-(id)_CKXPCInterface;
-(id)_CKXPCExportedInterface;
-(BOOL)hasValidDiscretionaryXPCConnection;
-(void)setDiscretionaryXPCConnection:(NSXPCConnection *)arg1 ;
-(void)setHasValidDiscretionaryXPCConnection:(BOOL)arg1 ;
-(id)daemonSynchronous:(BOOL)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(id)connectionWithError:(id*)arg1 ;
-(id)discretionaryXPCConnectionWithError:(id*)arg1 ;
-(id)findTrackedAssetByUUID:(id)arg1 ;
-(NSOperationQueue *)convenienceOperationQueue;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)serverPreferredPushEnvironmentSynchronous:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)discretionaryDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_submitEventMetric:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSOperationQueue *)throttlingOperationQueue;
-(NSMapTable *)assetsByUUID;
-(void)setAssetsByUUID:(NSMapTable *)arg1 ;
-(id)_allStatusReports;
-(id)_initWithContainerIdentifier:(id)arg1 environment:(long long)arg2 ;
-(id)initWithContainerSetupInfo:(id)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(id)initWithContainerID:(id)arg1 accountInfoOverride:(id)arg2 ;
-(id)databaseWithDatabaseScope:(long long)arg1 ;
-(id)synchronousDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_scheduleConvenienceOperation:(id)arg1 ;
-(void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resetAllApplicationPermissionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tossConfigWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)serverPreferredPushEnvironmentWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)serverPreferredPushEnvironmentWithError:(id*)arg1 ;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 ;
-(void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 ;
-(void)wipeAllCachedLongLivedProxiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearPCSCachesForKnownContextsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getOutstandingOperationCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchCurrentUserBoundaryKeyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queueDiscretionaryOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishDiscretionaryOperation:(id)arg1 ;
-(void)setFakeEntitlement:(id)arg1 forKey:(id)arg2 ;
-(void)setSourceApplicationSecondaryIdentifier:(id)arg1 ;
-(void)dataclassEnabled:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchServerEnvironment:(/*^block*/id)arg1 ;
-(void)fetchCurrentDeviceIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchFullNameAndPrimaryEmailOnAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchFullNameAndFormattedUsernameOfAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)submitEventMetric:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deviceCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchFrameworkCachesDirectoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dumpDaemonStatusReport;
-(CKRecordID *)containerScopedUserID;
-(CKRecordID *)orgAdminUserID;
-(void)setPrivateCloudDatabase:(CKDatabase *)arg1 ;
-(void)setPublicCloudDatabase:(CKDatabase *)arg1 ;
-(void)setSharedCloudDatabase:(CKDatabase *)arg1 ;
-(void)setOrganizationCloudDatabase:(CKDatabase *)arg1 ;
-(void)setConvenienceOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setThrottlingOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)backgroundThrottlingOperationQueue;
-(void)setBackgroundThrottlingOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)discretionaryThrottlingOperationQueue;
-(void)setDiscretionaryThrottlingOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setCallbackManager:(CKOperationCallbackManager *)arg1 ;
-(void)setFlowControlManager:(CKOperationFlowControlManager *)arg1 ;
-(int)statusReportToken;
-(void)setStatusReportToken:(int)arg1 ;
-(int)killSwitchToken;
-(void)setKillSwitchToken:(int)arg1 ;
-(int)identityUpdateToken;
-(void)setIdentityUpdateToken:(int)arg1 ;
-(void)setSandboxExtensionHandles:(NSMutableArray *)arg1 ;
-(CKContainerSetupInfo *)cachedSetupInfo;
-(void)setCachedSetupInfo:(CKContainerSetupInfo *)arg1 ;
-(BOOL)hasCachedSetupInfo;
-(void)setHasCachedSetupInfo:(BOOL)arg1 ;
-(void)setFakeInstanceEntitlements:(NSMutableDictionary *)arg1 ;
-(NSNumber *)fakeDeviceToDeviceEncryptionAvailability;
-(void)setFakeDeviceToDeviceEncryptionAvailability:(NSNumber *)arg1 ;
-(void)setStateHandle:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingDispatchQueue;
-(void)setUnderlyingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_importantUserRecordIDOfType:(long long)arg1 ;
-(void)_setImportantUserRecordID:(id)arg1 ofType:(long long)arg2 ;
-(void)_fetchImportantUserRecordIDOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_discoverUserIdentityWithLookupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchOrgAdminUserRecordIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)discoverAllIdentitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)discoverUserIdentityWithEmailAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)discoverUserIdentityWithPhoneNumber:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)discoverUserIdentityWithUserRecordID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)discoverAllContactUserInfosWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)discoverUserInfoWithEmailAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)discoverUserInfoWithUserRecordID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareParticipantWithLookupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareParticipantWithEmailAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareParticipantWithPhoneNumber:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareParticipantWithUserRecordID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareMetadataWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptShareMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)decryptPersonalInfoOnShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getNewWebSharingIdentity:(/*^block*/id)arg1 ;
-(void)getNewWebSharingIdentityDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchXPCCriteriaWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accountStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchLongLivedOperationsWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllLongLivedOperationIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchLongLivedOperationWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerForAssetUploadRequests:(/*^block*/id)arg1 machServiceName:(id)arg2 ;
-(CKUploadRequestManager *)uploadRequestManager;
-(void)registerForPackageUploadRequests:(/*^block*/id)arg1 machServiceName:(id)arg2 ;
-(void)manuallyTriggerUploadRequests;
-(void)registerForAssetUploadRequests:(/*^block*/id)arg1 ;
-(void)registerForPackageUploadRequests:(/*^block*/id)arg1 ;
-(void)unregisterFromUploadRequests;
-(void)unregisterFromUploadRequestsWithMachServiceName:(id)arg1 ;
-(void)cancelUploadRequests;
-(NSString *)primaryIdentifier;
-(void)registerForAssetRequests:(/*^block*/id)arg1 packageRequests:(/*^block*/id)arg2 machServiceName:(id)arg3 ;
@end

