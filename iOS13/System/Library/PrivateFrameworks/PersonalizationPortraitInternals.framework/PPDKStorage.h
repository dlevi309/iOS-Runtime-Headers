/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@interface PPDKStorage : NSObject
+(id)sharedInstance;
-(void)removeObserver:(id)arg1 ;
-(id)entityStream;
-(id)topicStream;
-(BOOL)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(id)tombstoneStream;
-(BOOL)saveEvents:(id)arg1 error:(id*)arg2 ;
-(unsigned)readBatchSize;
-(unsigned)topicWriteBatchSize;
-(double)topicWriteBatchInterval;
-(unsigned)namedEntityWriteBatchSize;
-(double)namedEntityWriteBatchInterval;
-(id)_readWriteKnowledgeStore;
-(BOOL)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 error:(id*)arg5 block:(/*^block*/id)arg6 ;
-(BOOL)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 readMetaData:(BOOL)arg5 error:(id*)arg6 block:(/*^block*/id)arg7 ;
-(BOOL)deleteEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAllEventsInEventStream:(id)arg1 matchingPredicate:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isFutureCompatibilityVersionAttachedToEvent:(id)arg1 ;
-(id)namedEntityRecordFromEvent:(id)arg1 ;
-(id)eventForNamedEntityRecord:(id)arg1 sourceDeviceID:(id)arg2 ;
-(id)topicRecordFromEvent:(id)arg1 ;
-(id)eventForTopicRecord:(id)arg1 sourceDeviceID:(id)arg2 ;
-(id)registerForNamedEntitiesRemoteAdditionWithBlock:(/*^block*/id)arg1 ;
-(id)registerForNamedEntitiesRemoteDeletionWithBlock:(/*^block*/id)arg1 ;
-(id)registerForTopicsRemoteAdditionWithBlock:(/*^block*/id)arg1 ;
-(id)registerForTopicsRemoteDeletionWithBlock:(/*^block*/id)arg1 ;
-(void)_registerForSyncNotifications;
@end

