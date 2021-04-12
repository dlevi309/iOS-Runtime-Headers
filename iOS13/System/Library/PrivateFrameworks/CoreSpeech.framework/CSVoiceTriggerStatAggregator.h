/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)logFalseWakeUp:(BOOL)arg1 ;
-(void)powerLogVoiceTriggerStart;
-(void)powerLogVoiceTriggerStop;
-(void)_borealisPowerlog:(id)arg1 ;
-(unsigned long long)numFalseWakeUp;
-(void)setNumFalseWakeUp:(unsigned long long)arg1 ;
-(unsigned long long)lastAggTimeFalseWakeUp;
-(void)setLastAggTimeFalseWakeUp:(unsigned long long)arg1 ;
@end

