/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class IMDReplayStorageController, NSDictionary, IMDReplayStorageIterationContext;

@interface IMDReplayController : NSObject {

	IMDReplayStorageController* _suspendedStorageController;
	BOOL _isRecordingReplayDB;
	NSDictionary* _syncTaskByServiceName;
	IMDReplayStorageIterationContext* _heldDeletionContext;
	/*^block*/id _automationCompletionBlock;
	IMDReplayStorageController* _storageController;

}

@property (nonatomic,retain) NSDictionary * syncTaskByServiceName;                                //@synthesize syncTaskByServiceName=_syncTaskByServiceName - In the implementation block
@property (nonatomic,retain) IMDReplayStorageIterationContext * heldDeletionContext;              //@synthesize heldDeletionContext=_heldDeletionContext - In the implementation block
@property (nonatomic,copy) id automationCompletionBlock;                                          //@synthesize automationCompletionBlock=_automationCompletionBlock - In the implementation block
@property (nonatomic,retain) IMDReplayStorageController * storageController;                      //@synthesize storageController=_storageController - In the implementation block
@property (nonatomic,readonly) BOOL isRecordingReplayDB;                                          //@synthesize isRecordingReplayDB=_isRecordingReplayDB - In the implementation block
+(long long)batchSize;
+(id)sharedInstance;
-(id)init;
-(IMDReplayStorageController *)storageController;
-(void)setStorageController:(IMDReplayStorageController *)arg1 ;
-(void)dealloc;
-(BOOL)isRecordingReplayDB;
-(BOOL)storeMessage:(id)arg1 type:(unsigned char)arg2 error:(id*)arg3 ;
-(void)scheduleSyncTaskForServices:(id)arg1 ;
-(void)replayMessages;
-(void)_fetchNexBatchOfMessagesAndReplay;
-(void)setHeldDeletionContext:(IMDReplayStorageIterationContext *)arg1 ;
-(void)setSyncTaskByServiceName:(NSDictionary *)arg1 ;
-(IMDReplayStorageIterationContext *)heldDeletionContext;
-(id)automationCompletionBlock;
-(void)setAutomationCompletionBlock:(id)arg1 ;
-(void)_processBatch:(id)arg1 ;
-(void)endRecordingReplayDatabase;
-(id)initWithStorageController:(id)arg1 ;
-(void)deleteReplayDBIfNotUnderFirstUnlock;
-(void)overrideStorageControllerWithDatabaseFromPath:(id)arg1 ;
-(void)restoreDefaultStoreControllerInstance;
-(void)startRecordingReplayDatabase;
-(void)replayMessagesWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)syncTaskByServiceName;
@end

