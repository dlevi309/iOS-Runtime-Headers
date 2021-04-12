/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class NSDictionary;

@interface VTAnalyzerNDAPI : NSObject {

	IntNovDetect* _novDetect;
	NSDictionary* _decodedInfo;

}
-(void)dealloc;
-(void)reset;
-(double)getThresholdSAT;
-(int)getSATVectorCount;
-(void)updateSAT;
-(double)getRetrainThresholdTrigger;
-(double)getRetrainExplicitUttThresholdSAT;
-(double)getRetrainExplicitUttThresholdTDSR;
-(double)getRetrainThresholdSAT;
-(double)getRetrainThresholdTDSR;
-(int)getVoiceProfilePruningNumRetentionUtterances;
-(BOOL)initializeSAT:(id)arg1 ;
-(id)getVoiceProfilePruningCookie;
-(const ndsupervec*)getSuperVectorWithEndPoint:(unsigned)arg1 ;
-(const ndsvscore*)analyzeSAT:(const float*)arg1 size:(unsigned)arg2 ;
-(void)analyzeWavData:(const short*)arg1 length:(int)arg2 ;
-(const ndresult*)getAnalyzedResult:(unsigned)arg1 ;
-(id)_decodeJson:(id)arg1 ;
-(id)_getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3 ;
-(double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2 ;
-(BOOL)_getBooleanValueFromConfigurationName:(id)arg1 defaultTo:(BOOL)arg2 ;
-(int)_getIntValueFromConfigurationName:(id)arg1 defaultTo:(int)arg2 ;
-(id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2 ;
-(const char*)_getOptionValueFromConfigurationName:(id)arg1 ;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)resetBest;
-(const ndresult*)getAnalyzedResult;
-(const ndsvscore*)getScoreSuperVector:(const float*)arg1 size:(unsigned)arg2 ;
-(void)deleteVectorIndex:(int)arg1 ;
-(double)getCombinedTriggerThreshold;
-(double)getNDAPITriggerThreshold;
-(double)getCombinedSecondChanceThreshold;
-(double)getNDAPISecondChanceThreshold;
-(double)getCombinedLoggingThreshold;
-(double)getNDAPILoggingThreshold;
-(double)getExtraSamplesAtStart;
-(double)getSecondPassTrailingTime;
-(BOOL)getDoSupervectorSecondaryTest;
-(double)getThresholdPresuperVector;
-(BOOL)getDoSAT;
-(int)getRetrainNumExplicitUtt;
-(int)getRetrainNumImplicitUtt;
-(id)getRetrainSamplingPolicy;
-(int)getMaximumSpeakerVectors;
-(int)getPayloadUtteranceLifeTimeInDays;
-(BOOL)getUseRecognizer;
-(id)getRecognizerConfig;
-(double)getRecognizerThresholdOffset;
-(double)getRecognizerWaitTime;
-(double)getRecognizerScoreScaleFactor;
-(id)getTriggerTokens;
-(BOOL)getUseFallbackThresholdUponTimeout;
-(BOOL)getUseKeywordSpotting;
@end

