/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface CDDADConnection : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSObject*<OS_dispatch_queue> _muckingWithConn;
	NSObject*<OS_dispatch_queue> _muckingWithInFlightCollections;
	NSMutableSet* _accountIdsWithAlreadyResetCerts;
	NSMutableSet* _accountIdsWithAlreadyResetThrottleTimers;
	/*^block*/id _statusReportBlock;
	NSMutableDictionary* _inFlightSearchQueries;
	NSMutableDictionary* _inFlightFolderChanges;
	NSMutableDictionary* _inFlightAttachmentDownloads;
	NSMutableDictionary* _inFlightCalendarAvailabilityRequests;
	NSMutableDictionary* _inFlightCalendarDirectorySearches;
	NSMutableDictionary* _inFlightShareRequests;
	NSMutableDictionary* _inFlightOofSettingsRequests;
	BOOL _registered;

}

@property (assign,nonatomic) BOOL registered;              //@synthesize registered=_registered - In the implementation block
+(id)sharedConnection;
+(void)setShouldIgnoreAccountChanges;
+(unsigned long long)_nextStopMonitoringStatusToken;
-(void)setRegistered:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)cancelServerContactsSearch:(id)arg1 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4 ;
-(BOOL)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 ;
-(BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(void)_folderChangeFinished:(id)arg1 ;
-(BOOL)registered;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)activeSyncDeviceIdentifier;
-(BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(BOOL)arg3 ;
-(id)init;
-(void)_initializeConnectionWithXPCEndpoint:(id)arg1 ;
-(void)requestDaemonStartMonitoringAgentsWithToken:(unsigned long long)arg1 ;
-(void)_dispatchMessage:(id)arg1 ;
-(id)decodedErrorFromData:(id)arg1 ;
-(void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2 ;
-(void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 ;
-(BOOL)requestPolicyUpdateForAccountID:(id)arg1 ;
-(id)currentPolicyKeyForAccountID:(id)arg1 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg1 ;
-(void)_serverContactsSearchQueryFinished:(id)arg1 ;
-(void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(/*^block*/id)arg2 ;
-(id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned long long)arg4 resultsBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2 ;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fillOutCurrentEASTimeZoneInfo;
-(BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)_calendarDirectorySearchFinished:(id)arg1 ;
-(BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)_initializeConnection;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 ;
-(void)_calendarAvailabilityRequestReturnedResults:(id)arg1 ;
-(void)_serverDiedWithReason:(id)arg1 ;
-(unsigned long long)requestDaemonStopMonitoringAgents;
-(void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2 ;
-(void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1 withToken:(unsigned long long)arg2 waitForReply:(BOOL)arg3 ;
-(BOOL)registerForInterrogationWithBlock:(/*^block*/id)arg1 ;
-(void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4 ;
-(void)_downloadProgress:(id)arg1 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_calendarDirectorySearchReturnedResults:(id)arg1 ;
-(void)_oofSettingsRequestsFinished:(id)arg1 ;
-(BOOL)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(BOOL)arg3 ;
-(void)resetTimersAndWarnings;
-(unsigned long long)requestDaemonStopMonitoringAgentsSync;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg1 ;
-(void)_policyKeyChanged:(id)arg1 ;
-(void)_foldersUpdated:(id)arg1 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 ;
-(BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(void)_shareResponseFinished:(id)arg1 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 ;
-(void)_tearDownInFlightObjects;
-(void)_registerForAppResumedNotification;
-(void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
-(void)_initializeXPCConnection:(id)arg1 ;
-(BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 ;
-(BOOL)_validateXPCReply:(id)arg1 ;
-(void)_resetThrottleTimersForAccountId:(id)arg1 ;
-(id)_init;
-(void)requestDaemonStartMonitoringAgentsSyncWithToken:(unsigned long long)arg1 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_calendarAvailabilityRequestFinished:(id)arg1 ;
-(id)_connection;
-(void)_getStatusReportsFromClient:(id)arg1 ;
-(id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_logDataAccessStatus:(id)arg1 ;
-(void)reallyRegisterForInterrogation;
-(id)statusReports;
-(void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 ;
-(void)dealloc;
-(void)_downloadFinished:(id)arg1 ;
-(BOOL)watchFoldersWithSyncKeyMap:(id)arg1 forAccountID:(id)arg2 persistent:(BOOL)arg3 ;
-(BOOL)resumeWatchingFoldersWithSyncKeyMap:(id)arg1 forAccountID:(id)arg2 ;
-(void)removeStoresForAccountWithID:(id)arg1 ;
@end

