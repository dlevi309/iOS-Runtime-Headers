/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSArray, NSString, NSDictionary, _PASCFBurstTrie;

@interface PPConfigurationGuardedData : NSObject {

	float remoteTopicsMultiplier;
	double halfValuePosition;
	double nonReaderTextWeight;
	double analyticsSamplingRate;
	double musicDataCollectionSamplingRateForCTS;
	double musicDataCollectionSamplingRateForAMP;
	int musicDataCollectionMaximumRecordsPerType;
	BOOL musicDataCollectionCollectNonAMPNowPlaying;
	NSArray* musicDataCollectionAMPBundleIds;
	NSString* variantName;
	NSString* naturalVariantName;
	NSArray* availableVariantNames;
	NSDictionary* dynamicEntityCategories;
	NSDictionary* differentiallyPrivateEntityLogLevels;
	NSDictionary* topicsSourceMultiplier;
	NSDictionary* topicsAlgorithmMultiplier;
	NSDictionary* namedEntityAlgorithmConfiguration;
	NSDictionary* topicAlgorithmConfiguration;
	NSDictionary* locationAlgorithmConfiguration;
	_PASCFBurstTrie* topicCalibration;
	BOOL highLevelTopicExtractionEnabled;
	BOOL safariDonationTitleExtractionEnabled;
	BOOL safariDataDetectorsEnabledForHighMemoryDevices;
	float scoreThresholdForNamedEntity;
	float scoreThresholdForTopic;
	float scoreThresholdForLocation;
	float feedbackSessionLogsSamplingRate;
	NSDictionary* feedbackSessionLogsSamplingRateOverrides;
	float feedbackSessionLogsExtractionsSamplingRate;
	int feedbackSessionLogsGeohashLength;
	double analyticsTopicsSamplingRate;
	int analyticsMaximumNumberOfRecords;
	int analyticsGeohashLength;
	double topicDecayHalfLifeSeconds;
	double namedEntityDecayHalfLifeSeconds;
	double locationDecayHalfLifeSeconds;
	BOOL topicScoringUsesCoreML;
	BOOL namedEntityScoringUsesCoreML;
	BOOL flattenTopicsForCoreML;
	BOOL flattenNamedEntitiesforCoreML;
	BOOL namedEntityScoringUsesHybrid;
	BOOL topicScoringUsesHybrid;
	BOOL locationScoringUsesHybrid;
	double decayedFeedbackCountsHalfLifeDays;
	BOOL notificationExtractionEnabled;
	BOOL namedEntityFeedbackUsesCoreML;
	BOOL topicFeedbackUsesCoreML;
	BOOL locationFeedbackUsesCoreML;
	NSArray* engagementKValues;
	BOOL use2StageScoreInterpreterForNEScoring;
	BOOL use2StageScoreInterpreterForTPScoring;
	BOOL use2StageScoreInterpreterForLocationScoring;
	BOOL topicMappingUsesCoreML;
	double topicMappingCoreMLThreshold;
	BOOL locationScoringUsesCoreML;
	double routineExtractionScoreCountWeight;
	double routineExtractionScoreDurationWeight;
	double routineExtractionScoreDecayHalfLifeDays;
	NSDictionary* linearModelHyperparameters;
	int maxNumberMappedTopics;
	int maxNumberNamedEntities;
	unsigned char customTaggerMaxTokenCount;
	unsigned mapsSearchQueryLimit;
	double mapsSearchQueryFromDateInterval;
	unsigned namedEntityLoadAndMonitorInitialLoadLimit;
	NSDictionary* contactsLabelScoringMap;
	float recordSourceContactsInitialScore;
	float recordSourceNonContactsInitialScore;
	unsigned char peopleSuggesterMaxCount;
	double navigationMinimumTimeInterval;
	unsigned navigationMinimumDistanceInMeters;
	unsigned char nextEventFuzzMinutes;
	int queryTimeNextEventFromMinutes;
	unsigned queryTimeNextEventToMinutes;
	unsigned queryTimeOtherEventToMinutes;

}
@end

