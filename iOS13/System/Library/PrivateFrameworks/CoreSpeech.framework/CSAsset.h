/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSDictionary, NSString, NSArray;

@interface CSAsset : NSObject {

	NSDictionary* _decodedInfo;
	NSString* _path;
	NSString* _resourcePath;
	NSString* _configVersion;

}

@property (nonatomic,readonly) unsigned long long SSVNoiseLevelChannelBitset; 
@property (nonatomic,readonly) unsigned long long SSVLKFSChannelBitset; 
@property (nonatomic,readonly) unsigned SSVEnergyBufferSize; 
@property (nonatomic,readonly) unsigned SSVNoiseLowerPercentile; 
@property (nonatomic,readonly) unsigned SSVNoiseUpperPercentile; 
@property (nonatomic,readonly) unsigned SSVLKFSLowerPercentile; 
@property (nonatomic,readonly) unsigned SSVLKFSUpperPercentile; 
@property (nonatomic,readonly) float SSVNoiseTimeConstant; 
@property (nonatomic,readonly) float SSVNoiseMicSensitivityOffset; 
@property (nonatomic,readonly) float SSVLKFSTimeConstant; 
@property (nonatomic,readonly) float SSVLKFSMicSensitivityOffset; 
@property (nonatomic,readonly) float SSVNoiseTTSMappingInputRangeLow; 
@property (nonatomic,readonly) float SSVNoiseTTSMappingInputRangeHigh; 
@property (nonatomic,readonly) float SSVNoiseTTSMappingOutputRangeLow; 
@property (nonatomic,readonly) float SSVNoiseTTSMappingOutputRangeHigh; 
@property (nonatomic,readonly) float SSVLKFSTTSMappingInputRangeLow; 
@property (nonatomic,readonly) float SSVLKFSTTSMappingInputRangeHigh; 
@property (nonatomic,readonly) float SSVLKFSTTSMappingOutputRangeLow; 
@property (nonatomic,readonly) float SSVLKFSTTSMappingOutputRangeHigh; 
@property (nonatomic,readonly) float SSVUserOffsetInputRangeLow; 
@property (nonatomic,readonly) float SSVUserOffsetInputRangeHigh; 
@property (nonatomic,readonly) float SSVUserOffsetOutputRangeLow; 
@property (nonatomic,readonly) float SSVUserOffsetOutputRangeHigh; 
@property (nonatomic,readonly) float SSVTTSVolumeLowerLimitDB; 
@property (nonatomic,readonly) float SSVTTSVolumeUpperLimitDB; 
@property (nonatomic,readonly) float SSVNoiseWeight; 
@property (nonatomic,readonly) NSDictionary * SSVParameterDirectionary; 
@property (nonatomic,readonly) NSString * VTFirstPassConfigPathNDAPI; 
@property (nonatomic,readonly) float VTFirstPassThreshold; 
@property (nonatomic,readonly) float VTFirstPassDelaySecondsForChannelSelection; 
@property (nonatomic,readonly) float VTFirstPassMasterChannelScoreBoost; 
@property (nonatomic,readonly) float VTFirstPassProcessingChunkSeconds; 
@property (nonatomic,readonly) unsigned long long VTFirstPassProcessingChannelsBitset; 
@property (nonatomic,readonly) NSString * keywordDetectorConfigPathRecognizer; 
@property (nonatomic,readonly) float keywordDetectorThreshold; 
@property (nonatomic,readonly) float keywordDetectorWaitTimeSinceVT; 
@property (nonatomic,readonly) NSString * speakerDetectorNDAPIConfigPath; 
@property (nonatomic,readonly) BOOL speakerDetectorThresholdAvailable; 
@property (nonatomic,readonly) float speakerDetectorThreshold; 
@property (nonatomic,readonly) float speakerDetectorRetrainTriggerThreshold; 
@property (nonatomic,readonly) unsigned long long maxSpeakerVectorsToPersist; 
@property (nonatomic,readonly) NSArray * languageDetectorSupportedLocale; 
@property (nonatomic,readonly) NSString * languageDetectorConfigFile; 
@property (nonatomic,readonly) NSString * startOfSpeechDetectorConfigFile; 
@property (nonatomic,readonly) NSString * spgConfigFile; 
@property (nonatomic,readonly) NSString * CVTConfigPathNDAPI; 
@property (nonatomic,readonly) float CVTThreshold; 
@property (nonatomic,readonly) float CVTTwoShotThreshold; 
@property (nonatomic,readonly) float CVTTwoShotDecisionWaitTime; 
@property (nonatomic,readonly) NSString * path;                                                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * resourcePath;                                             //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,readonly) NSString * hashFromResourcePath; 
@property (nonatomic,readonly) NSString * configVersion;                                            //@synthesize configVersion=_configVersion - In the implementation block
+(id)defaultFallBackAssetForVoiceTrigger;
+(id)assetForAssetType:(unsigned long long)arg1 resourcePath:(id)arg2 configVersion:(id)arg3 ;
+(id)fallBackAssetResourcePath;
+(id)hybridEndpointerAssetFilename;
+(id)defaultFallBackAssetForSmartSiriVolume;
+(id)defaultFallBackAssetForHearst;
-(id)description;
-(NSDictionary *)dictionary;
-(NSString *)path;
-(NSString *)resourcePath;
-(NSString *)configVersion;
-(id)_decodeJson:(id)arg1 ;
-(id)getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3 ;
-(unsigned long long)SSVNoiseLevelChannelBitset;
-(unsigned long long)SSVLKFSChannelBitset;
-(unsigned)SSVEnergyBufferSize;
-(unsigned)SSVNoiseLowerPercentile;
-(unsigned)SSVNoiseUpperPercentile;
-(unsigned)SSVLKFSLowerPercentile;
-(unsigned)SSVLKFSUpperPercentile;
-(float)SSVNoiseTimeConstant;
-(float)SSVNoiseMicSensitivityOffset;
-(float)SSVLKFSTimeConstant;
-(float)SSVLKFSMicSensitivityOffset;
-(float)SSVNoiseTTSMappingInputRangeLow;
-(float)SSVNoiseTTSMappingInputRangeHigh;
-(float)SSVNoiseTTSMappingOutputRangeLow;
-(float)SSVNoiseTTSMappingOutputRangeHigh;
-(float)SSVLKFSTTSMappingInputRangeLow;
-(float)SSVLKFSTTSMappingInputRangeHigh;
-(float)SSVLKFSTTSMappingOutputRangeLow;
-(float)SSVLKFSTTSMappingOutputRangeHigh;
-(float)SSVUserOffsetInputRangeLow;
-(float)SSVUserOffsetInputRangeHigh;
-(float)SSVUserOffsetOutputRangeLow;
-(float)SSVUserOffsetOutputRangeHigh;
-(float)SSVTTSVolumeLowerLimitDB;
-(float)SSVTTSVolumeUpperLimitDB;
-(float)SSVNoiseWeight;
-(NSDictionary *)SSVParameterDirectionary;
-(NSString *)hashFromResourcePath;
-(NSString *)CVTConfigPathNDAPI;
-(float)CVTThreshold;
-(float)CVTTwoShotDecisionWaitTime;
-(float)CVTTwoShotThreshold;
-(id)VTSecondPassCategoryForFirstPassSource:(unsigned long long)arg1 ;
-(float)VTSecondPassRemoteVADThresholdFrom:(id)arg1 ;
-(float)VTSecondPassRemoteVADMyriadThresholdFrom:(id)arg1 ;
-(float)VTSecondPassMinimumPhraseLengthForVADGating:(id)arg1 ;
-(NSArray *)languageDetectorSupportedLocale;
-(id)RTModelWithFallbackLanguage:(id)arg1 ;
-(NSString *)languageDetectorConfigFile;
-(NSString *)startOfSpeechDetectorConfigFile;
-(NSString *)spgConfigFile;
-(NSString *)speakerDetectorNDAPIConfigPath;
-(id)configFilepathForDictationOrigin:(unsigned long long)arg1 ;
-(id)_getCategoryKey;
-(id)getStringForKey:(id)arg1 category:(id)arg2 default:(id)arg3 ;
-(NSString *)VTFirstPassConfigPathNDAPI;
-(float)VTFirstPassThreshold;
-(float)VTFirstPassDelaySecondsForChannelSelection;
-(float)VTFirstPassMasterChannelScoreBoost;
-(float)VTFirstPassProcessingChunkSeconds;
-(unsigned long long)VTFirstPassProcessingChannelsBitset;
-(id)createRTModelWithLocale:(id)arg1 ;
-(id)hearstRTModelWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3 ;
-(id)_sha1:(id)arg1 ;
-(id)_sha256:(id)arg1 ;
-(id)latestHearstRTModelForLocale:(id)arg1 ;
-(id)hearstRTModelLocaleMap;
-(float)VTSecondPassThresholdFrom:(id)arg1 ;
-(float)VTSecondPassLoggingThresholdFrom:(id)arg1 ;
-(float)VTSecondPass2ndChanceThresholdFrom:(id)arg1 ;
-(id)VTSecondPassConfigPathNDAPIFrom:(id)arg1 ;
-(BOOL)containsCategory:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 category:(id)arg2 ;
-(float)VTSecondPassPreTriggerAudioTimeFrom:(id)arg1 ;
-(float)VTSecondPassAnalyzerPrependingAudioTimeFrom:(id)arg1 ;
-(float)VTSecondPassAnalyzerTrailingAudioTimeFrom:(id)arg1 ;
-(BOOL)VTSecondPassConfigPathRecognizerExistFrom:(id)arg1 ;
-(id)VTSecondPassConfigPathRecognizerFrom:(id)arg1 ;
-(BOOL)VTSecondPassUseKeywordSpottingFrom:(id)arg1 ;
-(float)VTSecondPassRecognizerThresholdOffsetFrom:(id)arg1 ;
-(float)VTSecondPassRecognizerScoreScaleFactorFrom:(id)arg1 ;
-(id)VTSecondPassRecognizerTokenFrom:(id)arg1 ;
-(float)VTSecondPassRecognizerWaitTimeFrom:(id)arg1 ;
-(float)VTSecondPassTwoShotFeedbackDelayFrom:(id)arg1 ;
-(float)VTSecondPassShadowMicScoreThresholdForVADGating:(id)arg1 ;
-(float)VTSecondPassRejectLoggingThresholdFrom:(id)arg1 ;
-(id)supportedVTPhrasesInfoForCategory:(id)arg1 ;
-(id)ctcKwdToPhraseIdMapForCategory:(id)arg1 ;
-(BOOL)isEqualAsset:(id)arg1 ;
-(float)keywordDetectorThreshold;
-(NSString *)keywordDetectorConfigPathRecognizer;
-(float)keywordDetectorWaitTimeSinceVT;
-(BOOL)speakerDetectorThresholdAvailable;
-(float)speakerDetectorThreshold;
-(float)speakerDetectorRetrainTriggerThreshold;
-(unsigned long long)maxSpeakerVectorsToPersist;
-(id)initWithResourcePath:(id)arg1 configFile:(id)arg2 configVersion:(id)arg3 ;
-(BOOL)getBoolForKey:(id)arg1 category:(id)arg2 default:(BOOL)arg3 ;
-(id)_getContinuousVoiceTriggerAssetCategory;
@end

