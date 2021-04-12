/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class NSDictionary;

@interface VTAnalyzerNDAPI : NSObject {

	IntNovDetect* _novDetect;
	NSDictionary* _decodedInfo;

}
-(const ndsupervec*)getSuperVectorWithEndPoint:(unsigned)arg1 ;
-(void)reset;
-(const ndresult*)getAnalyzedResult;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)resetBest;
-(void)dealloc;
-(id)_decodeJson:(id)arg1 ;
-(int)getSATVectorCount;
-(void)updateSAT;
-(const char*)_getOptionValueFromConfigurationName:(id)arg1 ;
-(double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2 ;
-(int)_getIntValueFromConfigurationName:(id)arg1 defaultTo:(int)arg2 ;
-(id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2 ;
-(double)getThresholdSAT;
-(id)_getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3 ;
-(double)getRetrainThresholdTrigger;
-(double)getRetrainExplicitUttThresholdSAT;
-(double)getRetrainExplicitUttThresholdTDSR;
-(double)getRetrainThresholdSAT;
-(double)getRetrainThresholdTDSR;
-(int)getVoiceProfilePruningNumRetentionUtterances;
-(BOOL)initializeSAT:(id)arg1 ;
-(id)getVoiceProfilePruningCookie;
-(const ndsvscore*)analyzeSAT:(const float*)arg1 size:(unsigned)arg2 ;
-(void)analyzeWavData:(const short*)arg1 length:(int)arg2 ;
-(const ndresult*)getAnalyzedResult:(unsigned)arg1 ;
-(BOOL)_getBooleanValueFromConfigurationName:(id)arg1 defaultTo:(BOOL)arg2 ;
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

