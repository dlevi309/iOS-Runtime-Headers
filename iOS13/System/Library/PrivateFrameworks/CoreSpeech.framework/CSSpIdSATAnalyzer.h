/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString;

@interface CSSpIdSATAnalyzer : NSObject {

	void* _novDetect;
	BOOL _satModelAvailable;
	unsigned long long _spIdType;
	NSString* _profileID;
	NSString* _satModelDir;
	NSString* _satAudioDir;
	NSString* _satModelFilePath;
	unsigned long long _modelType;
	NSString* _spIdTypeStr;

}

@property (nonatomic,retain) NSString * profileID;                                               //@synthesize profileID=_profileID - In the implementation block
@property (assign,nonatomic) unsigned long long spIdType;                                        //@synthesize spIdType=_spIdType - In the implementation block
@property (assign,nonatomic) unsigned long long modelType;                                       //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,retain) NSString * spIdTypeStr;                                             //@synthesize spIdTypeStr=_spIdTypeStr - In the implementation block
@property (nonatomic,retain) NSString * satModelDir;                                             //@synthesize satModelDir=_satModelDir - In the implementation block
@property (nonatomic,retain) NSString * satAudioDir;                                             //@synthesize satAudioDir=_satAudioDir - In the implementation block
@property (nonatomic,readonly) NSString * sysConfigFilepath; 
@property (nonatomic,readonly) NSString * sysConfigRoot; 
@property (nonatomic,readonly) NSString * satModelFilePath;                                      //@synthesize satModelFilePath=_satModelFilePath - In the implementation block
@property (nonatomic,readonly) NSString * tdSrSysConfigFile; 
@property (nonatomic,readonly) NSString * tdSrSysConfigRoot; 
@property (nonatomic,readonly) BOOL satModelAvailable;                                           //@synthesize satModelAvailable=_satModelAvailable - In the implementation block
@property (nonatomic,readonly) float satScoreThreshold; 
@property (nonatomic,readonly) float satScoreVTScale; 
@property (nonatomic,readonly) float satScoreVTOffset; 
@property (nonatomic,readonly) float satScoreNonVTScale; 
@property (nonatomic,readonly) float satScoreNonVTOffset; 
@property (nonatomic,readonly) float combinationWeight; 
@property (nonatomic,readonly) float satLogitCeilScore; 
@property (nonatomic,readonly) float satLogitFloorScore; 
@property (nonatomic,readonly) float satImplicitThreshold; 
@property (nonatomic,readonly) unsigned long long satImplicitBaseProfileThreshold; 
@property (nonatomic,readonly) unsigned long long satImplicitProfileThreshold; 
@property (nonatomic,readonly) unsigned long long satImplicitProfileDeltaThreshold; 
@property (nonatomic,readonly) float satVTImplicitThreshold; 
@property (nonatomic,readonly) float retrainThresholdTrigger; 
@property (nonatomic,readonly) float retrainExplicitUttThresholdSAT; 
@property (nonatomic,readonly) float retrainExplicitUttThresholdTDSR; 
@property (nonatomic,readonly) float retrainThresholdSAT; 
@property (nonatomic,readonly) float retrainThresholdTDSR; 
@property (nonatomic,readonly) int pruningNumRetentionUtterance; 
@property (nonatomic,readonly) int maximumSpeakerVectors; 
@property (nonatomic,readonly) int maxAllowedImplicitUtterances; 
@property (nonatomic,readonly) int maxAllowedBaseProfileUtterances; 
@property (nonatomic,readonly) NSString * voiceProfilePruningCookie; 
+(id)createSATAnalyzersForCSSpIdType:(unsigned long long)arg1 withModel:(unsigned long long)arg2 withAsset:(id)arg3 withFallbackAsset:(id)arg4 ;
-(void)dealloc;
-(void)reset;
-(unsigned long long)modelType;
-(void)setModelType:(unsigned long long)arg1 ;
-(NSString *)profileID;
-(id)_getValueForNDAPIConfigOption:(id)arg1 ;
-(double)_getFloatValueForNDAPIConfigOption:(id)arg1 defaultValue:(double)arg2 ;
-(unsigned long long)getSATVectorCount;
-(void)updateSAT;
-(void)deleteExistingSATModel;
-(void)deleteVectorAtIndex:(int)arg1 ;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2 ;
-(int)_getIntValueFromConfigurationName:(id)arg1 defaultTo:(int)arg2 ;
-(id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2 ;
-(id)_getOptionValueFromConfigurationName:(id)arg1 ;
-(id)getAnalyzedResult;
-(float)scoreSpeakerVector:(id)arg1 withDimensions:(unsigned long long)arg2 ;
-(id)initWithCSSpIdType:(unsigned long long)arg1 modelType:(unsigned long long)arg2 profile:(id)arg3 locale:(id)arg4 assetResourcePath:(id)arg5 assetHash:(id)arg6 ;
-(id)getSpeakerVectorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)satImplicitBaseProfileThreshold;
-(unsigned long long)satImplicitProfileThreshold;
-(unsigned long long)satImplicitProfileDeltaThreshold;
-(float)satScoreVTOffset;
-(float)satScoreVTScale;
-(float)satLogitCeilScore;
-(float)satLogitFloorScore;
-(float)satScoreThreshold;
-(float)satScoreNonVTScale;
-(float)satScoreNonVTOffset;
-(NSString *)sysConfigFilepath;
-(NSString *)sysConfigRoot;
-(float)analyzeSuperVector:(id)arg1 withDimensions:(unsigned long long)arg2 ;
-(unsigned long long)spIdType;
-(void)setSpIdType:(unsigned long long)arg1 ;
-(NSString *)spIdTypeStr;
-(void)setSpIdTypeStr:(NSString *)arg1 ;
-(int)maxAllowedBaseProfileUtterances;
-(float)retrainThresholdTrigger;
-(float)satImplicitThreshold;
-(float)satVTImplicitThreshold;
-(float)retrainThresholdSAT;
-(float)retrainThresholdTDSR;
-(NSString *)satModelFilePath;
-(int)maximumSpeakerVectors;
-(NSString *)satModelDir;
-(BOOL)satModelAvailable;
-(NSString *)tdSrSysConfigFile;
-(NSString *)tdSrSysConfigRoot;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(float)combinationWeight;
-(void)setProfileID:(NSString *)arg1 ;
-(int)pruningNumRetentionUtterance;
-(NSString *)voiceProfilePruningCookie;
-(float)retrainExplicitUttThresholdTDSR;
-(float)retrainExplicitUttThresholdSAT;
-(BOOL)initializeSATWithModelPath:(id)arg1 ;
-(int)maxAllowedImplicitUtterances;
-(void)setSatModelDir:(NSString *)arg1 ;
-(NSString *)satAudioDir;
-(void)setSatAudioDir:(NSString *)arg1 ;
@end

