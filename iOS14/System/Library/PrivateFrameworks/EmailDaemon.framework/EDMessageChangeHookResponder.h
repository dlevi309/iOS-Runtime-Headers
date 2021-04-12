/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDMessageChangeHookResponder <NSObject>
@optional
-(void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
-(void)persistenceIsChangingFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
-(void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
-(void)persistenceWillChangeConversationID:(long long)arg1 messages:(id)arg2;
-(void)persistenceWillAddMessage:(id)arg1 fromExistingMessage:(BOOL)arg2;
-(void)persistenceWillBeginUpdates;
-(void)persistenceDidFinishUpdates;
-(void)persistenceDidReconcileJournaledMessages:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceDidUpdateData:(id)arg1 message:(id)arg2;
-(void)persistenceDidAddLabels:(id)arg1 removeLabels:(id)arg2 messages:(id)arg3 generationWindow:(id)arg4;
-(void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
-(void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(id)arg3;
-(void)persistenceIsChangingConversationID:(long long)arg1 messages:(id)arg2 generationWindow:(id)arg3;
-(void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
-(void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceWillTransferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(BOOL)arg4;
-(void)persistenceIsDeletingMessages:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceIsDeletingAllMessagesInMailboxWithURL:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceIsAddingMessages:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3;

@end

