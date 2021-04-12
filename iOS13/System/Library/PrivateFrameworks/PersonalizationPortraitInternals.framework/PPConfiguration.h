/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, _PASNotificationToken;

@interface PPConfiguration : NSObject {

	_PASLock* _lock;
	_PASNotificationToken* _assetUpdateHandlerToken;
	int _abGroupOverrideChangedNotificationToken;

}
+(id)sharedInstance;
+(id)_loadConfigPlistWithPath:(id)arg1 ;
+(id)_loadTopicCalibrationPlistWithPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(double)highLevelTopicScoreAttenuationFactor;
-(double)highLevelTopicScoreThreshold;
-(BOOL)highLevelTopicExtractionEnabled;
-(double)halfValuePosition;
-(BOOL)safariDataDetectorsEnabledForHighMemoryDevices;
-(BOOL)safariDonationTitleExtractionEnabled;
-(double)topicsSigmoidWidth;
-(double)topicsSigmoidPeakValue;
-(double)topicsScalingFactor;
-(float)remoteTopicsMultiplier;
-(double)nonReaderTextWeight;
-(float)scoreThresholdForNamedEntity;
-(float)scoreThresholdForTopic;
-(float)scoreThresholdForLocation;
-(float)feedbackSessionLogsSamplingRate;
-(float)feedbackSessionLogsExtractionsSamplingRate;
-(int)feedbackSessionLogsGeohashLength;
-(double)topicDecayHalfLifeSeconds;
-(double)namedEntityDecayHalfLifeSeconds;
-(double)locationDecayHalfLifeSeconds;
-(void)_loadConfigParams;
-(id)resourceForMappingId:(id)arg1 ;
-(double)scalingFactorForMappingId:(id)arg1 ;
-(id)portraitVariantName;
-(id)naturalPortraitVariantName;
-(id)availablePortraitVariantNames;
-(float)topicsMultiplierForBundleId:(id)arg1 algorithm:(unsigned long long)arg2 ;
-(double)portraitAnalyticsSamplingRate;
-(double)portraitMusicDataCollectionSamplingRateForCTS;
-(double)portraitMusicDataCollectionSamplingRateForAMP;
-(int)portraitMusicDataCollectionMaximumRecordsPerType;
-(BOOL)portraitMusicDataCollectionCollectNonAMPNowPlaying;
-(id)portraitMusicDataCollectionAMPBundleIds;
-(id)topicCalibrationTrie;
-(double)portraitAnalyticsTopicsSamplingRate;
-(int)portraitAnalyticsMaximumNumberOfRecords;
-(int)portraitAnalyticsGeohashLength;
@end

