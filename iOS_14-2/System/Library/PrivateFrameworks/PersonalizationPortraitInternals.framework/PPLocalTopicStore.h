/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortrait/PPTopicStore.h>
#import <libobjc.A.dylib/PPFeedbackProcessing.h>

@class _PASLock, NSCache, PPTrialWrapper, PPTopicStorage;

@interface PPLocalTopicStore : PPTopicStore <PPFeedbackProcessing> {

	_PASLock* _lock;
	NSCache* _modelCache;
	PPTrialWrapper* _trialWrapper;
	PPTopicStorage* _storage;

}

@property (nonatomic,readonly) PPTopicStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(id)defaultStore;
+(id)recordsForTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 ;
+(float)resolvedPerRecordDecayRateForFeatureProvider:(id)arg1 perRecordDecayRate:(float)arg2 ;
+(id)calibrateScoredTopic:(id)arg1 calibrationTrie:(id)arg2 ;
+(float)resolvedPerRecordDecayRateForRecord:(id)arg1 perRecordDecayRate:(float)arg2 ;
+(id)aggregateRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 ;
+(void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2 ;
-(BOOL)flushDonationsWithError:(id*)arg1 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)scoreTopics:(id)arg1 scoringDate:(id)arg2 decayRate:(double)arg3 strictFiltering:(BOOL)arg4 sourceStats:(id)arg5 decayedFeedbackCounts:(id)arg6 scoreInterpreter:(id)arg7 streamingScorer:(id*)arg8 mlModel:(id)arg9 ;
-(id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 ;
-(BOOL)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 error:(id*)arg7 ;
-(id)initWithStorage:(id)arg1 trialWrapper:(id)arg2 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(id)_loadScoringMLModel;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 clientProcessName:(id)arg4 block:(/*^block*/id)arg5 ;
-(id)_defaultScoresForTopicMapping:(id)arg1 query:(id)arg2 clientProcessName:(id)arg3 error:(id*)arg4 ;
-(BOOL)iterTopicRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2 clientProcessName:(id)arg3 ;
-(void)_petLoggingForMappedTopicQuery:(id)arg1 mappingId:(id)arg2 count:(unsigned long long)arg3 clientProcessName:(id)arg4 hasError:(BOOL)arg5 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)init;
-(id)topicRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)topicExtractionsFromText:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAllTopicFeedbackCountsOlderThanDate:(id)arg1 ;
-(PPTopicStorage *)storage;
-(BOOL)_shouldUseScoringMLModel;
-(void)logDonationErrorForReason:(long long)arg1 errorCode:(unsigned long long)arg2 source:(id)arg3 ;
-(id)_dpLoggingKeyForMappingId:(id)arg1 ;
-(void)_petLoggingForQuery:(id)arg1 count:(unsigned long long)arg2 clientProcessName:(id)arg3 hasError:(BOOL)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 algorithm:(unsigned long long)arg3 olderThan:(id)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(void)_processPortraitTopicPendingFeedback:(id)arg1 scoringDate:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 ;
-(id)_blockIneligibleScoredTopics:(id)arg1 ;
-(id)_getScoredTopicFeaturesForCoreMLFromIdentifier:(id)arg1 scoringDate:(id)arg2 excludingSourceBundleId:(id)arg3 decayedFeedbackCounts:(id)arg4 featurizer:(id)arg5 error:(id*)arg6 ;
-(void)disableSyncForBundleIds:(id)arg1 ;
-(void)processfeedbackItems:(id)arg1 scoringDate:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 ;
-(BOOL)_unlimitedTopicRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)_defaultScoreTopics:(id)arg1 scoringDate:(id)arg2 decayRate:(double)arg3 strictFiltering:(BOOL)arg4 sourceStats:(id)arg5 decayedFeedbackCounts:(id)arg6 scoreInterpreter:(id)arg7 streamingScorer:(id*)arg8 ;
-(BOOL)pruneOrphanedTopicFeedbackCountsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(BOOL*)arg4 ;
-(BOOL)_defaultIterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 clientProcessName:(id)arg4 block:(/*^block*/id)arg5 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg1 algorithm:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)topicExtractionsFromText:(id)arg1 clientProcessName:(id)arg2 error:(id*)arg3 ;
-(id)getScoredTopicsFeaturesWithTopicId:(id)arg1 scoringDate:(id)arg2 excludingSourceBundleId:(id)arg3 decayRate:(double)arg4 error:(id*)arg5 strictFiltering:(BOOL)arg6 scoreInterpreter:(id)arg7 ;
-(BOOL)_isTopicInPortraitDomain:(id)arg1 ;
-(id)_feedbackItemsByItemString:(id)arg1 ;
-(void)_logDonationForTopics:(id)arg1 bundleId:(id)arg2 algorithm:(unsigned long long)arg3 groupId:(id)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned long long)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(id)_coalesceScoredTopics:(id)arg1 exactMatchesInSourceText:(id)arg2 ;
-(double)finalScoreFromRecordsUsingHybrid:(id)arg1 streamingScorer:(id)arg2 mlModel:(id)arg3 ;
-(void)_dpLoggingForMappingId:(id)arg1 mappedTopics:(id)arg2 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned long long)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(id)_unmappedQIDsToFeedbackTypeCounts:(id)arg1 mappingId:(id)arg2 ;
-(id)_coalesceScoredTopics:(id)arg1 ;
-(id)_filterBlockedScoredTopicsAndExactMatches:(id)arg1 ;
-(void)_blockTopicsInPlace:(id)arg1 ;
-(void)_processMappedTopicPendingFeedback:(id)arg1 scoringDate:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 ;
-(id)_topicTransformForId:(id)arg1 ;
-(id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 clientProcessName:(id)arg4 ;
-(void)_mappedTopicsFilterPendingFeedbackItems:(id)arg1 scoringDate:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 algorithm:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllTopicsOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)_loadScoreInterpreter;
-(BOOL)_logFeedbackSessionsWithFeedback:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterScoredTopicsWithQuery:(id)arg1 error:(id*)arg2 clientProcessName:(id)arg3 block:(/*^block*/id)arg4 ;
@end

