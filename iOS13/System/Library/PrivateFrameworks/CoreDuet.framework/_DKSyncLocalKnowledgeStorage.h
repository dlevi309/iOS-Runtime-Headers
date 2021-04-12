/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSyncLocalKnowledgeStorage.h>

@protocol _DKSyncLocalKnowledgeStorage
@required
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id*)arg5;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6;
-(id)tombstonesSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5;
-(id)additionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3;
-(id)deletionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3;
-(id)sortedSyncDownWindowsOverlappingBetweenDate:(id)arg1 andDate:(id)arg2 peer:(id)arg3 error:(id*)arg4;
-(BOOL)saveSyncedDownWindows:(id)arg1 peer:(id)arg2 transportName:(id)arg3 error:(id*)arg4;
-(id)lastSyncDownDeletionDateForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3;
-(void)setLastSyncDownDeletionDate:(id)arg1 previousDate:(id)arg2 forPeer:(id)arg3 transportName:(id)arg4 error:(id*)arg5;
-(BOOL)saveEvents:(id)arg1 error:(id*)arg2;
-(BOOL)deleteEventsWithEventIDs:(id)arg1 error:(id*)arg2;

@end


@class _DKKnowledgeStorage;

@interface _DKSyncLocalKnowledgeStorage : NSObject <_DKSyncLocalKnowledgeStorage> {

	_DKKnowledgeStorage* _storage;

}

@property (nonatomic,retain) _DKKnowledgeStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(void)_updateEventStatsWithFetchEventsTotal:(unsigned long long)arg1 streamNameCounts:(id)arg2 ;
+(void)_updateEventStatsWithFetchTombstonesTotal:(unsigned long long)arg1 streamNameCounts:(id)arg2 ;
-(_DKKnowledgeStorage *)storage;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(id)initWithKnowledgeStorage:(id)arg1 ;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id*)arg5 ;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6 ;
-(id)tombstonesSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5 ;
-(id)additionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3 ;
-(id)deletionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3 ;
-(id)syncHistoryForPeer:(id)arg1 streamName:(id)arg2 transportName:(id)arg3 type:(id)arg4 error:(id*)arg5 ;
-(id)sortedSyncDownWindowsOverlappingBetweenDate:(id)arg1 andDate:(id)arg2 peer:(id)arg3 error:(id*)arg4 ;
-(BOOL)saveSyncedDownWindows:(id)arg1 peer:(id)arg2 transportName:(id)arg3 error:(id*)arg4 ;
-(id)lastSyncDownDeletionDateForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3 ;
-(void)setLastSyncDownDeletionDate:(id)arg1 previousDate:(id)arg2 forPeer:(id)arg3 transportName:(id)arg4 error:(id*)arg5 ;
-(BOOL)saveEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteEventsWithEventIDs:(id)arg1 error:(id*)arg2 ;
@end

