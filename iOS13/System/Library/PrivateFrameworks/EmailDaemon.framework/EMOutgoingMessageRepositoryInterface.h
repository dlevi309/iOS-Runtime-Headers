/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EMOutgoingMessageRepositoryInterface <NSObject>
@required
-(void)saveDraftMessage:(id)arg1 mailboxID:(id)arg2 previousDraftObjectID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deleteDraftsInMailboxID:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
-(void)deliverMessage:(id)arg1 usingMailDrop:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)outboxContainsMessageFromAccountObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)suspendDeliveryQueue;
-(void)resumeDeliveryQueue;
-(void)processAllQueuedMessages;
-(void)isProcessingWithCompletion:(/*^block*/id)arg1;
-(void)numberOfPendingMessagesWithCompletion:(/*^block*/id)arg1;

@end

