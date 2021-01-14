/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortrait/PPNamedEntityStore.h>
#import <libobjc.A.dylib/PPFeedbackProcessing.h>

@protocol OS_dispatch_queue;
@class _PASLock, PPLocalTopicStore, PPLocalContactStore, NSObject, NSCache, PPTrialWrapper, PPNamedEntityStorage;

@interface PPLocalNamedEntityStore : PPNamedEntityStore <PPFeedbackProcessing> {

	_PASLock* _lock;
	PPLocalTopicStore* _topicStoreForNamedEntityMapping;
	PPLocalContactStore* _contactStoreForMapsFeedback;
	AB _isCacheInvalidated;
	int _bundleIdBlocklistNotificationToken;
	NSObject*<OS_dispatch_queue> _mapsPrefetchQueue;
	NSCache* _modelCache;
	PPTrialWrapper* _trialWrapper;
	PPNamedEntityStorage* _storage;

}

@property (nonatomic,readonly) PPNamedEntityStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(id)defaultStore;
+(id)recordsForNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 ;
+(float)resolvedPerRecordDecayRateForFeatureProvider:(id)arg1 perRecordDecayRate:(float)arg2 ;
+(void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2 ;
-(BOOL)flushDonationsWithError:(id*)arg1 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)mapItemForPlaceName:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2 ;
-(id)_defaultScoredEntityFromRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 sourceStats:(id)arg5 decayedFeedbackCounts:(id)arg6 scoreInterpreter:(id)arg7 streamingScorer:(id*)arg8 ;
-(BOOL)_shouldIgnoreHomeOrWorkAddress:(id)arg1 ;
-(id)_feedbackItemToNamedEntityMapForFeedback:(id)arg1 error:(id*)arg2 ;
-(id)_getScoredItemWithFeaturesWithNamedEntity:(id)arg1 scoringDate:(id)arg2 excludingSourceBundleId:(id)arg3 scoreInterpreter:(id)arg4 error:(id*)arg5 ;
-(id)_mapsSearchQueryResultWithError:(id*)arg1 ;
-(id)_loadScoringMLModel;
-(BOOL)_unlimitedNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(id)init;
-(BOOL)monitorNamedEntityRecordChangesWithError:(id*)arg1 setup:(/*^block*/id)arg2 handler:(/*^block*/id)arg3 finish:(/*^block*/id)arg4 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)deleteAllNamedEntityFeedbackCountsOlderThanDate:(id)arg1 ;
-(id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 ;
-(PPNamedEntityStorage *)storage;
-(BOOL)_shouldUseScoringMLModel;
-(BOOL)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)namedEntityToMatchedStringMappingForNamedEntities:(id)arg1 timestamp:(double)arg2 error:(id*)arg3 ;
-(void)disableSyncForBundleIds:(id)arg1 ;
-(void)processfeedbackItems:(id)arg1 scoringDate:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 ;
-(BOOL)_shouldSuppressRepeatedImpressions:(id)arg1 ;
-(BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 error:(id*)arg6 ;
-(id)_getScoredItemWithFeaturesWithNamedEntity:(id)arg1 featureRedactor:(id)arg2 excludingSourceBundleId:(id)arg3 error:(id*)arg4 ;
-(id)getScoredNamedEntityFeaturesWithNamedEntity:(id)arg1 scoringDate:(id)arg2 excludingSourceBundleId:(id)arg3 decayRate:(double)arg4 error:(id*)arg5 strictFiltering:(BOOL)arg6 scoreInterpreter:(id)arg7 ;
-(BOOL)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)_registerMapsQueryPrefetching;
-(BOOL)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 clientProcessName:(id)arg3 ;
-(void)_logDifferentiallyPrivateTaggerExtractions:(id)arg1 ;
-(BOOL)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id*)arg2 ;
-(id)_coalesceScoredNamedEntities:(id)arg1 ;
-(id)_filterOutInvalidNamesFromEntities:(id)arg1 ;
-(id)scoredEntityFromRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 sourceStats:(id)arg5 decayedFeedbackCounts:(id)arg6 scoreInterpreter:(id)arg7 streamingScorer:(id*)arg8 mlModel:(id)arg9 ;
-(void)_petLoggingForQuery:(id)arg1 resultCount:(unsigned long long)arg2 clientProcessName:(id)arg3 hasError:(BOOL)arg4 ;
-(id)_feedbackItemsByItemString:(id)arg1 ;
-(void)_logDifferentiallyPrivateExtractionsWithDpCategory:(id)arg1 extractions:(id)arg2 ;
-(BOOL)_donateTopicsFromEntities:(id)arg1 source:(id)arg2 cloudSync:(BOOL)arg3 sentimentScore:(double)arg4 error:(id*)arg5 ;
-(BOOL)pruneOrphanedNamedEntityFeedbackCountsWithLimit:(long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(BOOL*)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(double)finalScoreFromRecordsUsingHybrid:(id)arg1 streamingScorer:(id)arg2 mlModel:(id)arg3 ;
-(BOOL)filterExistingNamedEntitiesWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(BOOL)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllNamedEntitiesOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)getScoredNamedEntityFeaturesWithNamedEntity:(id)arg1 excludingSourceBundleId:(id)arg2 decayRate:(double)arg3 error:(id*)arg4 ;
-(id)initWithStorage:(id)arg1 topicStoreForNamedEntityMapping:(id)arg2 contactStoreForMapsFeedback:(id)arg3 trialWrapper:(id)arg4 ;
-(id)_getScoredNamedEntityFeaturesForCoreMLFromIdentifier:(id)arg1 excludingSourceBundleId:(id)arg2 decayedFeedbackCounts:(id)arg3 featurizer:(id)arg4 error:(id*)arg5 ;
-(BOOL)_extractDonationsForFeedback:(id)arg1 pbFeedbackLog:(id)arg2 namedEntity:(id)arg3 error:(id*)arg4 ;
-(id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)_loadScoreInterpreter;
-(BOOL)_logFeedbackSessionsWithFeedback:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)_convertMapsContactFeedback:(id)arg1 ;
-(BOOL)_donateLocationNamedEntityToLocationStore:(id)arg1 source:(id)arg2 locationAlgorithm:(unsigned short)arg3 error:(id*)arg4 ;
@end

