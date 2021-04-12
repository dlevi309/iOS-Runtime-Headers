/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDThreadScopeManagerDataSource
@required
-(void)threadScopeManager:(id)arg1 gatherStatisticsForThreadScopesWithDatabaseIDs:(id)arg2 block:(/*^block*/id)arg3;
-(BOOL)threadScopeManager:(id)arg1 mailboxScopeExists:(id)arg2;
-(BOOL)threadScopeManager:(id)arg1 isValidMailboxObjectID:(id)arg2;
-(void)threadScopeManager:(id)arg1 populateThreadScopesWithBlock:(/*^block*/id)arg2;
-(BOOL)threadScopeManager:(id)arg1 evictThreadScopesWithDatabaseIDs:(id)arg2 completionBlock:(/*^block*/id)arg3;

@end

