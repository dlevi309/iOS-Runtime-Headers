/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSVoiceTriggerStatAggregator : NSObject {

	unsigned long long _numFalseWakeUp;
	unsigned long long _lastAggTimeFalseWakeUp;

}

@property (assign,nonatomic) unsigned long long numFalseWakeUp;                      //@synthesize numFalseWakeUp=_numFalseWakeUp - In the implementation block
@property (assign,nonatomic) unsigned long long lastAggTimeFalseWakeUp;              //@synthesize lastAggTimeFalseWakeUp=_lastAggTimeFalseWakeUp - In the implementation block
+(id)sharedAggregator;
-(id)init;
-(void)logAudioZeroRun:(float)arg1 ;
-(void)logSecondPassResult:(int)arg1 eventInfo:(id)arg2 triggerAPWakeUp:(BOOL)arg3 ;
-(void)_borealisPowerlog:(id)arg1 ;
-(void)powerLogVoiceTriggerStart;
-(void)powerLogVoiceTriggerStop;
-(void)logAOPFirstPassTriggerWakeupLatency:(float)arg1 ;
-(void)logFalseWakeUp:(BOOL)arg1 ;
-(void)logTriggerLengthSampleCountStatistics:(unsigned long long)arg1 withFirstPassDeterministicTriggerLengthSampleCount:(unsigned long long)arg2 ;
-(unsigned long long)numFalseWakeUp;
-(void)setNumFalseWakeUp:(unsigned long long)arg1 ;
-(unsigned long long)lastAggTimeFalseWakeUp;
-(void)setLastAggTimeFalseWakeUp:(unsigned long long)arg1 ;
@end

