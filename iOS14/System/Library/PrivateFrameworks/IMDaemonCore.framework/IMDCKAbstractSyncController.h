/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IMDCKSyncState *)syncState;
-(id<IMDCKAbstractSyncControllerDelegate>)delegate;
-(id)syncStateDebuggingInfo:(id)arg1 ;
-(long long)syncControllerRecordType;
-(void)setDelegate:(id<IMDCKAbstractSyncControllerDelegate>)arg1 ;
-(BOOL)isSyncing;
-(id)ckUtilities;
-(void)setIsSyncing:(BOOL)arg1 ;
-(void)clearLocalSyncState:(unsigned long long)arg1 ;
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
@end

