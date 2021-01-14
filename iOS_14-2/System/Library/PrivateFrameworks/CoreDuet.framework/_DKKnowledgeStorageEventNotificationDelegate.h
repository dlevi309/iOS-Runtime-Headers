/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKKnowledgeStorageEventNotificationDelegate
@optional
-(void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
-(void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;

@end

