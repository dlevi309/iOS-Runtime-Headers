/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_systemMayNowBeReady;
-(id)currentPolicyKeyForAccount:(id)arg1 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)removePersistMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 clientID:(id)arg3 ;
-(void)removePendingAccountSetup;
-(id)_accountInfoPath;
-(void)_handleCellularDataUsageChangedNotification;
-(id)init;
-(void)registerForBuddy;
-(id)changeHistoryClerkWithDBHelper:(id)arg1 ;
-(BOOL)updateContentsOfFolders:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(void)setSubCalHandlers:(NSMutableArray *)arg1 ;
-(id)agentWithAccountID:(id)arg1 ;
-(id)accountWithAccountID:(id)arg1 andClassName:(id)arg2 ;
-(id)_configFileForAgent:(id)arg1 ;
-(void)enableMonitoringAgentsWithToken:(unsigned long long)arg1 ;
-(BOOL)clearPersistMonitoringAccountID:(id)arg1 clientID:(id)arg2 ;
-(void)_stopMonitoringAndSaveAgents;
-(void)handleURLString:(id)arg1 ;
-(BOOL)dadRemoveStoresForAccountWithID:(id)arg1 ;
-(BOOL)hasPendingAccountSetup;
-(void)cleanupLaunchdSemaphore;
-(id)_phoneVersion;
-(id)stateString;
-(void)disableDaemon;
-(id)accountsProviderWithDBHelper:(id)arg1 ;
-(void)_calDaysToSyncDidChange;
-(BOOL)startMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(void)_loadAndStartExchangeMonitoringAgents;
-(unsigned long long)nextDisableMonitoringAgentsToken;
-(void)loadExchangeAgents;
-(void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4 ;
-(void)getStatusReportDictsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_deviceDidWake;
-(BOOL)resetCertWarningsForAccountWithId:(id)arg1 andDataclasses:(long long)arg2 ;
-(void)_clearOrphanedStores;
-(BOOL)addPersistMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 clientID:(id)arg3 ;
-(void)_addAccountAggdEntries;
-(unsigned long long)disableMonitoringAgents;
-(void)saveAndReleaseAgents;
-(BOOL)suspendMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(void)_registerForCTDataUsageNotificaiton;
-(void)loadAgents;
-(id)accountWithAccountID:(id)arg1 ;
-(NSArray *)activeAgents;
-(BOOL)_hasDataclassWeCareAbout:(id)arg1 ;
-(BOOL)_removeSubscribedCalendarsForAccountWithID:(id)arg1 inStore:(void*)arg2 ;
-(void)requestPolicyUpdateForAccount:(id)arg1 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)_deviceWillSleep;
-(BOOL)hasActiveAccounts;
-(id)activeAccountBundleIDs;
-(BOOL)hasEASAccountConfigured;
-(void)enableDaemon;
-(BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)disableActiveSync;
-(NSMutableArray *)subCalHandlers;
-(void)_resetMonitoringRequestsAndLoadAgents;
-(NSMutableDictionary *)disableMonitoringAgentsTokens;
-(void)setNextDisableMonitoringAgentsToken:(unsigned long long)arg1 ;
-(BOOL)stopMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(void)enableActiveSync;
-(void)dealloc;
-(void)addPendingAccountSetup;
-(BOOL)resumeMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
@end

