/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSVoiceTriggerAwareZeroFilterDelegate;
@class CSAudioZeroFilter;

@interface CSVoiceTriggerAwareZeroFilter : NSObject {

	float _sampleRate;
	id<CSVoiceTriggerAwareZeroFilterDelegate> _delegate;
	unsigned long long _vtEndInSampleCount;
	unsigned long long _numSamplesProcessed;
	CSAudioZeroFilter* _zeroFilter;

}

@property (assign,nonatomic) float sampleRate;                                                       //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned long long vtEndInSampleCount;                                  //@synthesize vtEndInSampleCount=_vtEndInSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long numSamplesProcessed;                                 //@synthesize numSamplesProcessed=_numSamplesProcessed - In the implementation block
@property (nonatomic,retain) CSAudioZeroFilter * zeroFilter;                                         //@synthesize zeroFilter=_zeroFilter - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerAwareZeroFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CSVoiceTriggerAwareZeroFilterDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerAwareZeroFilterDelegate>)arg1 ;
-(id)metrics;
-(void)setZeroFilter:(CSAudioZeroFilter *)arg1 ;
-(CSAudioZeroFilter *)zeroFilter;
-(void)flush;
-(void)setSampleRate:(float)arg1 ;
-(float)sampleRate;
-(void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(BOOL)arg2 voiceTriggerInfo:(id)arg3 ;
-(void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2 ;
-(unsigned long long)vtEndInSampleCount;
-(void)setVtEndInSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)numSamplesProcessed;
-(void)setNumSamplesProcessed:(unsigned long long)arg1 ;
@end

