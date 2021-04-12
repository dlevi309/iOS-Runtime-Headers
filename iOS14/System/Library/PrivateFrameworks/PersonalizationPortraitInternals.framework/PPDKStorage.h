/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_semaphore;
@class _PASLock, NSObject;

@interface PPDKStorage : NSObject {

	_PASLock* _entityLock;
	_PASLock* _topicLock;
	NSObject*<OS_dispatch_semaphore> _entityWriteSem;
	NSObject*<OS_dispatch_semaphore> _topicWriteSem;

}

@property (nonatomic,readonly) double topicStreamCooldownTimeRemaining; 
@property (nonatomic,readonly) double entityStreamCooldownTimeRemaining; 
+(id)sharedInstance;
-(double)topicStreamCooldownTimeRemaining;
-(double)topicWriteBatchInterval;
-(id)_readWriteKnowledgeStore;
-(unsigned)topicWriteBatchSize;
-(id)registerForNamedEntitiesRemoteAdditionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_saveTopicEvents:(id)arg1 ;
-(double)namedEntityWriteBatchInterval;
-(id)namedEntityRecordFromEvent:(id)arg1 ;
-(BOOL)deleteEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 readMetaData:(BOOL)arg5 remoteOnly:(BOOL)arg6 error:(id*)arg7 block:(/*^block*/id)arg8 ;
-(id)topicRecordFromEvent:(id)arg1 ;
-(id)topicStream;
-(BOOL)saveEvents:(id)arg1 stream:(id)arg2 maxRetries:(long long)arg3 retryInterval:(double)arg4 shouldContinueBlock:(/*^block*/id)arg5 ;
-(id)tombstoneStream;
-(unsigned)namedEntityWriteBatchSize;
-(BOOL)_saveTopicEvents:(id)arg1 maxRetries:(long long)arg2 retryInterval:(double)arg3 shouldContinueBlock:(/*^block*/id)arg4 ;
-(unsigned)readBatchSize;
-(id)eventForNamedEntityRecord:(id)arg1 sourceDeviceID:(id)arg2 ;
-(BOOL)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_saveEntityEvents:(id)arg1 ;
-(id)entityStream;
-(double)entityStreamCooldownTimeRemaining;
-(BOOL)_saveEntityEvents:(id)arg1 maxRetries:(long long)arg2 retryInterval:(double)arg3 shouldContinueBlock:(/*^block*/id)arg4 ;
-(id)eventForTopicRecord:(id)arg1 sourceDeviceID:(id)arg2 ;
-(id)registerForTopicsRemoteAdditionWithBlock:(/*^block*/id)arg1 ;
-(id)_init;
-(id)registerForTopicsRemoteDeletionWithBlock:(/*^block*/id)arg1 ;
-(id)registerForNamedEntitiesRemoteDeletionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)deleteAllEventsInEventStream:(id)arg1 matchingPredicate:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isFutureCompatibilityVersionAttachedToEvent:(id)arg1 ;
-(void)_registerForSyncNotifications;
-(BOOL)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 error:(id*)arg5 block:(/*^block*/id)arg6 ;
@end

