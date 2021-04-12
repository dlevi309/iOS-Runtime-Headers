/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSArray, NSString, NSDictionary, _PASCFBurstTrie;

@interface PPConfigurationGuardedData : NSObject {

	double topicsSigmoidWidth;
	double topicsSigmoidPeakValue;
	double topicsScalingFactor;
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
	NSDictionary* topicMaps;
	NSDictionary* topicMapsScalingFactors;
	NSDictionary* topicsSourceMultiplier;
	NSDictionary* topicsAlgorithmMultiplier;
	_PASCFBurstTrie* topicCalibration;
	BOOL highLevelTopicExtractionEnabled;
	BOOL safariDonationTitleExtractionEnabled;
	BOOL safariDataDetectorsEnabledForHighMemoryDevices;
	double highLevelTopicScoreAttenuationFactor;
	double highLevelTopicScoreThreshold;
	float scoreThresholdForNamedEntity;
	float scoreThresholdForTopic;
	float scoreThresholdForLocation;
	float feedbackSessionLogsSamplingRate;
	float feedbackSessionLogsExtractionsSamplingRate;
	int feedbackSessionLogsGeohashLength;
	double analyticsTopicsSamplingRate;
	int analyticsMaximumNumberOfRecords;
	int analyticsGeohashLength;
	double topicDecayHalfLifeSeconds;
	double namedEntityDecayHalfLifeSeconds;
	double locationDecayHalfLifeSeconds;

}
@end

