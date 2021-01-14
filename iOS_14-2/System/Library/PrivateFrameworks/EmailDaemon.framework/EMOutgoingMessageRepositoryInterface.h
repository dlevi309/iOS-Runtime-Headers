/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EMOutgoingMessageRepositoryInterface <NSObject>
@required
-(void)suspendDeliveryQueue;
-(void)cancelObservation:(id)arg1;
-(void)saveDraftMessage:(id)arg1 mailboxID:(id)arg2 previousDraftObjectID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deleteDraftsInMailboxID:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
-(void)deliverMessage:(id)arg1 usingMailDrop:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)outboxContainsMessageFromAccountObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)isProcessingWithCompletion:(/*^block*/id)arg1;
-(void)numberOfPendingMessagesWithCompletion:(/*^block*/id)arg1;
-(void)startObservingPendingMessageChangesWithChangeObserver:(id)arg1 observationIdentifier:(id)arg2;
-(void)resumeDeliveryQueue;
-(void)processAllQueuedMessages;

@end

