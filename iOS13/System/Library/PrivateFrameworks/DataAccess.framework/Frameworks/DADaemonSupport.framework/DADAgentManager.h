/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/


@protocol OS_dispatch_queue;
#import <DADaemonSupport/DADaemonSupport-Structs.h>
@class NSArray, NSObject, NSMutableDictionary, DADBuddyStateObserver, NSMutableArray, DADREMLocalDBWatcher;

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
-(id)init;
-(void)dealloc;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
-(id)stateString;
-(BOOL)hasActiveAccounts;
-(BOOL)_systemMayNowBeReady;
-(DADREMLocalDBWatcher *)rem_localDBWatcher;
-(void)setRem_localDBWatcher:(DADREMLocalDBWatcher *)arg1 ;
-(id)rem_xpcEventHandler;
-(void)setRem_xpcEventHandler:(id)arg1 ;
-(NSArray *)activeAgents;
-(id<DADREMStoreProvider>)rem_storeProvider;
-(id)_accountInfoPath;
-(void)_deviceDidWake;
-(void)_deviceWillSleep;
-(void)unregisterForBuddy;
-(NSMutableDictionary *)disableMonitoringAgentsTokens;
-(void)_loadAndStartMonitoringAgents:(BOOL)arg1 ;
-(void)_handleCellularDataUsageChangedNotification;
-(void)loadAgents:(BOOL)arg1 ;
-(void)_clearOrphanedStores;
-(void)_registerForCTDataUsageNotificaiton;
-(void)registerForBuddy;
-(void)_resetMonitoringRequestsAndLoadAgents;
-(void)saveAndReleaseAgents;
-(void)_addAccountAggdEntries;
-(unsigned long long)nextDisableMonitoringAgentsToken;
-(void)setNextDisableMonitoringAgentsToken:(unsigned long long)arg1 ;
-(void)_stopMonitoringAndSaveAgents;
-(BOOL)_hasDataclassWeCareAbout:(id)arg1 ;
-(id)agentWithAccountID:(id)arg1 ;
-(id)accountWithAccountID:(id)arg1 ;
-(id)accountWithAccountID:(id)arg1 andClassName:(id)arg2 ;
-(id)_configFileForAgent:(id)arg1 ;
-(id)currentPolicyKeyForAccount:(id)arg1 ;
-(void)requestPolicyUpdateForAccount:(id)arg1 ;
-(BOOL)startMonitoringAccountID:(id)arg1 syncKeyMap:(id)arg2 ;
-(BOOL)stopMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(BOOL)suspendMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(BOOL)resumeMonitoringAccountID:(id)arg1 syncKeyMap:(id)arg2 ;
-(void)enableMonitoringAgentsWithToken:(unsigned long long)arg1 ;
-(unsigned long long)disableMonitoringAgents;
-(BOOL)updateContentsOfFolders:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(BOOL)updateContentsOfAllFoldersForAccountIDs:(id)arg1 ;
-(id)activeAccountBundleIDs;
-(BOOL)hasEASAccountConfigured;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)getStatusReportDictsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)addPendingAccountSetup;
-(void)removePendingAccountSetup;
-(BOOL)hasPendingAccountSetup;
-(void)enableActiveSync;
-(void)disableActiveSync;
-(NSMutableArray *)subCalHandlers;
-(void)setSubCalHandlers:(NSMutableArray *)arg1 ;
-(id<DADREMUserNotificationPresentingProvider>)rem_userNotificationPresentingProvider;
-(void)setRem_userNotificationPresentingProvider:(id<DADREMUserNotificationPresentingProvider>)arg1 ;
-(void)setRem_storeProvider:(id<DADREMStoreProvider>)arg1 ;
@end

