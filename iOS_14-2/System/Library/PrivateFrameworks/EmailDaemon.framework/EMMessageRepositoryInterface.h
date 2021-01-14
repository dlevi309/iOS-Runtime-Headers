/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EMMessageRepositoryInterface <NSObject>
@required
-(void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)performCountQuery:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)loadOlderMessagesForMailboxes:(id)arg1;
-(void)performQuery:(id)arg1 withObserver:(id)arg2 observationIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)performMessageChangeAction:(id)arg1 requestID:(unsigned long long)arg2 returnUndoAction:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)messageListItemsForObjectIDs:(id)arg1 requestID:(unsigned long long)arg2 observationIdentifier:(id)arg3 loadSummaryForAdditionalObjectIDs:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)resetPrecomputedThreadScopesForMailboxScope:(id)arg1;
-(void)getCachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)predictMailboxForMovingMessages:(id)arg1 withObserver:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)messageObjectIDForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)messageObjectIDsForSearchableItemIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;

@end

