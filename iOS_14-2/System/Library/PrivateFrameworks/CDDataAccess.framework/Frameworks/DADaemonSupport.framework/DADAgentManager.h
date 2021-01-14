/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/


@protocol OS_dispatch_queue;
#import <DADaemonSupport/DADaemonSupport-Structs.h>
@class NSArray, NSObject, NSMutableDictionary, NSDictionary, DADBuddyStateObserver, NSMutableArray, DADREMLocalDBWatcher;

@interface DADAgentManager : NSObject {

	NSArray* _activeAgents;
	NSObject*<OS_dispatch_queue> _activeAgentsQueue;
	NSMutableDictionary* _watchedIDs;
	unsigned _pmNotifier;
	IONotificationPortRef _pmPort;
	CFRunLoopSourceRef _pmRunLoopSource;
	/*^block*/id _startAgentsWhenSystemReadyBlock;
	NSObject*<OS_dispatch_queue> _CTCellularUsagePolicyNotificationQ;
	CTServerConnectionRef _ctServerConnection;
	NSDictionary* _wirelessPolicies;
	int _pendingAccountSetupCount;
	DADBuddyStateObserver* _buddyStateObserver;
	NSMutableArray* _subCalHandlers;
	unsigned long long _nextDisableMonitoringAgentsToken;
	NSMutableDictionary* _disableMonitoringAgentsTokens;

}

@property (nonatomic,retain) DADREMLocalDBWatcher * rem_localDBWatcher; 
@property (nonatomic,copy) id rem_xpcEventHandler; 
@property (nonatomic,retain) id<DADREMUserNotificationPresentingProvider> rem_userNotificationPresentingProvider; 
@property (nonatomic,retain) id<DADREMStoreProvider> rem_storeProvider; 
@property (nonatomic,retain) NSMutableArray * subCalHandlers;                                                                  //@synthesize subCalHandlers=_subCalHandlers - In the implementation block
@property (assign,nonatomic) unsigned long long nextDisableMonitoringAgentsToken;                                              //@synthesize nextDisableMonitoringAgentsToken=_nextDisableMonitoringAgentsToken - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * disableMonitoringAgentsTokens;                                            //@synthesize disableMonitoringAgentsTokens=_disableMonitoringAgentsTokens - In the implementation block
@property (nonatomic,readonly) NSArray * activeAgents; 
+(id)sharedManager;
+(BOOL)wirelessPolicy:(id)arg1 isMorePermissiveThanPolicy:(id)arg2 ;
-(BOOL)_systemMayNowBeReady;
-(id)currentPolicyKeyForAccount:(id)arg1 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)removePendingAccountSetup;
-(id)_accountInfoPath;
-(BOOL)resumeMonitoringAccountID:(id)arg1 syncKeyMap:(id)arg2 ;
-(void)_handleCellularDataUsageChangedNotification;
-(id)init;
-(void)registerForBuddy;
-(BOOL)updateContentsOfFolders:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(void)setSubCalHandlers:(NSMutableArray *)arg1 ;
-(id)agentWithAccountID:(id)arg1 ;
-(id)accountWithAccountID:(id)arg1 andClassName:(id)arg2 ;
-(void)setRem_xpcEventHandler:(id)arg1 ;
-(id)_configFileForAgent:(id)arg1 ;
-(void)enableMonitoringAgentsWithToken:(unsigned long long)arg1 ;
-(void)_stopMonitoringAndSaveAgents;
-(void)setRem_localDBWatcher:(DADREMLocalDBWatcher *)arg1 ;
-(BOOL)updateContentsOfAllFoldersForAccountIDs:(id)arg1 ;
-(id)rem_xpcEventHandler;
-(BOOL)hasPendingAccountSetup;
-(DADREMLocalDBWatcher *)rem_localDBWatcher;
-(id)stateString;
-(unsigned long long)nextDisableMonitoringAgentsToken;
-(id<DADREMStoreProvider>)rem_storeProvider;
-(void)getStatusReportDictsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_deviceDidWake;
-(void)_clearOrphanedStores;
-(void)_addAccountAggdEntries;
-(unsigned long long)disableMonitoringAgents;
-(void)saveAndReleaseAgents;
-(BOOL)suspendMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(void)_registerForCTDataUsageNotificaiton;
-(id)accountWithAccountID:(id)arg1 ;
-(NSArray *)activeAgents;
-(BOOL)_hasDataclassWeCareAbout:(id)arg1 ;
-(id<DADREMUserNotificationPresentingProvider>)rem_userNotificationPresentingProvider;
-(void)setRem_userNotificationPresentingProvider:(id<DADREMUserNotificationPresentingProvider>)arg1 ;
-(void)requestPolicyUpdateForAccount:(id)arg1 ;
-(BOOL)startMonitoringAccountID:(id)arg1 syncKeyMap:(id)arg2 ;
-(void)loadAgents:(BOOL)arg1 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)_deviceWillSleep;
-(BOOL)hasActiveAccounts;
-(id)activeAccountBundleIDs;
-(void)_loadAndStartMonitoringAgents:(BOOL)arg1 ;
-(BOOL)hasEASAccountConfigured;
-(void)disableActiveSync;
-(NSMutableArray *)subCalHandlers;
-(void)_resetMonitoringRequestsAndLoadAgents;
-(NSMutableDictionary *)disableMonitoringAgentsTokens;
-(void)unregisterForBuddy;
-(void)setNextDisableMonitoringAgentsToken:(unsigned long long)arg1 ;
-(BOOL)stopMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(void)enableActiveSync;
-(void)dealloc;
-(void)setRem_storeProvider:(id<DADREMStoreProvider>)arg1 ;
-(void)addPendingAccountSetup;
@end

