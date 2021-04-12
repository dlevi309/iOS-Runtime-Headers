/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/


@protocol OS_dispatch_queue;
#import <ESDaemonSupport/ESDaemonSupport-Structs.h>
@class NSArray, NSObject, NSMutableDictionary, NSMutableArray;

@interface ESDAgentManager : NSObject {

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
	NSMutableArray* _subCalHandlers;
	unsigned long long _nextDisableMonitoringAgentsToken;
	NSMutableDictionary* _disableMonitoringAgentsTokens;

}

@property (nonatomic,retain) NSMutableArray * subCalHandlers;                                    //@synthesize subCalHandlers=_subCalHandlers - In the implementation block
@property (assign,nonatomic) unsigned long long nextDisableMonitoringAgentsToken;                //@synthesize nextDisableMonitoringAgentsToken=_nextDisableMonitoringAgentsToken - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * disableMonitoringAgentsTokens;              //@synthesize disableMonitoringAgentsTokens=_disableMonitoringAgentsTokens - In the implementation block
@property (nonatomic,readonly) NSArray * activeAgents; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
-(id)stateString;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4 ;
-(void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4 ;
-(id)accountsProviderWithDBHelper:(id)arg1 ;
-(BOOL)hasActiveAccounts;
-(BOOL)_systemMayNowBeReady;
-(NSArray *)activeAgents;
-(id)_accountInfoPath;
-(void)_deviceDidWake;
-(void)_deviceWillSleep;
-(NSMutableDictionary *)disableMonitoringAgentsTokens;
-(void)_handleCellularDataUsageChangedNotification;
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
-(BOOL)stopMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(BOOL)suspendMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(void)enableMonitoringAgentsWithToken:(unsigned long long)arg1 ;
-(unsigned long long)disableMonitoringAgents;
-(BOOL)updateContentsOfFolders:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
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
-(BOOL)resumeMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(BOOL)addPersistMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 clientID:(id)arg3 ;
-(BOOL)startMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(BOOL)removePersistMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 clientID:(id)arg3 ;
-(BOOL)clearPersistMonitoringAccountID:(id)arg1 clientID:(id)arg2 ;
-(BOOL)dadRemoveStoresForAccountWithID:(id)arg1 ;
-(BOOL)resetCertWarningsForAccountWithId:(id)arg1 andDataclasses:(long long)arg2 ;
-(void)handleURLString:(id)arg1 ;
-(BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_phoneVersion;
-(void)enableDaemon;
-(BOOL)_removeSubscribedCalendarsForAccountWithID:(id)arg1 inStore:(void*)arg2 ;
-(void)_loadAndStartExchangeMonitoringAgents;
-(void)loadExchangeAgents;
-(id)changeHistoryClerkWithDBHelper:(id)arg1 ;
-(void)loadAgents;
-(void)_calDaysToSyncDidChange;
-(void)disableDaemon;
-(void)cleanupLaunchdSemaphore;
@end

