/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@protocol OS_dispatch_queue, IMDCKSyncTokenStore, OS_xpc_object;
@class CKServerChangeToken, NSObject, IMDChatRegistry, IMDRecordZoneManager, IMDCKChatSyncCKOperationFactory, CKRecord;

@interface IMDCKChatSyncController : IMDCKAbstractSyncController {

	BOOL _fetchedChatsDuringLastSync;
	CKServerChangeToken* _latestSyncToken;
	NSObject*<OS_dispatch_queue> _ckQueue;
	IMDChatRegistry* _chatRegistry;
	IMDRecordZoneManager* _recordZoneManager;
	id<IMDCKSyncTokenStore> _syncTokenStore;
	IMDCKChatSyncCKOperationFactory* _CKOperationFactory;
	CKRecord* _lockRecord;
	CKRecord* _manateeLockRecord;
	CKRecord* _stingRayLockRecord;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ckQueue;                            //@synthesize ckQueue=_ckQueue - In the implementation block
@property (nonatomic,retain) IMDChatRegistry * chatRegistry;                                    //@synthesize chatRegistry=_chatRegistry - In the implementation block
@property (nonatomic,retain) IMDRecordZoneManager * recordZoneManager;                          //@synthesize recordZoneManager=_recordZoneManager - In the implementation block
@property (nonatomic,retain) id<IMDCKSyncTokenStore> syncTokenStore;                            //@synthesize syncTokenStore=_syncTokenStore - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * latestSyncToken;                             //@synthesize latestSyncToken=_latestSyncToken - In the implementation block
@property (nonatomic,retain) IMDCKChatSyncCKOperationFactory * CKOperationFactory;              //@synthesize CKOperationFactory=_CKOperationFactory - In the implementation block
@property (nonatomic,retain) CKRecord * lockRecord;                                             //@synthesize lockRecord=_lockRecord - In the implementation block
@property (nonatomic,retain) CKRecord * manateeLockRecord;                                      //@synthesize manateeLockRecord=_manateeLockRecord - In the implementation block
@property (nonatomic,retain) CKRecord * stingRayLockRecord;                                     //@synthesize stingRayLockRecord=_stingRayLockRecord - In the implementation block
@property (assign) NSObject*<OS_xpc_object> activity;                                           //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) BOOL fetchedChatsDuringLastSync;                                   //@synthesize fetchedChatsDuringLastSync=_fetchedChatsDuringLastSync - In the implementation block
+(id)sharedInstance;
-(void)setRecordZoneManager:(IMDRecordZoneManager *)arg1 ;
-(id)init;
-(NSObject*<OS_xpc_object>)activity;
-(IMDChatRegistry *)chatRegistry;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(void)setChatRegistry:(IMDChatRegistry *)arg1 ;
-(long long)syncControllerRecordType;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_scheduleOperation:(id)arg1 ;
-(void)deleteChatZone;
-(IMDRecordZoneManager *)recordZoneManager;
-(void)dealloc;
-(id)_randomSalt;
-(void)anyChatExistsOnServerWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSyncTokenStore:(id)arg1 ;
-(void)clearLocalSyncState:(unsigned long long)arg1 ;
-(id)_recordKeyManagerSharedInstance;
-(IMDCKChatSyncCKOperationFactory *)CKOperationFactory;
-(void)_processRecordDeletion:(id)arg1 ;
-(void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id<IMDCKSyncTokenStore>)syncTokenStore;
-(void)setCKOperationFactory:(IMDCKChatSyncCKOperationFactory *)arg1 ;
-(void)setSyncTokenStore:(id<IMDCKSyncTokenStore>)arg1 ;
-(id)_changeTokenKey;
-(void)setLatestSyncToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)latestSyncToken;
-(void)deleteChatSyncToken;
-(BOOL)fetchedChatsDuringLastSync;
-(void)syncChatsWithType:(long long)arg1 withActivity:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)syncPendingDeletionWithCompletion:(/*^block*/id)arg1 ;
-(void)_migrateServerChangeToken;
-(CKRecord *)stingRayLockRecord;
-(CKRecord *)manateeLockRecord;
-(void)setStingRayLockRecord:(CKRecord *)arg1 ;
-(void)setManateeLockRecord:(CKRecord *)arg1 ;
-(void)setLockRecord:(id)arg1 isUsingStingRay:(BOOL)arg2 ;
-(void)_updateChatUsingCKRecord:(id)arg1 ;
-(void)_markChatAsDefferedForSyncingUsingRecord:(id)arg1 ;
-(void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2 isUsingStingRay:(BOOL)arg3 ;
-(unsigned long long)_numberOfChatsToWrite;
-(id)_copyChatsToUploadWithLimit:(unsigned long long)arg1 ;
-(void)_logGreenTeaLogsForChats:(id)arg1 ;
-(id)_newckRecordsFromChats:(id)arg1 ;
-(id)lockRecordForStingRay:(BOOL)arg1 ;
-(id)_generateLockRecord;
-(void)_writeDirtyChatsToCloudKitWithCompletion:(/*^block*/id)arg1 isUsingStingRay:(BOOL)arg2 ;
-(BOOL)_shouldResyncChatsForError:(id)arg1 ;
-(void)_writeCKRecordsToChatZone:(id)arg1 isUsingStingRay:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_chatZoneID;
-(unsigned long long)_numberOfChatsToFetch;
-(void)setFetchedChatsDuringLastSync:(BOOL)arg1 ;
-(void)_kickOffWriteOnCKQueueWithCompletion:(/*^block*/id)arg1 isUsingStingRay:(BOOL)arg2 ;
-(BOOL)_chatZoneCreated;
-(void)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(/*^block*/id)arg2 isUsingStingRay:(BOOL)arg3 ;
-(void)_clearStingRaySyncToken;
-(id)_fetchChatRecordOperation;
-(void)_processRecordChanged:(id)arg1 isUsingStingRay:(BOOL)arg2 ;
-(void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3 ;
-(void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(BOOL)arg4 error:(id)arg5 ;
-(void)_processFetchRecordChangesCompleted:(id)arg1 completion:(/*^block*/id)arg2 isUsingStingRay:(BOOL)arg3 syncType:(long long)arg4 ;
-(void)_anyChatExistsOnServerWithResultsLimit:(int)arg1 changeToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldMarkAllChatsAsNeedingSync;
-(void)_hasMarkedAllChatsAsNeedingSync;
-(void)__syncChatsWithCloudKit:(long long)arg1 attemptCount:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)_eligibleForTruthZone;
-(void)_syncChatsWithCloudKitWithCompletionType:(long long)arg1 syncChatsCompletionBlock:(/*^block*/id)arg2 ;
-(void)_needsToMarkAllChatsAsNeedingSync;
-(id)_copyRecordIDsToDelete;
-(void)_handleChatDeletionCompletionForRecordIDs:(id)arg1 error:(id)arg2 ;
-(void)_resetChatSyncStateForRecord:(id)arg1 ;
-(BOOL)_lockRecordHadConflict:(id)arg1 ;
-(CKRecord *)lockRecord;
-(void)setLockRecord:(CKRecord *)arg1 ;
@end

