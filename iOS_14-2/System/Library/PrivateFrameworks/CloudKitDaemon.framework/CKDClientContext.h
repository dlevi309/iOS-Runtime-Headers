/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/CKDContextInfoProvider.h>
#import <libobjc.A.dylib/CKDAccountAccessInfoProvider.h>
#import <libobjc.A.dylib/CKDContainerScopedUserIDProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class CKDServerConfiguration, CKDFlowControlManager, CKDPCSManager, CKDZoneGatekeeper, NSString, CKContainerID, CKDApplicationID, NSURL, NSHashTable, CKDAppContainerTuple, CKDAccount, CKAccountOverrideInfo, CKDMMCS, CKDPCSCache, NSMutableDictionary, NSObject, CKDCachePurger, CKDKeyValueDiskCache, CKDPublicIdentityLookupService, CKDAppContainerIntersectionMetadata, CKDApplicationMetadata;

@interface CKDClientContext : NSObject <CKDContextInfoProvider, CKDAccountAccessInfoProvider, CKDContainerScopedUserIDProvider> {

	BOOL _isForClouddInternalUse;
	BOOL _hasDataContainer;
	BOOL _captureResponseHTTPHeaders;
	BOOL _useZoneWidePCS;
	BOOL _returnPCSMetadata;
	BOOL _bypassPCSEncryption;
	BOOL _forceEnableReadOnlyManatee;
	BOOL _isSiloedContext;
	BOOL _hasExplicitCodeOperationURLEntitlement;
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
	NSString* _containerScopedUserID;
	NSString* _orgAdminUserID;
	NSHashTable* _proxies;
	long long _cachedEnvironment;
	CKContainerID* _containerID;
	NSString* _applicationBundleID;
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
@property (copy) NSString * containerScopedUserID;                                                                 //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (copy) NSString * orgAdminUserID;                                                                        //@synthesize orgAdminUserID=_orgAdminUserID - In the implementation block
@property (assign,nonatomic) BOOL isForClouddInternalUse;                                                          //@synthesize isForClouddInternalUse=_isForClouddInternalUse - In the implementation block
@property (assign) long long cachedEnvironment;                                                                    //@synthesize cachedEnvironment=_cachedEnvironment - In the implementation block
@property (nonatomic,readonly) CKContainerID * containerID;                                                        //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSString * personaID;                                                               //@synthesize personaID=_personaID - In the implementation block
@property (nonatomic,readonly) NSURL * applicationIcon;                                                            //@synthesize applicationIcon=_applicationIcon - In the implementation block
@property (nonatomic,readonly) NSString * applicationDisplayName;                                                  //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * applicationTemporaryDirectory;                                           //@synthesize applicationTemporaryDirectory=_applicationTemporaryDirectory - In the implementation block
@property (nonatomic,readonly) CKDAppContainerTuple * appContainerTuple;                                           //@synthesize appContainerTuple=_appContainerTuple - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForPush; 
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
@property (assign,nonatomic) BOOL hasExplicitCodeOperationURLEntitlement;                                          //@synthesize hasExplicitCodeOperationURLEntitlement=_hasExplicitCodeOperationURLEntitlement - In the implementation block
@property (nonatomic,readonly) CKDPCSCache * pcsCache;                                                             //@synthesize pcsCache=_pcsCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fakeErrorsByClassName;                                          //@synthesize fakeErrorsByClassName=_fakeErrorsByClassName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fakeResponseOperationLifetimeByClassName;                       //@synthesize fakeResponseOperationLifetimeByClassName=_fakeResponseOperationLifetimeByClassName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fakeResponseOperationResultByClassNameByItemID;                 //@synthesize fakeResponseOperationResultByClassNameByItemID=_fakeResponseOperationResultByClassNameByItemID - In the implementation block
@property (nonatomic,readonly) CKDApplicationID * applicationID; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSString * regionCode; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForContainerAccess; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForNetworkAttribution; 
@property (nonatomic,readonly) NSString * processName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 ;
+(id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4 ;
+(id)sharedContextForInternalUseWithAppContainerAccountTuple:(id)arg1 ;
+(id)applicationCachesPathForBundleID:(id)arg1 usingHomeCachesDirectory:(BOOL)arg2 ;
+(id)applicationCachesPathForBundleID:(id)arg1 ;
+(id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4 addToSharedContexts:(BOOL)arg5 ;
+(id)sharedContextForInternalUseWithAppContainerTuple:(id)arg1 unitTestingAccountInfoProvider:(id)arg2 ;
+(id)sharedContexts;
+(id)contextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 ;
+(id)applicationContainerPathForBundleID:(id)arg1 bundleURL:(id*)arg2 contextType:(long long*)arg3 ;
-(void)setContainerEncryptionServiceName:(NSString *)arg1 ;
-(CKDMMCS *)MMCS;
-(CKDApplicationID *)applicationID;
-(long long)contextType;
-(CKDServerConfiguration *)config;
-(BOOL)bypassPCSEncryption;
-(void)dropMMCS;
-(NSString *)regionCode;
-(CKDAccount *)account;
-(NSString *)applicationContainerPath;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
-(BOOL)hasOutOfProcessUIEntitlement;
-(void)clearPILSCacheForLookupInfos:(id)arg1 ;
-(BOOL)forceEnableReadOnlyManatee;
-(unsigned long long)mmcsEncryptionSupport;
-(NSURL *)publicDeviceServiceURL;
-(NSString *)deviceName;
-(void)setAppContainerIntersectionMetadata:(CKDAppContainerIntersectionMetadata *)arg1 ;
-(NSString *)containerEncryptionServiceName;
-(void)clearContextFromMetadataCache;
-(void)setAllowsPowerNapScheduling:(BOOL)arg1 ;
-(void)setFinishedAppProxySetup:(BOOL)arg1 ;
-(void)setCanSetDeviceIdentifier:(BOOL)arg1 ;
-(CKContainerID *)containerID;
-(void)setHasAllowUnverifiedAccountEntitlement:(BOOL)arg1 ;
-(void)setAccount:(CKDAccount *)arg1 ;
-(void)setClientSDKVersion:(unsigned)arg1 ;
-(void)setHasAllowSetEnvironmentEntitlement:(BOOL)arg1 ;
-(NSURL *)publicMetricsServiceURL;
-(BOOL)canAccessAccount;
-(CKDFlowControlManager *)flowControlManager;
-(void)setContextType:(long long)arg1 ;
-(NSString *)applicationBundleIdentifierForNetworkAttribution;
-(NSString *)applicationPackageStagingDirectory;
-(void)setProxies:(NSHashTable *)arg1 ;
-(id)assetDirectoryContext;
-(BOOL)returnPCSMetadata;
-(void)_reloadAccount:(BOOL)arg1 ;
-(NSMutableDictionary *)fakeResponseOperationResultByClassNameByItemID;
-(NSString *)applicationBundleIdentifierForContainerAccess;
-(void)setAssociatedApplicationBundleID:(NSString *)arg1 ;
-(void)_clearCaches;
-(void)setPublicCodeServiceURL:(NSURL *)arg1 ;
-(BOOL)useZoneWidePCS;
-(CKDKeyValueDiskCache *)publicIdentitiesDiskCache;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(void)setCachedEnvironment:(long long)arg1 ;
-(NSString *)processName;
-(NSHashTable *)proxies;
-(void)setPcsManager:(CKDPCSManager *)arg1 ;
-(void)setHasAllowAccessDuringBuddyEntitlement:(BOOL)arg1 ;
-(void)setEntitlementSpecifiedPCSServiceName:(NSString *)arg1 ;
-(BOOL)finishedProxySetup;
-(id)CKPropertiesDescription;
-(void)setHasMasqueradingEntitlement:(BOOL)arg1 ;
-(void)setWasInitializedWithProxy:(BOOL)arg1 ;
-(NSString *)applicationFileDownloadDirectory;
-(void)setOrgAdminUserID:(NSString *)arg1 ;
-(NSMutableDictionary *)fakeResponseOperationLifetimeByClassName;
-(double)publicIdentitiesExpirationTimeout;
-(BOOL)isForClouddInternalUse;
-(BOOL)finishedAppProxySetup;
-(BOOL)hasSystemServiceEntitlement;
-(void)setHasDisplaysSystemAcceptPromptEntitlement:(BOOL)arg1 ;
-(BOOL)_cloudKitEnabledForCurrentClient;
-(NSString *)languageCode;
-(NSString *)personaID;
-(BOOL)canAccessZoneProtectionData;
-(void)setHasParticipantPIIEntitlement:(BOOL)arg1 ;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(void)setAPSEnvironmentString:(id)arg1 ;
-(void)setApplicationPackageStagingDirectory:(NSString *)arg1 ;
-(NSString *)entitlementSpecifiedPCSServiceName;
-(void)tearDownAssetTransfers;
-(NSObject*<OS_dispatch_group>)proxyPreparationGroup;
-(id)createAppContainerTuple;
-(void)startSetupWithClientProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canAccessProtectionData;
-(void)performRequest:(id)arg1 ;
-(BOOL)hasMasqueradingEntitlement;
-(BOOL)_canBeReusedForAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 isSandboxed:(BOOL)arg3 internalUse:(BOOL)arg4 encryptionServiceName:(id)arg5 ignoreSandboxCheck:(BOOL)arg6 ;
-(void)setSandboxed:(BOOL)arg1 ;
-(void)setIsForClouddInternalUse:(BOOL)arg1 ;
-(BOOL)setupMMCSWrapperWithError:(id*)arg1 ;
-(void)_determineHardwareInfo;
-(BOOL)hasExplicitCodeOperationURLEntitlement;
-(unsigned long long)aggregatedOutstandingOperationCount;
-(void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setReturnPCSMetadata:(BOOL)arg1 ;
-(NSString *)hardwareID;
-(BOOL)hasAllowCustomAccountsEntitlement;
-(CKDPCSManager *)pcsManager;
-(NSString *)applicationTemporaryDirectory;
-(void)setCachePurger:(CKDCachePurger *)arg1 ;
-(CKDApplicationMetadata *)applicationMetadata;
-(id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2 ;
-(BOOL)_anyAssociatedProxyHasTCCAuthorization;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(NSString *)description;
-(unsigned)clientSDKVersion;
-(void)setForegroundPublicIdentityLookupService:(CKDPublicIdentityLookupService *)arg1 ;
-(NSURL *)publicCloudDBURL;
-(BOOL)canAuthWithCloudKit;
-(void)setFlowControlManager:(CKDFlowControlManager *)arg1 ;
-(void)setHasLightweightPCSEntitlement:(BOOL)arg1 ;
-(void)setForegroundZoneGatekeeper:(CKDZoneGatekeeper *)arg1 ;
-(BOOL)setupAssetTransfersWithClientProxy:(id)arg1 error:(id*)arg2 ;
-(void)setPublicIdentitiesDiskCache:(CKDKeyValueDiskCache *)arg1 ;
-(void)setHasNonLegacyShareURLEntitlement:(BOOL)arg1 ;
-(CKDPCSCache *)pcsCache;
-(void)setApplicationContainerPath:(NSString *)arg1 ;
-(unsigned long long)countAssetCacheItems;
-(void)setBackgroundPublicIdentityLookupService:(CKDPublicIdentityLookupService *)arg1 ;
-(long long)cachedEnvironment;
-(void)setCanAccessZoneProtectionData:(BOOL)arg1 ;
-(void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 ;
-(NSString *)contextID;
-(void)addClientProxy:(id)arg1 ;
-(void)setPublicDeviceServiceURL:(NSURL *)arg1 ;
-(CKDPublicIdentityLookupService *)foregroundPublicIdentityLookupService;
-(BOOL)hasDataContainer;
-(CKDZoneGatekeeper *)foregroundZoneGatekeeper;
-(NSString *)apsEnvironmentString;
-(NSURL *)applicationIcon;
-(BOOL)hasTCCAuthorization;
-(void)clearRecordCacheWithDatabaseScope:(long long)arg1 ;
-(BOOL)hasAllowSetEnvironmentEntitlement;
-(void)setApplicationMMCSDirectory:(NSString *)arg1 ;
-(BOOL)hasAccountAccessAndTCCAuth;
-(void)removeClientProxy:(id)arg1 ;
-(CKDCachePurger *)cachePurger;
-(NSObject*<OS_dispatch_queue>)setupQueue;
-(BOOL)allowsCellularAccess;
-(void)_loadApplicationContainerPathAndType;
-(NSString *)applicationFrameworkCachesDirectory;
-(id)deviceIDForOperation:(id)arg1 ;
-(void)setApplicationCachesDirectory:(NSString *)arg1 ;
-(void)setPublicCloudDBURL:(NSURL *)arg1 ;
-(void)setFakeResponseOperationLifetimeByClassName:(NSMutableDictionary *)arg1 ;
-(void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2 ;
-(void)setCanAccessProtectionData:(BOOL)arg1 ;
-(unsigned long long)countAssetCacheItemsWithDatabaseScope:(long long)arg1 ;
-(void)setApplicationRecordCacheDirectory:(NSString *)arg1 ;
-(BOOL)wasInitializedWithProxy;
-(NSString *)clientPrefixEntitlement;
-(void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(CKDZoneGatekeeper *)backgroundZoneGatekeeper;
-(void)setBackgroundZoneGatekeeper:(CKDZoneGatekeeper *)arg1 ;
-(NSURL *)publicShareServiceURL;
-(void)setHasExplicitCodeOperationURLEntitlement:(BOOL)arg1 ;
-(void)showUserNotification:(void*)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 ;
-(NSString *)applicationBundleIdentifierForPush;
-(void)setApplicationAssetDbDirectory:(NSString *)arg1 ;
-(NSString *)applicationVersion;
-(id)_issueSandboxExtensionForPath:(id)arg1 withAuditToken:(SCD_Struct_CK2)arg2 error:(id*)arg3 ;
-(void)showAssetCache;
-(void)setProxyPreparationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(BOOL)isSiloedContext;
-(void)setClientPrefixEntitlement:(NSString *)arg1 ;
-(void)setHasAllowCustomAccountsEntitlement:(BOOL)arg1 ;
-(BOOL)hasParticipantPIIEntitlement;
-(NSString *)applicationRecordCacheDirectory;
-(NSString *)applicationContainerCloudKitDirectory;
-(NSString *)applicationCachesDirectory;
-(BOOL)canSetDeviceIdentifier;
-(void)setApplicationFrameworkCachesDirectory:(NSString *)arg1 ;
-(void)setSetupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)applicationBundleIDForCacheDirectory;
-(void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 ;
-(void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)allowsPowerNapScheduling;
-(void)setConfig:(CKDServerConfiguration *)arg1 ;
-(void)setFinishedProxySetup:(BOOL)arg1 ;
-(void)setFakeErrorsByClassName:(NSMutableDictionary *)arg1 ;
-(BOOL)captureResponseHTTPHeaders;
-(NSString *)containerScopedUserID;
-(void)clearRecordCache;
-(void)setHasSystemServiceEntitlement:(BOOL)arg1 ;
-(NSString *)encryptionServiceName;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(void)setHasTCCAuthorization:(BOOL)arg1 ;
-(BOOL)hasDisplaysSystemAcceptPromptEntitlement;
-(BOOL)hasAllowUnverifiedAccountEntitlement;
-(BOOL)_setupDirectoriesWithClientProxy:(id)arg1 sandboxExtensions:(id*)arg2 error:(id*)arg3 ;
-(void)setPublicMetricsServiceURL:(NSURL *)arg1 ;
-(BOOL)shouldUsePCSEncryption;
-(NSString *)applicationBundleID;
-(void)_cancelAllLongLivedOperations;
-(CKDAppContainerIntersectionMetadata *)appContainerIntersectionMetadata;
-(void)clearAssetCacheWithDatabaseScope:(long long)arg1 ;
-(void)finishSetupWithClientProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)applicationDisplayName;
-(NSURL *)publicCodeServiceURL;
-(void)clearAssetCache;
-(void)setHasOutOfProcessUIEntitlement:(BOOL)arg1 ;
-(BOOL)canBeReusedForContext:(id)arg1 ignoreSandboxCheck:(BOOL)arg2 ;
-(void)setApplicationFileDownloadDirectory:(NSString *)arg1 ;
-(NSString *)associatedApplicationBundleID;
-(void)_fetchContainerInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)applicationFileStagingDirectory;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(void)setApplicationMetadata:(CKDApplicationMetadata *)arg1 ;
-(void)setHasDataContainer:(BOOL)arg1 ;
-(NSMutableDictionary *)fakeErrorsByClassName;
-(NSString *)orgAdminUserID;
-(CKDAppContainerTuple *)appContainerTuple;
-(BOOL)hasLightweightPCSEntitlement;
-(void)clearAuthTokensForRecordWithID:(id)arg1 databaseScope:(long long)arg2 ;
-(void)setApplicationFileStagingDirectory:(NSString *)arg1 ;
-(NSString *)applicationMMCSDirectory;
-(void)setPublicShareServiceURL:(NSURL *)arg1 ;
-(BOOL)hasNonLegacyShareURLEntitlement;
-(void)dealloc;
-(CKDPublicIdentityLookupService *)backgroundPublicIdentityLookupService;
-(void)setFakeResponseOperationResultByClassNameByItemID:(NSMutableDictionary *)arg1 ;
-(void)setApplicationContainerCloudKitDirectory:(NSString *)arg1 ;
-(NSString *)applicationAssetDbDirectory;
-(BOOL)isSandboxed;
-(void)showAssetCacheWithDatabaseScope:(long long)arg1 ;
@end

