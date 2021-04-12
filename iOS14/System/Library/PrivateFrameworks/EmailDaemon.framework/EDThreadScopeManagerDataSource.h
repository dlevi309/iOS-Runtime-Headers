/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDThreadScopeManagerDataSource
@required
-(BOOL)threadScopeManager:(id)arg1 mailboxScopeExists:(id)arg2;
-(void)threadScopeManager:(id)arg1 gatherStatisticsForThreadScopesWithDatabaseIDs:(id)arg2 block:(/*^block*/id)arg3;
-(BOOL)threadScopeManager:(id)arg1 evictThreadScopesWithDatabaseIDs:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(BOOL)threadScopeManager:(id)arg1 isValidMailboxObjectID:(id)arg2;
-(void)threadScopeManager:(id)arg1 populateThreadScopesWithBlock:(/*^block*/id)arg2;

@end

