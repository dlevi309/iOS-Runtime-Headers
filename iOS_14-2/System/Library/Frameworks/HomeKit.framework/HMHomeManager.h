/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>
#import <libobjc.A.dylib/HMApplicationData.h>

@protocol HMHomeManagerDelegate, HMSetupRemoteService;
@class HMFUnfairLock, NSOperationQueue, NSMutableArray, HMFTimer, HMHome, HMApplicationData, HMHomeManagerConfiguration, NSSet, HMUserCloudShareManager, HMSetupViewController, HMMutableArray, NSNumber, NSString, NSUUID, _HMContext, HMNetworkRouterFirewallRuleManager, NSArray, HMAccessory;

@interface HMHomeManager : NSObject <HMFLogging, HMFTimerDelegate, HMFMessageReceiver, HMMutableApplicationData, HMApplicationData> {

	HMFUnfairLock* _lock;
	NSOperationQueue* _syncOperationQueue;
	NSMutableArray* _refreshRequests;
	NSMutableArray* _batchNotificationReasons;
	HMFTimer* _batchNotificationEndTimer;
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
	HMSetupViewController* _setupViewController;
	id<HMSetupRemoteService> _setupRemoteViewController;
	long long _multiUserStatus;
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
@property (assign,nonatomic,__weak) HMSetupViewController * setupViewController;                           //@synthesize setupViewController=_setupViewController - In the implementation block
@property (assign,nonatomic,__weak) id<HMSetupRemoteService> setupRemoteViewController;                    //@synthesize setupRemoteViewController=_setupRemoteViewController - In the implementation block
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
@property (readonly) long long multiUserStatus;                                                            //@synthesize multiUserStatus=_multiUserStatus - In the implementation block
@property (assign,nonatomic,__weak) id<HMHomeManagerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long authorizationStatus;                                               //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,copy,readonly) NSArray * homes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
@property (nonatomic,retain) HMApplicationData * applicationData;                                          //@synthesize applicationData=_applicationData - In the implementation block
+(id)logCategory;
+(BOOL)dataSyncInProgressFromDataSyncState:(unsigned long long)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)_updateiCloudSwitchState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_privateDelegate;
-(void)_handleQueryHomeKitUsageStateResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_pingDeviceWithUUID:(id)arg1 monitor:(BOOL)arg2 secure:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSUUID *)applicationDataIdentifier;
-(NSUUID *)uuid;
-(void)setResidentProvisioningStatus:(unsigned long long)arg1 ;
-(id)initWithHomeMangerConfiguration:(id)arg1 ;
-(HMSetupViewController *)setupViewController;
-(void)updateResidentEnabledForThisDevice:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSNumber *)fileGenerationCounter;
-(BOOL)frameworkMergeComplete;
-(void)_updateAddAccessoryRequestsAndNotify:(id)arg1 ;
-(void)_updateHomes:(id)arg1 ;
-(void)primaryAccountWasModified:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setMediaAccessoryControlRequested:(BOOL)arg1 ;
-(unsigned long long)residentProvisioningStatus;
-(void)handleDaemonInterruptedNotification:(id)arg1 ;
-(NSArray *)incomingHomeInvitations;
-(id)init;
-(void)registerForMediaAccessoryControl:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccessAllowedWhenLocked:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__start;
-(void)idmsAccountUsernameModifiedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateInvitation:(id)arg1 presenceAuthStatus:(unsigned long long)arg2 invitationState:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isDataSyncInProgress;
-(id<HMHomeManagerDelegate>)delegate;
-(void)checkName:(id)arg1 inHome:(id)arg2 withValidationOptions:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_beginActiveAssertionWithReason:(id)arg1 ;
-(void)_notifyResidentProvisioningStatus:(unsigned long long)arg1 ;
-(void)launchSetupViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentHome:(HMHome *)arg1 ;
-(void)_pairingIdentityForAccessoryWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setResidentEnabledForThisDevice:(BOOL)arg1 ;
-(void)_endActiveAssertion:(id)arg1 ;
-(NSOperationQueue *)mergeOperationQueue;
-(void)__removeAccountWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMHome *)currentHome;
-(void)_handleHomeAddedNotification:(id)arg1 ;
-(void)eraseHomeDataAndDeleteMetadata:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_checkEventValidity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFrameworkMergeComplete:(BOOL)arg1 ;
-(void)__processSyncResponse:(id)arg1 refreshRequested:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)authorizationStatus;
-(void)setDidUpdateHomes:(BOOL)arg1 ;
-(void)queryMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)options;
-(id)_homeWithUUID:(id)arg1 ;
-(void)shouldDisplayiCloudSwitchWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isResidentEnabledForThisDevice;
-(unsigned long long)serverGenerationCounter;
-(void)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2 ;
-(void)notifyResidentCapableUpdated:(BOOL)arg1 ;
-(NSNumber *)fileMetadataVersion;
-(void)_notifyPendingAddRequests:(id)arg1 ;
-(void)_updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSSet *)addAccessoryRequests;
-(void)_addHomeWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)dataSyncState;
-(HMMutableArray *)currentHomes;
-(void)resetConfiguration:(BOOL)arg1 withoutPopup:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(_HMContext *)context;
-(void)removeHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateStatusWithPayload:(id)arg1 sourceIsFetch:(BOOL)arg2 ;
-(void)setMetadataVersion:(unsigned long long)arg1 ;
-(void)setHomeInvitations:(HMMutableArray *)arg1 ;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(void)primaryAccountDidChange:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateDataSyncState:(id)arg1 ;
-(id)_refreshBeforeDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)homeCacheDir;
-(void)logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(/*^block*/id)arg5 ;
-(HMMutableArray *)homeInvitations;
-(unsigned long long)metadataVersion;
-(void)_removeHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyAccessAllowedWhenLockedUpdated:(BOOL)arg1 ;
-(void)setMergeOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setMultiUserStatus:(long long)arg1 ;
-(BOOL)didUpdateHomes;
-(void)setDelegate:(id<HMHomeManagerDelegate>)arg1 ;
-(void)setSetupRemoteViewController:(id<HMSetupRemoteService>)arg1 ;
-(void)_setResidentProvisioningStatus:(unsigned long long)arg1 ;
-(void)_updateAccessAllowedWhenLocked:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isValidCachedHomeConfiguration:(id)arg1 ;
-(void)deleteDuetEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateiCloudSwitchState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)primaryAccountWasDeletedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)__removeAccountWithHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_determineCacheFiles;
-(void)handleUIApplicationWillResignActiveNotification:(id)arg1 ;
-(long long)multiUserStatus;
-(void)_handleCheckForAddAccessoryRequests;
-(HMApplicationData *)applicationData;
-(id<HMSetupRemoteService>)setupRemoteViewController;
-(void)notifyDelegateOfBatchNotificationsEndWithReason:(id)arg1 ;
-(void)notifyDelegateOfBatchNotificationsStartWithReason:(id)arg1 ;
-(BOOL)isAccessAllowedWhenLocked;
-(HMHomeManagerConfiguration *)configuration;
-(void)_dumpCaches:(id)arg1 metadata:(id)arg2 ;
-(void)notifyResidentEnabledUpdated:(BOOL)arg1 ;
-(void)setGenerationCounter:(unsigned long long)arg1 ;
-(NSString *)metadataCache;
-(void)_handleMetadataUpdatedNotification:(id)arg1 ;
-(void)checkEventValidity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processHomeConfigurationRequest:(id)arg1 refreshRequested:(BOOL)arg2 ;
-(void)_fetchHomeConfigurationWithRefreshRequested:(BOOL)arg1 ;
-(void)_updateResidentEnabledForThisDevice:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyDelegateOfAppDataUpdate;
-(void)setViewServiceActive:(BOOL)arg1 ;
-(id)_addAccessoryRequestsFromArray:(id)arg1 ;
-(void)setMetadataCache:(NSString *)arg1 ;
-(void)queryVersionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPrimaryHome:(HMHome *)arg1 ;
-(HMAccessory *)currentAccessory;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__resolveAccountHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)serverGenerationCounterToken;
-(void)_handleHomesDidUpdateNotification:(id)arg1 ;
-(NSString *)homeDataCache;
-(void)_handleHomeRemovedNotification:(id)arg1 ;
-(void)setFileMetadataVersion:(NSNumber *)arg1 ;
-(void)_removeCacheFiles:(BOOL)arg1 ;
-(void)setAccessAllowedWhenLocked:(BOOL)arg1 ;
-(void)dumpState:(id)arg1 payload:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_generateFirewallRuleTLVsFromNetworkDeclarations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queryHomeKitUsageStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateFirewallRuleTLVsFromNetworkDeclarations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addAndSetupAccessoriesWithSetupPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_writeCaches:(id)arg1 homeData:(BOOL)arg2 metadata:(BOOL)arg3 ;
-(void)_requestRefresh;
-(void)_handleStatusUpdated:(id)arg1 ;
-(void)setThisDeviceResidentCapable:(BOOL)arg1 ;
-(void)_handleUserInvitationsUpdatedNotification:(id)arg1 ;
-(void)_handleAccessAllowedWhenLockedUpdatedNotification:(id)arg1 ;
-(void)_updateStatusWithPayload:(id)arg1 ;
-(void)setAddAccessoryRequests:(NSSet *)arg1 ;
-(void)_forceBatchNotificationsEnd;
-(void)_mergeCurrentHomesWithNewHomes:(id)arg1 newPrimaryHome:(id)arg2 newCurrentHome:(id)arg3 newInvitations:(id)arg4 newAppData:(id)arg5 refreshRequested:(BOOL)arg6 ;
-(void)interruptSetupWithError:(id)arg1 ;
-(void)setCurrentHomes:(HMMutableArray *)arg1 ;
-(void)_handleResidentDeviceCapableUpdatedNotification:(id)arg1 ;
-(void)_handleResidentProvisioningStatusChanged:(id)arg1 ;
-(void)__handleHomeManagerState:(id)arg1 ;
-(void)_acceptInvitation:(id)arg1 presenceAuthStatus:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setHomeDataCache:(NSString *)arg1 ;
-(void)_handleRuntimeStateUpdateNotification:(id)arg1 ;
-(void)setSetupViewController:(HMSetupViewController *)arg1 ;
-(void)_updateAppData:(id)arg1 ;
-(void)_deleteDuetEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)addHomeWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateCurrentHome:(id)arg1 ;
-(void)_shouldDisplayiCloudSwitchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addAndSetupAccessoriesWithSetupPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_checkName:(id)arg1 inHome:(id)arg2 withValidationOptions:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)queryHomeKitUsageStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_declineInvitation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setServerGenerationCounterToken:(int)arg1 ;
-(void)_handleResidentEnabledForThisDeviceUpdatedNotification:(id)arg1 ;
-(BOOL)mediaAccessoryControlRequested;
-(void)_eraseHomeDataAndDeleteMetadata:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handlePrimaryChangedNotification:(id)arg1 ;
-(void)_queryiCloudSwitchStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isViewServiceActive;
-(HMNetworkRouterFirewallRuleManager *)firewallRuleManager;
-(void)pairingIdentityForAccessoryWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMHome *)primaryHome;
-(void)_updatePrimaryHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)eraseHomeDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)homes;
-(BOOL)isThisDeviceResidentCapable;
-(HMUserCloudShareManager *)userCloudShareManager;
-(void)_handleCurrentHomeChangedNotification:(id)arg1 ;
-(void)_primaryAccountDidChange:(id)arg1 modified:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_primaryAccountWasDeletedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_acceptInvitation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)generationCounter;
-(void)_registerNotificationHandlers;
-(void)queryiCloudSwitchStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleRuntimeStateUpdatePayload:(id)arg1 reason:(id)arg2 ;
-(void)_mergeCurrentAppDataWithNewAppData:(id)arg1 operations:(id)arg2 ;
-(void)_requestRuntimeUpdate:(id)arg1 ;
-(void)updatePrimaryHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDataSyncState:(unsigned long long)arg1 ;
-(void)setFileGenerationCounter:(NSNumber *)arg1 ;
-(unsigned long long)status;
-(void)dealloc;
-(void)setMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerForMediaAccessoryControl:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_pingDeviceWithDestination:(id)arg1 monitor:(BOOL)arg2 secure:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

