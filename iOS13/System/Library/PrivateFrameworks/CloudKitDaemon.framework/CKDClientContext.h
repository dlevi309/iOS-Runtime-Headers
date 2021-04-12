/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/CKDContextInfoProvider.h>
#import <libobjc.A.dylib/CKDAccountAccessInfoProvider.h>
#import <libobjc.A.dylib/CKDContainerScopedUserIDProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class CKDServerConfiguration, CKDFlowControlManager, CKDPCSManager, CKDZoneGatekeeper, NSString, CKContainerID, NSURL, NSHashTable, CKDAppContainerTuple, CKDAccount, CKAccountOverrideInfo, CKDMMCS, CKDPCSCache, NSMutableDictionary, NSObject, CKDCachePurger, CKDKeyValueDiskCache, CKDPublicIdentityLookupService, CKDAppContainerIntersectionMetadata, CKDApplicationMetadata;

@interface CKDClientContext : NSObject <CKDContextInfoProvider, CKDAccountAccessInfoProvider, CKDContainerScopedUserIDProvider> {

	BOOL _isForClouddInternalUse;
	BOOL _hasDataContainer;
	BOOL _captureResponseHTTPHeaders;
	BOOL _useZoneWidePCS;
	BOOL _returnPCSMetadata;
	BOOL _bypassPCSEncryption;
	BOOL _forceEnableReadOnlyManatee;
	BOOL _isSiloedContext;
	BOOL _sandboxed;
	BOOL _finishedAppProxySetup;
	BOOL _finishedProxySetup;
	BOOL _wasInitializedWithProxy;
	unsigned _clientSDKVersion;
	CKDServerConfiguration* _config;
	NSURL* _publicCloudDBURL;
	NSURL* _publicShareServiceURL;
	NSURL* _publicDeviceServiceURL;
	NSURL* _publicCodeServiceURL;
	NSURL* _publicMetricsServiceURL;
	NSURL* _publicDatabaseRPCServiceURL;
	NSString* _containerScopedUserID;
	NSString* _orgAdminUserID;
	NSHashTable* _proxies;
	long long _cachedEnvironment;
	CKContainerID* _containerID;
	NSString* _applicationBundleID;
	NSString* _sourceApplicationBundleID;
	NSString* _personaID;
	NSString* _applicationVersion;
	NSURL* _applicationIcon;
	NSString* _applicationDisplayName;
	NSString* _applicationContainerPath;
	NSString* _applicationContainerCloudKitDirectory;
	NSString* _applicationCachesDirectory;
	NSString* _applicationTemporaryDirectory;
	NSString* _applicationMMCSDirectory;
	NSString* _applicationAssetDbDirectory;
	NSString* _applicationFileStagingDirectory;
	NSString* _applicationFileDownloadDirectory;
	NSString* _applicationRecordCacheDirectory;
	NSString* _applicationFrameworkCachesDirectory;
	NSString* _applicationPackageStagingDirectory;
	CKDAppContainerTuple* _appContainerTuple;
	NSString* _hardwareID;
	long long _contextType;
	CKDAccount* _account;
	CKAccountOverrideInfo* _accountInfoOverride;
	CKDMMCS* _MMCS;
	CKDPCSCache* _pcsCache;
	CKDZoneGatekeeper* _foregroundZoneGatekeeper;
	CKDZoneGatekeeper* _backgroundZoneGatekeeper;
	NSMutableDictionary* _fakeErrorsByClassName;
	NSMutableDictionary* _fakeResponseOperationLifetimeByClassName;
	NSMutableDictionary* _fakeResponseOperationResultByClassNameByItemID;
	NSObject*<OS_dispatch_queue> _setupQueue;
	NSString* _contextID;
	CKDCachePurger* _cachePurger;
	NSString* _containerEncryptionServiceName;
	NSString* _entitlementSpecifiedPCSServiceName;
	CKDKeyValueDiskCache* _publicIdentitiesDiskCache;
	CKDPublicIdentityLookupService* _foregroundPublicIdentityLookupService;
	CKDPublicIdentityLookupService* _backgroundPublicIdentityLookupService;
	CKDAppContainerIntersectionMetadata* _appContainerIntersectionMetadata;
	CKDApplicationMetadata* _applicationMetadata;
	CKDFlowControlManager* _flowControlManager;
	CKDPCSManager* _pcsManager;
	unsigned long long _mmcsEncryptionSupport;
	NSObject*<OS_dispatch_group> _proxyPreparationGroup;

}

@property (retain) CKDAccount * account;                                                                           //@synthesize account=_account - In the implementation block
@property (retain) CKDMMCS * MMCS;                                                                                 //@synthesize MMCS=_MMCS - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> setupQueue;                                              //@synthesize setupQueue=_setupQueue - In the implementation block
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed;                                                    //@synthesize sandboxed=_sandboxed - In the implementation block
@property (assign,nonatomic) BOOL finishedAppProxySetup;                                                           //@synthesize finishedAppProxySetup=_finishedAppProxySetup - In the implementation block
@property (assign,nonatomic) BOOL finishedProxySetup;                                                              //@synthesize finishedProxySetup=_finishedProxySetup - In the implementation block
@property (nonatomic,readonly) NSString * contextID;                                                               //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,retain) CKDZoneGatekeeper * foregroundZoneGatekeeper;                                         //@synthesize foregroundZoneGatekeeper=_foregroundZoneGatekeeper - In the implementation block
@property (nonatomic,retain) CKDZoneGatekeeper * backgroundZoneGatekeeper;                                         //@synthesize backgroundZoneGatekeeper=_backgroundZoneGatekeeper - In the implementation block
@property (nonatomic,retain) CKDCachePurger * cachePurger;                                                         //@synthesize cachePurger=_cachePurger - In the implementation block
@property (nonatomic,retain) NSString * applicationContainerPath;                                                  //@synthesize applicationContainerPath=_applicationContainerPath - In the implementation block
@property (nonatomic,retain) NSString * applicationContainerCloudKitDirectory;                                     //@synthesize applicationContainerCloudKitDirectory=_applicationContainerCloudKitDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationCachesDirectory;                                                //@synthesize applicationCachesDirectory=_applicationCachesDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationMMCSDirectory;                                                  //@synthesize applicationMMCSDirectory=_applicationMMCSDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationAssetDbDirectory;                                               //@synthesize applicationAssetDbDirectory=_applicationAssetDbDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationFileStagingDirectory;                                           //@synthesize applicationFileStagingDirectory=_applicationFileStagingDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationFileDownloadDirectory;                                          //@synthesize applicationFileDownloadDirectory=_applicationFileDownloadDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationRecordCacheDirectory;                                           //@synthesize applicationRecordCacheDirectory=_applicationRecordCacheDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationFrameworkCachesDirectory;                                       //@synthesize applicationFrameworkCachesDirectory=_applicationFrameworkCachesDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationPackageStagingDirectory;                                        //@synthesize applicationPackageStagingDirectory=_applicationPackageStagingDirectory - In the implementation block
@property (assign,nonatomic) BOOL wasInitializedWithProxy;                                                         //@synthesize wasInitializedWithProxy=_wasInitializedWithProxy - In the implementation block
@property (nonatomic,retain) NSString * containerEncryptionServiceName;                                            //@synthesize containerEncryptionServiceName=_containerEncryptionServiceName - In the implementation block
@property (nonatomic,retain) NSString * entitlementSpecifiedPCSServiceName;                                        //@synthesize entitlementSpecifiedPCSServiceName=_entitlementSpecifiedPCSServiceName - In the implementation block
@property (nonatomic,retain) CKDKeyValueDiskCache * publicIdentitiesDiskCache;                                     //@synthesize publicIdentitiesDiskCache=_publicIdentitiesDiskCache - In the implementation block
@property (nonatomic,retain) CKDPublicIdentityLookupService * foregroundPublicIdentityLookupService;               //@synthesize foregroundPublicIdentityLookupService=_foregroundPublicIdentityLookupService - In the implementation block
@property (nonatomic,retain) CKDPublicIdentityLookupService * backgroundPublicIdentityLookupService;               //@synthesize backgroundPublicIdentityLookupService=_backgroundPublicIdentityLookupService - In the implementation block
@property (nonatomic,retain) CKDAppContainerIntersectionMetadata * appContainerIntersectionMetadata;               //@synthesize appContainerIntersectionMetadata=_appContainerIntersectionMetadata - In the implementation block
@property (nonatomic,retain) CKDApplicationMetadata * applicationMetadata;                                         //@synthesize applicationMetadata=_applicationMetadata - In the implementation block
@property (nonatomic,retain) CKDFlowControlManager * flowControlManager;                                           //@synthesize flowControlManager=_flowControlManager - In the implementation block
@property (nonatomic,retain) NSString * applicationVersion;                                                        //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,retain) CKDPCSManager * pcsManager;                                                           //@synthesize pcsManager=_pcsManager - In the implementation block
@property (nonatomic,retain) NSHashTable * proxies;                                                                //@synthesize proxies=_proxies - In the implementation block
@property (nonatomic,readonly) unsigned long long mmcsEncryptionSupport;                                           //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                                                       //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * associatedApplicationBundleID; 
@property (assign,nonatomic) BOOL hasMasqueradingEntitlement; 
@property (assign,nonatomic) BOOL hasAllowSetEnvironmentEntitlement; 
@property (assign,nonatomic) BOOL hasAllowCustomAccountsEntitlement; 
@property (nonatomic,retain) NSString * clientPrefixEntitlement; 
@property (assign,nonatomic) BOOL hasTCCAuthorization; 
@property (assign,nonatomic) long long contextType;                                                                //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> proxyPreparationGroup;                                   //@synthesize proxyPreparationGroup=_proxyPreparationGroup - In the implementation block
@property (nonatomic,retain) CKDServerConfiguration * config;                                                      //@synthesize config=_config - In the implementation block
@property (copy) NSURL * publicCloudDBURL;                                                                         //@synthesize publicCloudDBURL=_publicCloudDBURL - In the implementation block
@property (copy) NSURL * publicShareServiceURL;                                                                    //@synthesize publicShareServiceURL=_publicShareServiceURL - In the implementation block
@property (copy) NSURL * publicDeviceServiceURL;                                                                   //@synthesize publicDeviceServiceURL=_publicDeviceServiceURL - In the implementation block
@property (copy) NSURL * publicCodeServiceURL;                                                                     //@synthesize publicCodeServiceURL=_publicCodeServiceURL - In the implementation block
@property (copy) NSURL * publicMetricsServiceURL;                                                                  //@synthesize publicMetricsServiceURL=_publicMetricsServiceURL - In the implementation block
@property (copy) NSURL * publicDatabaseRPCServiceURL;                                                              //@synthesize publicDatabaseRPCServiceURL=_publicDatabaseRPCServiceURL - In the implementation block
@property (copy) NSString * containerScopedUserID;                                                                 //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (copy) NSString * orgAdminUserID;                                                                        //@synthesize orgAdminUserID=_orgAdminUserID - In the implementation block
@property (assign,nonatomic) BOOL isForClouddInternalUse;                                                          //@synthesize isForClouddInternalUse=_isForClouddInternalUse - In the implementation block
@property (assign) long long cachedEnvironment;                                                                    //@synthesize cachedEnvironment=_cachedEnvironment - In the implementation block
@property (nonatomic,readonly) CKContainerID * containerID;                                                        //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSString * sourceApplicationBundleID;                                               //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
@property (nonatomic,readonly) NSString * personaID;                                                               //@synthesize personaID=_personaID - In the implementation block
@property (nonatomic,readonly) NSURL * applicationIcon;                                                            //@synthesize applicationIcon=_applicationIcon - In the implementation block
@property (nonatomic,readonly) NSString * applicationDisplayName;                                                  //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * applicationTemporaryDirectory;                                           //@synthesize applicationTemporaryDirectory=_applicationTemporaryDirectory - In the implementation block
@property (nonatomic,readonly) CKDAppContainerTuple * appContainerTuple;                                           //@synthesize appContainerTuple=_appContainerTuple - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIDForPush; 
@property (nonatomic,readonly) NSString * applicationBundleIDForServer; 
@property (nonatomic,readonly) NSString * hardwareID;                                                              //@synthesize hardwareID=_hardwareID - In the implementation block
@property (setter=setAPSEnvironmentString:,nonatomic,retain) NSString * apsEnvironmentString; 
@property (nonatomic,readonly) CKAccountOverrideInfo * accountInfoOverride;                                        //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (nonatomic,readonly) BOOL canAccessAccount; 
@property (nonatomic,readonly) BOOL canAuthWithCloudKit; 
@property (nonatomic,readonly) BOOL allowsCellularAccess; 
@property (assign,nonatomic) BOOL hasDataContainer;                                                                //@synthesize hasDataContainer=_hasDataContainer - In the implementation block
@property (assign,nonatomic) BOOL canAccessProtectionData; 
@property (assign,nonatomic) BOOL canAccessZoneProtectionData; 
@property (assign,nonatomic) BOOL canSetDeviceIdentifier; 
@property (assign,setter=setHasSystemServiceEntitlement:,nonatomic) BOOL hasSystemServiceEntitlement; 
@property (assign,nonatomic) BOOL allowsPowerNapScheduling; 
@property (assign,nonatomic) BOOL hasAllowAccessDuringBuddyEntitlement; 
@property (assign,nonatomic) BOOL hasLightweightPCSEntitlement; 
@property (assign,nonatomic) BOOL captureResponseHTTPHeaders;                                                      //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasOutOfProcessUIEntitlement; 
@property (assign,nonatomic) BOOL hasParticipantPIIEntitlement; 
@property (assign,nonatomic) BOOL hasDisplaysSystemAcceptPromptEntitlement; 
@property (nonatomic,readonly) BOOL useZoneWidePCS;                                                                //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (assign,nonatomic) BOOL returnPCSMetadata;                                                               //@synthesize returnPCSMetadata=_returnPCSMetadata - In the implementation block
@property (nonatomic,readonly) NSString * encryptionServiceName; 
@property (nonatomic,readonly) BOOL bypassPCSEncryption;                                                           //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (nonatomic,readonly) BOOL forceEnableReadOnlyManatee;                                                    //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (assign,nonatomic) unsigned clientSDKVersion;                                                            //@synthesize clientSDKVersion=_clientSDKVersion - In the implementation block
@property (nonatomic,readonly) BOOL isSiloedContext;                                                               //@synthesize isSiloedContext=_isSiloedContext - In the implementation block
@property (assign,nonatomic) BOOL hasNonLegacyShareURLEntitlement; 
@property (assign,nonatomic) BOOL hasAllowUnverifiedAccountEntitlement; 
@property (assign,nonatomic) BOOL hasExplicitCodeOperationURLEntitlement; 
@property (nonatomic,readonly) CKDPCSCache * pcsCache;                                                             //@synthesize pcsCache=_pcsCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fakeErrorsByClassName;                                          //@synthesize fakeErrorsByClassName=_fakeErrorsByClassName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fakeResponseOperationLifetimeByClassName;                       //@synthesize fakeResponseOperationLifetimeByClassName=_fakeResponseOperationLifetimeByClassName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fakeResponseOperationResultByClassNameByItemID;                 //@synthesize fakeResponseOperationResultByClassNameByItemID=_fakeResponseOperationResultByClassNameByItemID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSString * regionCode; 
@property (nonatomic,readonly) NSString * processName; 
+(id)contextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 ;
+(id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 ;
+(id)applicationContainerPathForBundleID:(id)arg1 bundleURL:(id*)arg2 contextType:(long long*)arg3 ;
+(id)applicationCachesPathForBundleID:(id)arg1 ;
+(id)sharedContexts;
+(id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4 ;
+(id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4 addToSharedContexts:(BOOL)arg5 ;
+(id)applicationCachesPathForBundleID:(id)arg1 usingHomeCachesDirectory:(BOOL)arg2 ;
+(id)sharedContextForInternalUseWithAppContainerAccountTuple:(id)arg1 ;
+(id)sharedContextForInternalUseWithAppContainerTuple:(id)arg1 unitTestingAccountInfoProvider:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)languageCode;
-(NSString *)processName;
-(CKDServerConfiguration *)config;
-(NSHashTable *)proxies;
-(NSString *)contextID;
-(void)setConfig:(CKDServerConfiguration *)arg1 ;
-(CKDAccount *)account;
-(void)setAccount:(CKDAccount *)arg1 ;
-(NSString *)deviceName;
-(NSString *)personaID;
-(NSString *)applicationBundleID;
-(BOOL)allowsCellularAccess;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(NSString *)regionCode;
-(CKContainerID *)containerID;
-(long long)contextType;
-(void)setContextType:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(void)showUserNotification:(void*)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)returnPCSMetadata;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(BOOL)captureResponseHTTPHeaders;
-(BOOL)useZoneWidePCS;
-(unsigned long long)mmcsEncryptionSupport;
-(NSString *)containerEncryptionServiceName;
-(BOOL)bypassPCSEncryption;
-(BOOL)forceEnableReadOnlyManatee;
-(unsigned)clientSDKVersion;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(void)setReturnPCSMetadata:(BOOL)arg1 ;
-(void)setContainerEncryptionServiceName:(NSString *)arg1 ;
-(void)setClientSDKVersion:(unsigned)arg1 ;
-(NSString *)encryptionServiceName;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
-(void)setOrgAdminUserID:(NSString *)arg1 ;
-(void)clearContextFromMetadataCache;
-(void)clearPILSCacheForLookupInfos:(id)arg1 ;
-(CKDFlowControlManager *)flowControlManager;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 ;
-(void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 ;
-(NSString *)containerScopedUserID;
-(NSString *)orgAdminUserID;
-(void)setFlowControlManager:(CKDFlowControlManager *)arg1 ;
-(double)publicIdentitiesExpirationTimeout;
-(void)clearAssetCache;
-(unsigned long long)countAssetCacheItems;
-(void)showAssetCache;
-(void)clearRecordCache;
-(NSString *)sourceApplicationBundleID;
-(NSString *)applicationVersion;
-(void)_clearCaches;
-(BOOL)isSandboxed;
-(NSURL *)applicationIcon;
-(void)setSandboxed:(BOOL)arg1 ;
-(void)performRequest:(id)arg1 ;
-(NSString *)applicationDisplayName;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(NSString *)applicationPackageStagingDirectory;
-(BOOL)canAccessProtectionData;
-(BOOL)hasOutOfProcessUIEntitlement;
-(BOOL)hasParticipantPIIEntitlement;
-(NSString *)applicationContainerCloudKitDirectory;
-(NSString *)applicationRecordCacheDirectory;
-(CKDPCSManager *)pcsManager;
-(CKDPCSCache *)pcsCache;
-(long long)cachedEnvironment;
-(void)addClientProxy:(id)arg1 ;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(void)tearDownAssetTransfers;
-(NSObject*<OS_dispatch_queue>)setupQueue;
-(void)removeClientProxy:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)proxyPreparationGroup;
-(NSString *)associatedApplicationBundleID;
-(BOOL)hasMasqueradingEntitlement;
-(id)createAppContainerTuple;
-(BOOL)hasAccountAccessAndTCCAuth;
-(void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2 ;
-(BOOL)canAuthWithCloudKit;
-(void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)hardwareID;
-(void)startSetupWithClientProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishSetupWithClientProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)applicationFrameworkCachesDirectory;
-(unsigned long long)countAssetCacheItemsWithDatabaseScope:(long long)arg1 ;
-(void)showAssetCacheWithDatabaseScope:(long long)arg1 ;
-(void)clearAssetCacheWithDatabaseScope:(long long)arg1 ;
-(void)clearRecordCacheWithDatabaseScope:(long long)arg1 ;
-(void)clearAuthTokensForRecordWithID:(id)arg1 databaseScope:(long long)arg2 ;
-(unsigned long long)aggregatedOutstandingOperationCount;
-(CKDZoneGatekeeper *)foregroundZoneGatekeeper;
-(CKDZoneGatekeeper *)backgroundZoneGatekeeper;
-(CKDMMCS *)MMCS;
-(BOOL)hasTCCAuthorization;
-(BOOL)hasLightweightPCSEntitlement;
-(BOOL)hasDisplaysSystemAcceptPromptEntitlement;
-(BOOL)hasNonLegacyShareURLEntitlement;
-(BOOL)hasAllowUnverifiedAccountEntitlement;
-(BOOL)hasExplicitCodeOperationURLEntitlement;
-(NSString *)applicationBundleIDForPush;
-(void)setSetupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_reloadAccount:(BOOL)arg1 ;
-(void)_loadApplicationContainerPathAndType;
-(void)_determineHardwareInfo;
-(NSString *)applicationContainerPath;
-(NSString *)applicationCachesDirectory;
-(NSString *)applicationTemporaryDirectory;
-(NSString *)applicationMMCSDirectory;
-(NSString *)applicationAssetDbDirectory;
-(NSString *)applicationFileStagingDirectory;
-(NSString *)applicationFileDownloadDirectory;
-(void)dropMMCS;
-(BOOL)isForClouddInternalUse;
-(void)_cancelAllLongLivedOperations;
-(void)setIsForClouddInternalUse:(BOOL)arg1 ;
-(CKDAppContainerTuple *)appContainerTuple;
-(void)setCachedEnvironment:(long long)arg1 ;
-(BOOL)shouldUsePCSEncryption;
-(BOOL)hasSystemServiceEntitlement;
-(id)_dataclassNameForContainerIdentifier:(id)arg1 ;
-(BOOL)_cloudKitEnabledForCurrentClient;
-(BOOL)_anyAssociatedProxyHasTCCAuthorization;
-(BOOL)hasDataContainer;
-(id)_issueSandboxExtensionForPath:(id)arg1 withAuditToken:(SCD_Struct_CK2)arg2 error:(id*)arg3 ;
-(id)initWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 ;
-(id)assetDirectoryContext;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(BOOL)_setupDirectoriesWithClientProxy:(id)arg1 sandboxExtensions:(id*)arg2 error:(id*)arg3 ;
-(BOOL)setupMMCSWrapperWithError:(id*)arg1 ;
-(NSMutableDictionary *)fakeErrorsByClassName;
-(NSMutableDictionary *)fakeResponseOperationResultByClassNameByItemID;
-(NSMutableDictionary *)fakeResponseOperationLifetimeByClassName;
-(void)setFinishedAppProxySetup:(BOOL)arg1 ;
-(void)setFinishedProxySetup:(BOOL)arg1 ;
-(BOOL)finishedAppProxySetup;
-(void)setAPSEnvironmentString:(id)arg1 ;
-(BOOL)finishedProxySetup;
-(CKDApplicationMetadata *)applicationMetadata;
-(CKDAppContainerIntersectionMetadata *)appContainerIntersectionMetadata;
-(void)setAssociatedApplicationBundleID:(NSString *)arg1 ;
-(void)setHasTCCAuthorization:(BOOL)arg1 ;
-(void)setCanAccessProtectionData:(BOOL)arg1 ;
-(void)setCanAccessZoneProtectionData:(BOOL)arg1 ;
-(void)setCanSetDeviceIdentifier:(BOOL)arg1 ;
-(void)setAllowsPowerNapScheduling:(BOOL)arg1 ;
-(void)setApplicationContainerPath:(NSString *)arg1 ;
-(void)setEntitlementSpecifiedPCSServiceName:(NSString *)arg1 ;
-(NSString *)entitlementSpecifiedPCSServiceName;
-(id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2 ;
-(NSURL *)publicCloudDBURL;
-(NSURL *)publicShareServiceURL;
-(NSURL *)publicDeviceServiceURL;
-(NSURL *)publicCodeServiceURL;
-(NSURL *)publicMetricsServiceURL;
-(NSURL *)publicDatabaseRPCServiceURL;
-(void)setPublicCloudDBURL:(NSURL *)arg1 ;
-(void)setPublicShareServiceURL:(NSURL *)arg1 ;
-(void)setPublicDeviceServiceURL:(NSURL *)arg1 ;
-(void)setPublicCodeServiceURL:(NSURL *)arg1 ;
-(void)setPublicMetricsServiceURL:(NSURL *)arg1 ;
-(void)setPublicDatabaseRPCServiceURL:(NSURL *)arg1 ;
-(void)_fetchContainerInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)allowsPowerNapScheduling;
-(NSString *)apsEnvironmentString;
-(BOOL)canAccessZoneProtectionData;
-(BOOL)canSetDeviceIdentifier;
-(BOOL)wasInitializedWithProxy;
-(void)setFakeErrorsByClassName:(NSMutableDictionary *)arg1 ;
-(void)setFakeResponseOperationResultByClassNameByItemID:(NSMutableDictionary *)arg1 ;
-(void)setFakeResponseOperationLifetimeByClassName:(NSMutableDictionary *)arg1 ;
-(BOOL)setupAssetTransfersWithClientProxy:(id)arg1 error:(id*)arg2 ;
-(CKDPublicIdentityLookupService *)backgroundPublicIdentityLookupService;
-(CKDPublicIdentityLookupService *)foregroundPublicIdentityLookupService;
-(id)deviceIDForOperation:(id)arg1 ;
-(void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)applicationBundleIDForServer;
-(BOOL)canAccessAccount;
-(void)setHasSystemServiceEntitlement:(BOOL)arg1 ;
-(void)setHasMasqueradingEntitlement:(BOOL)arg1 ;
-(BOOL)hasAllowSetEnvironmentEntitlement;
-(void)setHasAllowSetEnvironmentEntitlement:(BOOL)arg1 ;
-(BOOL)hasAllowCustomAccountsEntitlement;
-(void)setHasAllowCustomAccountsEntitlement:(BOOL)arg1 ;
-(void)setHasAllowAccessDuringBuddyEntitlement:(BOOL)arg1 ;
-(void)setHasLightweightPCSEntitlement:(BOOL)arg1 ;
-(void)setHasOutOfProcessUIEntitlement:(BOOL)arg1 ;
-(void)setHasParticipantPIIEntitlement:(BOOL)arg1 ;
-(void)setHasDisplaysSystemAcceptPromptEntitlement:(BOOL)arg1 ;
-(NSString *)clientPrefixEntitlement;
-(void)setClientPrefixEntitlement:(NSString *)arg1 ;
-(CKDKeyValueDiskCache *)publicIdentitiesDiskCache;
-(void)setHasNonLegacyShareURLEntitlement:(BOOL)arg1 ;
-(void)setHasAllowUnverifiedAccountEntitlement:(BOOL)arg1 ;
-(void)setHasExplicitCodeOperationURLEntitlement:(BOOL)arg1 ;
-(void)setProxies:(NSHashTable *)arg1 ;
-(void)setApplicationContainerCloudKitDirectory:(NSString *)arg1 ;
-(void)setApplicationCachesDirectory:(NSString *)arg1 ;
-(void)setApplicationMMCSDirectory:(NSString *)arg1 ;
-(void)setApplicationAssetDbDirectory:(NSString *)arg1 ;
-(void)setApplicationFileStagingDirectory:(NSString *)arg1 ;
-(void)setApplicationFileDownloadDirectory:(NSString *)arg1 ;
-(void)setApplicationRecordCacheDirectory:(NSString *)arg1 ;
-(void)setApplicationFrameworkCachesDirectory:(NSString *)arg1 ;
-(void)setApplicationPackageStagingDirectory:(NSString *)arg1 ;
-(void)setHasDataContainer:(BOOL)arg1 ;
-(BOOL)isSiloedContext;
-(void)setForegroundZoneGatekeeper:(CKDZoneGatekeeper *)arg1 ;
-(void)setBackgroundZoneGatekeeper:(CKDZoneGatekeeper *)arg1 ;
-(CKDCachePurger *)cachePurger;
-(void)setCachePurger:(CKDCachePurger *)arg1 ;
-(void)setWasInitializedWithProxy:(BOOL)arg1 ;
-(void)setPublicIdentitiesDiskCache:(CKDKeyValueDiskCache *)arg1 ;
-(void)setForegroundPublicIdentityLookupService:(CKDPublicIdentityLookupService *)arg1 ;
-(void)setBackgroundPublicIdentityLookupService:(CKDPublicIdentityLookupService *)arg1 ;
-(void)setAppContainerIntersectionMetadata:(CKDAppContainerIntersectionMetadata *)arg1 ;
-(void)setApplicationMetadata:(CKDApplicationMetadata *)arg1 ;
-(void)setPcsManager:(CKDPCSManager *)arg1 ;
-(void)setProxyPreparationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

