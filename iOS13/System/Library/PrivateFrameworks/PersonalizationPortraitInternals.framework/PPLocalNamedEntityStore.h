/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortrait/PPNamedEntityStore.h>
#import <libobjc.A.dylib/PPFeedbackProcessing.h>

@class _PASLock, PPLocalTopicStore, _PASNotificationToken, PPMNamedEntitiesDonation, PPMObjectsDeletion, PPMFeedbackRegistered, PPM2FeedbackPortraitRegistered, PPNamedEntityStorage;

@interface PPLocalNamedEntityStore : PPNamedEntityStore <PPFeedbackProcessing> {

	_PASLock* _lock;
	PPLocalTopicStore* _topicStoreForNamedEntityMapping;
	AB _isCacheInvalidated;
	int _bundleIdBlacklistNotificationToken;
	_PASNotificationToken* _assetUpdateNotificationToken;
	PPMNamedEntitiesDonation* _donationTracker;
	PPMObjectsDeletion* _deletionTracker;
	PPMFeedbackRegistered* _feedbackTracker;
	PPM2FeedbackPortraitRegistered* _feedbackTracker2;
	PPNamedEntityStorage* _storage;

}

@property (nonatomic,readonly) PPNamedEntityStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(id)defaultStore;
+(id)recordsForNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 ;
+(id)_aggregateRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 ;
+(id)ppFeedbackItemToPPPBFeedbackItem:(id)arg1 ;
+(BOOL)_yesWithProbability:(double)arg1 ;
+(void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2 ;
+(id)scoredEntityFromRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 sourceStats:(id)arg5 scoreInterpreter:(id)arg6 ;
+(id)_loadScoreInterpreter;
+(void)_filterBlacklistedNamedEntityRecords:(id)arg1 ;
+(float)resolvedPerRecordDecayRateForRecord:(id)arg1 perRecordDecayRate:(float)arg2 ;
-(id)init;
-(void)dealloc;
-(PPNamedEntityStorage *)storage;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 error:(id*)arg6 ;
-(BOOL)flushDonationsWithError:(id*)arg1 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3 ;
-(id)mapItemForPlaceName:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id*)arg4 ;
-(BOOL)_shouldSuppressRepeatedImpressions:(id)arg1 ;
-(void)disableSyncForBundleIds:(id)arg1 ;
-(void)processFeedback:(id)arg1 ;
-(id)initWithStorage:(id)arg1 topicStoreForNamedEntityMapping:(id)arg2 ;
-(BOOL)_shouldIgnoreHomeOrWorkAddress:(id)arg1 ;
-(BOOL)monitorNamedEntityRecordChangesWithError:(id*)arg1 setup:(/*^block*/id)arg2 handler:(/*^block*/id)arg3 finish:(/*^block*/id)arg4 ;
-(id)sourceStatsExcludedAlgorithms:(id)arg1 ;
-(BOOL)_unlimitedNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)_petLoggingForQuery:(id)arg1 resultCount:(unsigned long long)arg2 clientProcessName:(id)arg3 hasError:(BOOL)arg4 ;
-(id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 clientProcessName:(id)arg3 ;
-(id)_coalesceScoredNamedEntities:(id)arg1 ;
-(id)_filterBlacklistedScoredNamedEntities:(id)arg1 ;
-(id)_filterOutInvalidNamesFromEntities:(id)arg1 ;
-(BOOL)_donateTopicsFromEntities:(id)arg1 source:(id)arg2 cloudSync:(BOOL)arg3 sentimentScore:(double)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllNamedEntitiesOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)_donateLocationNamedEntityToLocationStore:(id)arg1 source:(id)arg2 locationAlgorithm:(unsigned short)arg3 error:(id*)arg4 ;
-(id)namedEntityToMatchedStringMappingForNamedEntities:(id)arg1 timestamp:(double)arg2 error:(id*)arg3 ;
-(id)_feedbackItemToNamedEntityMapForFeedback:(id)arg1 error:(id*)arg2 ;
-(BOOL)_logFeedbackSessionsWithFeedback:(id)arg1 error:(id*)arg2 ;
-(id)getScoredNamedEntityFeaturesWithNamedEntity:(id)arg1 excludingSourceBundleId:(id)arg2 decayRate:(double)arg3 error:(id*)arg4 strictFiltering:(BOOL)arg5 scoreInterpreter:(id)arg6 ;
-(void)_registerMapsQueryPrefetching;
-(id)_mapsSearchQueryResultWithError:(id*)arg1 ;
@end

