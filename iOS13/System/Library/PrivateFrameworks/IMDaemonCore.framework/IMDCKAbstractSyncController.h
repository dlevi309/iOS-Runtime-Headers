/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMDCKAbstractSyncControllerDelegate;
@class IMDCKSyncState;

@interface IMDCKAbstractSyncController : NSObject {

	BOOL _isSyncing;
	id<IMDCKAbstractSyncControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isSyncing;                                      //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isUsingStingRay; 
@property (nonatomic,readonly) IMDCKSyncState * syncState; 
@property (__weak) id<IMDCKAbstractSyncControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IMDCKAbstractSyncControllerDelegate>)delegate;
-(void)setDelegate:(id<IMDCKAbstractSyncControllerDelegate>)arg1 ;
-(BOOL)isSyncing;
-(IMDCKSyncState *)syncState;
-(long long)syncControllerRecordType;
-(void)setIsSyncing:(BOOL)arg1 ;
-(void)clearLocalSyncState:(unsigned long long)arg1 ;
-(id)ckUtilities;
-(void)setBroadcastedSyncStateToUploading;
-(BOOL)isUsingStingRay;
-(BOOL)_fetchedAllChangesFromCloudKit;
-(void)setBroadcastedSyncStateToDownloading;
-(void)syncBatchCompleted:(unsigned long long)arg1 ;
-(void)setBroadcastedSyncStateToDeleting;
-(void)setBroadcastedSyncStateStateToStarting;
-(void)setBroadcastedSyncStateStateToFinished;
-(void)addSyncDebuggingInfoToDictionary:(id)arg1 ;
-(void)setBroadcastedSyncStateToStartingPeriodicSync;
-(void)setBroadcastedSyncStateToStartingInitialSync;
-(id)syncStateDebuggingInfo:(id)arg1 ;
@end

