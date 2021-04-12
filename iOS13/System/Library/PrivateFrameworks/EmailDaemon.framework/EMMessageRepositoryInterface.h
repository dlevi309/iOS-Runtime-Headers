/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EMMessageRepositoryInterface <NSObject>
@required
-(void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;
-(void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)performCountQuery:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performQuery:(id)arg1 withObserver:(id)arg2 observationIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)messageListItemsForObjectIDs:(id)arg1 requestID:(unsigned long long)arg2 observationIdentifier:(id)arg3 loadSummaryForAdditionalObjectIDs:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)performMessageChangeAction:(id)arg1 requestID:(unsigned long long)arg2 returnUndoAction:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)resetPrecomputedThreadScopesForMailboxScope:(id)arg1;
-(void)getCachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)predictMailboxForMovingMessages:(id)arg1 withObserver:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)loadOlderMessagesForMailboxes:(id)arg1;

@end

