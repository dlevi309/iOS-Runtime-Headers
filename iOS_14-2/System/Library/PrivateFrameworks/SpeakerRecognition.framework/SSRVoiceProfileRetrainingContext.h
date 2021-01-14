/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@class NSString, NSArray, SSRVoiceProfile, NSURL, NSDictionary, CSAsset, SSRLoggingAggregator;

@interface SSRVoiceProfileRetrainingContext : NSObject {

	BOOL _filterToVoiceTriggerUtterances;
	BOOL _forceRetrain;
	float _combinationWeight;
	NSString* _sessionId;
	NSArray* _compareVoiceProfileArray;
	SSRVoiceProfile* _voiceProfile;
	unsigned long long _spIdType;
	NSURL* _resourceFilePath;
	NSString* _configVersion;
	unsigned long long _maxAllowedSpeakerVectors;
	NSDictionary* _modelsContext;
	CSAsset* _asset;
	SSRLoggingAggregator* _logAggregator;

}

@property (nonatomic,retain) NSArray * compareVoiceProfileArray;                         //@synthesize compareVoiceProfileArray=_compareVoiceProfileArray - In the implementation block
@property (nonatomic,retain) SSRVoiceProfile * voiceProfile;                             //@synthesize voiceProfile=_voiceProfile - In the implementation block
@property (nonatomic,readonly) unsigned long long spIdType;                              //@synthesize spIdType=_spIdType - In the implementation block
@property (nonatomic,readonly) NSURL * resourceFilePath;                                 //@synthesize resourceFilePath=_resourceFilePath - In the implementation block
@property (nonatomic,readonly) NSString * configVersion;                                 //@synthesize configVersion=_configVersion - In the implementation block
@property (nonatomic,readonly) BOOL filterToVoiceTriggerUtterances;                      //@synthesize filterToVoiceTriggerUtterances=_filterToVoiceTriggerUtterances - In the implementation block
@property (nonatomic,readonly) BOOL forceRetrain;                                        //@synthesize forceRetrain=_forceRetrain - In the implementation block
@property (nonatomic,readonly) unsigned long long maxAllowedSpeakerVectors;              //@synthesize maxAllowedSpeakerVectors=_maxAllowedSpeakerVectors - In the implementation block
@property (nonatomic,readonly) NSDictionary * modelsContext;                             //@synthesize modelsContext=_modelsContext - In the implementation block
@property (nonatomic,readonly) float combinationWeight;                                  //@synthesize combinationWeight=_combinationWeight - In the implementation block
@property (nonatomic,retain) CSAsset * asset;                                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) SSRLoggingAggregator * logAggregator;                       //@synthesize logAggregator=_logAggregator - In the implementation block
@property (nonatomic,readonly) NSString * sessionId;                                     //@synthesize sessionId=_sessionId - In the implementation block
-(NSString *)sessionId;
-(void)setAsset:(CSAsset *)arg1 ;
-(CSAsset *)asset;
-(NSString *)configVersion;
-(id)description;
-(unsigned long long)spIdType;
-(id)initWithVoiceRetrainingContext:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)modelsContext;
-(NSURL *)resourceFilePath;
-(SSRLoggingAggregator *)logAggregator;
-(float)combinationWeight;
-(BOOL)forceRetrain;
-(SSRVoiceProfile *)voiceProfile;
-(unsigned long long)maxAllowedSpeakerVectors;
-(void)setVoiceProfile:(SSRVoiceProfile *)arg1 ;
-(NSArray *)compareVoiceProfileArray;
-(void)setCompareVoiceProfileArray:(NSArray *)arg1 ;
-(BOOL)filterToVoiceTriggerUtterances;
-(void)setLogAggregator:(SSRLoggingAggregator *)arg1 ;
@end

