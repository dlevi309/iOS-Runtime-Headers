/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, _PASNotificationToken, NSCache, PPTrialWrapper;

@interface PPConfiguration : NSObject {

	_PASLock* _lock;
	_PASNotificationToken* _assetUpdateHandlerToken;
	NSCache* _cachedAlgorithms;
	PPTrialWrapper* _trialWrapper;

}
+(id)sharedInstance;
+(void)reload;
-(BOOL)topicScoringUsesCoreML;
-(double)nonReaderTextWeight;
-(double)locationDecayHalfLifeSeconds;
-(BOOL)flattenNamedEntitiesForCoreML;
-(float)feedbackSessionLogsSamplingRate;
-(BOOL)portraitMusicDataCollectionCollectNonAMPNowPlaying;
-(id)_algorithmsToDelete:(id)arg1 bundleId:(id)arg2 customRules:(id)arg3 ;
-(double)portraitAnalyticsTopicsSamplingRate;
-(id)availablePortraitVariantNames;
-(BOOL)use2StageScoreInterpreterForLocationScoring;
-(float)scoreThresholdForNamedEntity;
-(BOOL)notificationExtractionEnabled;
-(BOOL)safariDataDetectorsEnabledForHighMemoryDevices;
-(BOOL)use2StageScoreInterpreterForNEScoring;
-(float)recordSourceNonContactsInitialScore;
-(unsigned)queryTimeNextToMinutes;
-(int)maxNumberNamedEntities;
-(void)_loadNamedEntitiesConfigParams;
-(unsigned)mapsSearchQueryLimit;
-(float)remoteTopicsMultiplier;
-(id)portraitMusicDataCollectionAMPBundleIds;
-(double)halfValuePosition;
-(id)dynamicEntityCategories;
-(double)routineExtractionScoreCountWeight;
-(unsigned char)peopleSuggesterMax;
-(BOOL)isMultilingual;
-(void)_loadTopicsConfigParamsWithGuardedData:(id)arg1 ;
-(unsigned char)nextEventsFuzzMinutes;
-(void)_loadContactsConfigParams;
-(void)_loadGlobalConfigParamsWithGuardedData:(id)arg1 ;
-(id)hyperparametersForMappingId:(id)arg1 ;
-(int)queryTimeNextFromMinutes;
-(id)_algorithmsForNode:(id)arg1 bundleId:(id)arg2 customRules:(id)arg3 ;
-(double)portraitMusicDataCollectionSamplingRateForAMP;
-(id)initWithTrialWrapper:(id)arg1 ;
-(id)topicCalibrationTrie;
-(void)_loadQuickTypeConfigParams;
-(id)naturalPortraitVariantName;
-(double)mapsSearchQueryFromDateInterval;
-(void)_loadConfigParams;
-(void)_loadGlobalConfigParams;
-(int)maxNumberMappedTopics;
-(BOOL)topicMappingUsesCoreML;
-(void)_loadQuickTypeConfigParamsWithGuardedData:(id)arg1 ;
-(double)topicDecayHalfLifeSeconds;
-(BOOL)topicScoringUsesHybrid;
-(int)portraitMusicDataCollectionMaximumRecordsPerType;
-(float)feedbackSessionLogsExtractionsSamplingRate;
-(float)scoreThresholdForLocation;
-(BOOL)flattenTopicsForCoreML;
-(double)routineExtractionScoreDecayHalfLifeDays;
-(float)topicsMultiplierForBundleId:(id)arg1 algorithm:(unsigned long long)arg2 ;
-(BOOL)locationScoringUsesHybrid;
-(double)topicMappingCoreMLThreshold;
-(int)portraitAnalyticsGeohashLength;
-(double)routineExtractionScoreDurationWeight;
-(BOOL)use2StageScoreInterpreterForTPScoring;
-(id)contactsLabelScoringMap;
-(void)_loadLocationsConfigParams;
-(id)_mapAlgorithmNamesToNumbers:(id)arg1 domain:(unsigned char)arg2 ;
-(int)portraitAnalyticsMaximumNumberOfRecords;
-(BOOL)topicFeedbackUsesCoreML;
-(id)feedbackSessionLogsSamplingRateOverrides;
-(BOOL)locationFeedbackUsesCoreML;
-(BOOL)safariDonationTitleExtractionEnabled;
-(unsigned)navigationMinimumDistanceInMeters;
-(void)_loadContactsConfigParamsWithGuardedData:(id)arg1 ;
-(int)feedbackSessionLogsGeohashLength;
-(unsigned)namedEntityLoadAndMonitorInitialLoadLimit;
-(double)decayedFeedbackCountsHalfLifeDays;
-(unsigned)queryTimeOtherToMinutes;
-(BOOL)highLevelTopicExtractionEnabled;
-(unsigned char)customTaggerMaxTokenCount;
-(id)differentiallyPrivateEntityLogLevels;
-(void)_loadLocationsConfigParamsWithGuardedData:(id)arg1 ;
-(double)portraitMusicDataCollectionSamplingRateForCTS;
-(void)_loadTopicsConfigParams;
-(id)portraitVariantName;
-(double)namedEntityDecayHalfLifeSeconds;
-(double)portraitAnalyticsSamplingRate;
-(float)recordSourceContactsInitialScore;
-(id)engagementKValues;
-(BOOL)namedEntityScoringUsesHybrid;
-(BOOL)namedEntityFeedbackUsesCoreML;
-(void)_loadNamedEntitiesConfigParamsWithGuardedData:(id)arg1 ;
-(float)scoreThresholdForTopic;
-(id)extractionAlgorithmsForBundleId:(id)arg1 sourceLanguage:(id)arg2 conservative:(BOOL)arg3 domain:(unsigned char)arg4 ;
-(BOOL)namedEntityScoringUsesCoreML;
-(double)navigationMinimumTimeInterval;
-(BOOL)locationScoringUsesCoreML;
@end

