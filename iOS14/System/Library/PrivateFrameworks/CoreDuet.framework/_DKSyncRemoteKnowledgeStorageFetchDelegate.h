/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

@class _DKSyncType;


@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate <_DKSyncRemoteStorageDelegate>
@property (nonatomic,readonly) _DKSyncType * syncType; 
@required
-(_DKSyncType *)syncType;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id*)arg5;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6;
-(id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5;

@end

