/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKResendSchedulerDelegate;
@class NNMKSyncController;

@interface NNMKResendScheduler : NSObject {

	unsigned long long _initialSyncResendInterval;
	id<NNMKResendSchedulerDelegate> _delegate;
	NNMKSyncController* _syncController;

}

@property (assign,nonatomic) unsigned long long initialSyncResendInterval;                 //@synthesize initialSyncResendInterval=_initialSyncResendInterval - In the implementation block
@property (assign,nonatomic,__weak) id<NNMKResendSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NNMKSyncController * syncController;                          //@synthesize syncController=_syncController - In the implementation block
-(NNMKSyncController *)syncController;
-(void)_failPendingComposedMessages;
-(void)handleIDSMessageSentSuccessfullyWithId:(id)arg1 ;
-(id<NNMKResendSchedulerDelegate>)delegate;
-(void)resendObjectsForIDSIdentifier:(id)arg1 ;
-(id)deviceRegistry;
-(void)setInitialSyncResendInterval:(unsigned long long)arg1 ;
-(id)objectIdsForPendingIDSIdentifier:(id)arg1 ;
-(void)deletePendingIDSMessagesForMailboxId:(id)arg1 ;
-(void)_resendObjectIds:(id)arg1 type:(id)arg2 resendInterval:(unsigned long long)arg3 idsIdentifier:(id)arg4 ;
-(void)setDelegate:(id<NNMKResendSchedulerDelegate>)arg1 ;
-(void)_executePendingResendsAndContentRequests;
-(void)resetInitialSyncResendInterval;
-(void)registerIDSIdentifier:(id)arg1 objectIds:(id)arg2 type:(id)arg3 resendInterval:(unsigned long long)arg4 ;
-(void)_scheduleIdsIdentifierForResend:(id)arg1 currentResendInterval:(unsigned long long)arg2 newResendInterval:(unsigned long long)arg3 errorCode:(long long)arg4 ;
-(void)_resendPendingMessageContentWithId:(id)arg1 sentBecauseUserRequested:(BOOL)arg2 idsIdentifier:(id)arg3 newResendInterval:(unsigned long long)arg4 ;
-(void)setSyncController:(NNMKSyncController *)arg1 ;
-(void)_resendInitialSyncWithIDSIdentifier:(id)arg1 newResendInterval:(unsigned long long)arg2 mailboxIds:(id)arg3 ;
-(void)_resendSendingProgressForComposedMessageWithId:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3 ;
-(void)_resendPendingMessagesWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3 ;
-(id)messageTypeForIDSIdentifier:(id)arg1 ;
-(void)handleIDSMessageFailedWithId:(id)arg1 errorCode:(long long)arg2 ;
-(void)forceRetryingAllPendingIDSMessages;
-(unsigned long long)initialSyncResendInterval;
-(void)_resendPendingAccountWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3 ;
@end

