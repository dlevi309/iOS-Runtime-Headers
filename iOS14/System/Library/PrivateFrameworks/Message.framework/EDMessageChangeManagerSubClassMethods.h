/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol EDMessageChangeManagerSubClassMethods <NSObject>
@required
-(id)messageForDatabaseID:(long long)arg1;
-(long long)mailboxDatabaseIDForURL:(id)arg1;
-(id)accountForMailboxURL:(id)arg1;
-(id)messagesForRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
-(BOOL)persistNewMessages:(id)arg1 mailboxURL:(id)arg2 oldMessagesByNewMessage:(id)arg3 fromSyncing:(BOOL)arg4;
-(void)setData:(id)arg1 onMessage:(id)arg2;
-(id)iterateMessagesInMailboxURLs:(id)arg1 excludingMessages:(id)arg2 batchSize:(unsigned long long)arg3 returnMessagesForFlagChange:(id)arg4 handler:(/*^block*/id)arg5;
-(void)deletePersistedMessages:(id)arg1;
-(BOOL)haveCompleteMIMEForMessage:(id)arg1;
-(id)applyFlagChange:(id)arg1 toMessagesInDatabase:(id)arg2;
-(void)resetStatusCountsForMailboxWithURL:(id)arg1;
-(id)addLabels:(id)arg1 removeLabels:(id)arg2 toMessagesInDatabase:(id)arg3;
-(void)setRemoteID:(id)arg1 onMessageWithDatabaseID:(long long)arg2;
-(void)checkForNewActionsInMailboxID:(long long)arg1;
-(void)actionHasChangedAccount:(id)arg1;
-(void)displayErrorForTransferAction:(id)arg1 withResults:(id)arg2;
-(void)messageWasAppended:(id)arg1;
-(BOOL)mailboxIsAllMail:(id)arg1;
-(BOOL)mailboxPartOfAllMail:(id)arg1;

@end
