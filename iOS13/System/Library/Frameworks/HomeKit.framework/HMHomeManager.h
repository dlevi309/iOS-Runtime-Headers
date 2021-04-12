/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>
#import <libobjc.A.dylib/HMApplicationData.h>

@protocol HMHomeManagerDelegate;
@class HMFUnfairLock, NSOperationQueue, HMHome, HMApplicationData, HMHomeManagerConfiguration, NSSet, HMUserCloudShareManager, HMMutableArray, NSNumber, NSString, NSUUID, _HMContext, HMNetworkRouterFirewallRuleManager, NSArray, HMAccessory;

@interface HMHomeManager : NSObject <HMFLogging, HMFMessageReceiver, HMMutableApplicationData, HMApplicationData> {

	HMFUnfairLock* _lock;
	NSOperationQueue* _syncOperationQueue;
	BOOL _frameworkMergeComplete;
	BOOL _thisDeviceResidentCapable;
	BOOL _residentEnabledForThisDevice;
	BOOL _accessAllowedWhenLocked;
	BOOL _mediaAccessoryControlRequested;
	BOOL _didUpdateHomes;
	BOOL _viewServiceActive;
	int _serverGenerationCounterToken;
	id<HMHomeManagerDelegate> _delegate;
	unsigned long long _authorizationStatus;
	HMHome* _primaryHome;
	HMHome* _currentHome;
	HMApplicationData* _applicationData;
	unsigned long long _dataSyncState;
	unsigned long long _status;
	unsigned long long _residentProvisioningStatus;
	HMHomeManagerConfiguration* _configuration;
	unsigned long long _options;
	NSSet* _addAccessoryRequests;
	HMUserCloudShareManager* _userCloudShareManager;
	HMMutableArray* _currentHomes;
	HMMutableArray* _homeInvitations;
	NSOperationQueue* _mergeOperationQueue;
	NSNumber* _fileGenerationCounter;
	NSNumber* _fileMetadataVersion;
	NSString* _homeDataCache;
	NSString* _metadataCache;
	NSUUID* _uuid;
	_HMContext* _context;
	unsigned long long _generationCounter;
	unsigned long long _metadataVersion;
	HMNetworkRouterFirewallRuleManager* _firewallRuleManager;

}

@property (nonatomic,retain) HMMutableArray * currentHomes;                                                //@synthesize currentHomes=_currentHomes - In the implementation block
@property (nonatomic,retain) HMMutableArray * homeInvitations;                                             //@synthesize homeInvitations=_homeInvitations - In the implementation block
@property (nonatomic,retain) NSOperationQueue * mergeOperationQueue;                                       //@synthesize mergeOperationQueue=_mergeOperationQueue - In the implementation block
@property (nonatomic,retain) HMHome * primaryHome;                                                         //@synthesize primaryHome=_primaryHome - In the implementation block
@property (assign,nonatomic) BOOL didUpdateHomes;                                                          //@synthesize didUpdateHomes=_didUpdateHomes - In the implementation block
@property (assign,nonatomic) BOOL frameworkMergeComplete;                                                  //@synthesize frameworkMergeComplete=_frameworkMergeComplete - In the implementation block
@property (assign,nonatomic) int serverGenerationCounterToken;                                             //@synthesize serverGenerationCounterToken=_serverGenerationCounterToken - In the implementation block
@property (nonatomic,readonly) unsigned long long serverGenerationCounter; 
@property (nonatomic,retain) NSNumber * fileGenerationCounter;                                             //@synthesize fileGenerationCounter=_fileGenerationCounter - In the implementation block
@property (nonatomic,retain) NSNumber * fileMetadataVersion;                                               //@synthesize fileMetadataVersion=_fileMetadataVersion - In the implementation block
@property (readonly) NSString * homeCacheDir; 
@property (retain) NSString * homeDataCache;                                                               //@synthesize homeDataCache=_homeDataCache - In the implementation block
@property (retain) NSString * metadataCache;                                                               //@synthesize metadataCache=_metadataCache - In the implementation block
@property (assign,nonatomic) BOOL mediaAccessoryControlRequested;                                          //@synthesize mediaAccessoryControlRequested=_mediaAccessoryControlRequested - In the implementation block
@property (nonatomic,retain) NSSet * addAccessoryRequests;                                                 //@synthesize addAccessoryRequests=_addAccessoryRequests - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) _HMContext * context;                                                       //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long generationCounter;                                         //@synthesize generationCounter=_generationCounter - In the implementation block
@property (assign,nonatomic) unsigned long long metadataVersion;                                           //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (assign,getter=isViewServiceActive,nonatomic) BOOL viewServiceActive;                            //@synthesize viewServiceActive=_viewServiceActive - In the implementation block
@property (readonly) unsigned long long options;                                                           //@synthesize options=_options - In the implementation block
@property (readonly) HMHomeManagerConfiguration * configuration;                                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * incomingHomeInvitations; 
@property (nonatomic,readonly) HMHome * currentHome;                                                       //@synthesize currentHome=_currentHome - In the implementation block
@property (readonly) HMAccessory * currentAccessory; 
@property (getter=isDataSyncInProgress,nonatomic,readonly) BOOL dataSyncInProgress; 
@property (nonatomic,readonly) unsigned long long dataSyncState;                                           //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (readonly) unsigned long long status;                                                            //@synthesize status=_status - In the implementation block
@property (getter=isThisDeviceResidentCapable,readonly) BOOL thisDeviceResidentCapable;                    //@synthesize thisDeviceResidentCapable=_thisDeviceResidentCapable - In the implementation block
@property (getter=isResidentEnabledForThisDevice,readonly) BOOL residentEnabledForThisDevice;              //@synthesize residentEnabledForThisDevice=_residentEnabledForThisDevice - In the implementation block
@property (getter=isAccessAllowedWhenLocked,readonly) BOOL accessAllowedWhenLocked;                        //@synthesize accessAllowedWhenLocked=_accessAllowedWhenLocked - In the implementation block
@property (readonly) unsigned long long residentProvisioningStatus;                                        //@synthesize residentProvisioningStatus=_residentProvisioningStatus - In the implementation block
@property (nonatomic,readonly) HMNetworkRouterFirewallRuleManager * firewallRuleManager;                   //@synthesize firewallRuleManager=_firewallRuleManager - In the implementation block
@property (readonly) HMUserCloudShareManager * userCloudShareManager;                                      //@synthesize userCloudShareManager=_userCloudShareManager - In the implementation block
@property (assign,nonatomic,__weak) id<HMHomeManagerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long authorizationStatus;                                               //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,copy,readonly) NSArray * homes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (nonatomic,readonly) HMApplicationData * applicationData; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
+(id)logCategory;
+(BOOL)dataSyncInProgressFromDataSyncState:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id<HMHomeManagerDelegate>)delegate;
-(void)setDelegate:(id<HMHomeManagerDelegate>)arg1 ;
-(NSUUID *)uuid;
-(unsigned long long)status;
-(_HMContext *)context;
-(HMHomeManagerConfiguration *)configuration;
-(id)initWithHomeMangerConfiguration:(id)arg1 ;
-(NSArray *)homes;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)authorizationStatus;
-(id)_privateDelegate;
-(HMHome *)primaryHome;
-(HMHome *)currentHome;
-(void)pairingIdentityForAccessoryWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMAccessory *)currentAccessory;
-(unsigned long long)dataSyncState;
-(HMApplicationData *)applicationData;
-(unsigned long long)generationCounter;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)isDataSyncInProgress;
-(void)addHomeWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateiCloudSwitchState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(NSString *)metadataCache;
-(void)setMetadataCache:(NSString *)arg1 ;
-(unsigned long long)metadataVersion;
-(void)setMetadataVersion:(unsigned long long)arg1 ;
-(void)_registerNotificationHandlers;
-(void)_updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_declineInvitation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_acceptInvitation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_acceptInvitation:(id)arg1 presenceAuthStatus:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSUUID *)applicationDataIdentifier;
-(void)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2 ;
-(void)_notifyDelegateOfAppDataUpdate;
-(void)_handleUserInvitationsUpdatedNotification:(id)arg1 ;
-(BOOL)isViewServiceActive;
-(void)setViewServiceActive:(BOOL)arg1 ;
-(void)checkName:(id)arg1 inHome:(id)arg2 withValidationOptions:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_fetchHomeConfigurationWithRefreshRequested:(BOOL)arg1 ;
-(void)__start;
-(NSSet *)addAccessoryRequests;
-(void)_notifyPendingAddRequests:(id)arg1 ;
-(HMMutableArray *)currentHomes;
-(HMMutableArray *)homeInvitations;
-(void)setDataSyncState:(unsigned long long)arg1 ;
-(void)_updateStatusWithPayload:(id)arg1 ;
-(void)_updateDataSyncState:(id)arg1 ;
-(void)_notifyResidentProvisioningStatus:(unsigned long long)arg1 ;
-(void)_updatePrimaryHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addHomeWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)eraseHomeDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)eraseHomeDataAndDeleteMetadata:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_eraseHomeDataAndDeleteMetadata:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queryHomeKitUsageStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleQueryHomeKitUsageStateResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_deleteDuetEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_checkEventValidity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_primaryAccountDidChange:(id)arg1 modified:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_primaryAccountWasDeletedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_shouldDisplayiCloudSwitchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_queryiCloudSwitchStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateiCloudSwitchState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateResidentEnabledForThisDevice:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAccessAllowedWhenLocked:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_checkName:(id)arg1 inHome:(id)arg2 withValidationOptions:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)mediaAccessoryControlRequested;
-(void)_registerForMediaAccessoryControl:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)serverGenerationCounter;
-(void)_updateHomes:(id)arg1 ;
-(void)_updateCurrentHome:(id)arg1 ;
-(void)_setResidentProvisioningStatus:(unsigned long long)arg1 ;
-(void)_requestRuntimeUpdate:(id)arg1 ;
-(void)_writeCaches:(id)arg1 homeData:(BOOL)arg2 metadata:(BOOL)arg3 ;
-(void)_processHomeConfigurationRequest:(id)arg1 refreshRequested:(BOOL)arg2 ;
-(BOOL)isThisDeviceResidentCapable;
-(void)setThisDeviceResidentCapable:(BOOL)arg1 ;
-(void)notifyResidentCapableUpdated:(BOOL)arg1 ;
-(BOOL)isResidentEnabledForThisDevice;
-(void)setResidentEnabledForThisDevice:(BOOL)arg1 ;
-(void)notifyResidentEnabledUpdated:(BOOL)arg1 ;
-(BOOL)isAccessAllowedWhenLocked;
-(void)setAccessAllowedWhenLocked:(BOOL)arg1 ;
-(void)_notifyAccessAllowedWhenLockedUpdated:(BOOL)arg1 ;
-(id)_homeWithUUID:(id)arg1 ;
-(void)setGenerationCounter:(unsigned long long)arg1 ;
-(BOOL)didUpdateHomes;
-(void)_mergeCurrentHomesWithNewHomes:(id)arg1 newPrimaryHome:(id)arg2 newCurrentHome:(id)arg3 newInvitations:(id)arg4 newAppData:(id)arg5 refreshRequested:(BOOL)arg6 ;
-(void)setDidUpdateHomes:(BOOL)arg1 ;
-(void)_updateAppData:(id)arg1 ;
-(void)_requestRefresh;
-(id)_addAccessoryRequestsFromArray:(id)arg1 ;
-(void)_updateAddAccessoryRequestsAndNotify:(id)arg1 ;
-(void)setFrameworkMergeComplete:(BOOL)arg1 ;
-(void)__handleHomeManagerState:(id)arg1 ;
-(void)setHomeDataCache:(NSString *)arg1 ;
-(void)setFileGenerationCounter:(NSNumber *)arg1 ;
-(void)setFileMetadataVersion:(NSNumber *)arg1 ;
-(NSString *)homeCacheDir;
-(NSString *)homeDataCache;
-(NSNumber *)fileGenerationCounter;
-(NSNumber *)fileMetadataVersion;
-(void)_removeCacheFiles:(BOOL)arg1 ;
-(void)_handleRuntimeStateUpdatePayload:(id)arg1 ;
-(void)setAddAccessoryRequests:(NSSet *)arg1 ;
-(void)setCurrentHome:(HMHome *)arg1 ;
-(void)setPrimaryHome:(HMHome *)arg1 ;
-(NSOperationQueue *)mergeOperationQueue;
-(void)_mergeCurrentAppDataWithNewAppData:(id)arg1 operations:(id)arg2 ;
-(void)_handleHomeAddedNotification:(id)arg1 ;
-(void)_handleHomeRemovedNotification:(id)arg1 ;
-(void)_handlePrimaryChangedNotification:(id)arg1 ;
-(void)_handleCurrentHomeChangedNotification:(id)arg1 ;
-(void)_handleHomesDidUpdateNotification:(id)arg1 ;
-(void)_handleMetadataUpdatedNotification:(id)arg1 ;
-(void)_handleResidentDeviceCapableUpdatedNotification:(id)arg1 ;
-(void)_handleResidentEnabledForThisDeviceUpdatedNotification:(id)arg1 ;
-(void)_handleAccessAllowedWhenLockedUpdatedNotification:(id)arg1 ;
-(void)_handleStatusUpdated:(id)arg1 ;
-(void)_handleResidentProvisioningStatusChanged:(id)arg1 ;
-(void)_handleRuntimeStateUpdateNotification:(id)arg1 ;
-(void)_handleCheckForAddAccessoryRequests;
-(void)_updateInvitation:(id)arg1 presenceAuthStatus:(unsigned long long)arg2 invitationState:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setResidentProvisioningStatus:(unsigned long long)arg1 ;
-(void)setMediaAccessoryControlRequested:(BOOL)arg1 ;
-(void)_pairingIdentityForAccessoryWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)frameworkMergeComplete;
-(NSArray *)incomingHomeInvitations;
-(unsigned long long)residentProvisioningStatus;
-(void)updatePrimaryHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetConfiguration:(BOOL)arg1 withoutPopup:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryHomeKitUsageStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryVersionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dumpState:(id)arg1 payload:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteDuetEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkEventValidity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)primaryAccountDidChange:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)primaryAccountWasModified:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)idmsAccountUsernameModifiedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)primaryAccountWasDeletedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)shouldDisplayiCloudSwitchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryiCloudSwitchStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateResidentEnabledForThisDevice:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccessAllowedWhenLocked:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__resolveAccountHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__removeAccountWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__removeAccountWithHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_pingDeviceWithUUID:(id)arg1 secure:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_pingDeviceWithDestination:(id)arg1 secure:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)__processSyncResponse:(id)arg1 refreshRequested:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_determineCacheFiles;
-(BOOL)_isValidCachedHomeConfiguration:(id)arg1 ;
-(void)_dumpCaches:(id)arg1 metadata:(id)arg2 ;
-(void)registerForMediaAccessoryControl:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMUserCloudShareManager *)userCloudShareManager;
-(void)setCurrentHomes:(HMMutableArray *)arg1 ;
-(void)setHomeInvitations:(HMMutableArray *)arg1 ;
-(void)setMergeOperationQueue:(NSOperationQueue *)arg1 ;
-(int)serverGenerationCounterToken;
-(void)setServerGenerationCounterToken:(int)arg1 ;
-(HMNetworkRouterFirewallRuleManager *)firewallRuleManager;
@end

