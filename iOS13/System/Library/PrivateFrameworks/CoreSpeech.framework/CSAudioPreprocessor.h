/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerAwareZeroFilterDelegate.h>
#import <libobjc.A.dylib/CSBeepCancellerDelegate.h>

@protocol CSAudioPreprocessorDelegate;
@class CSAudioSampleRateConverter, CSVoiceTriggerAwareZeroFilter, CSBeepCanceller, CSAudioZeroCounter, NSString;

@interface CSAudioPreprocessor : NSObject <CSVoiceTriggerAwareZeroFilterDelegate, CSBeepCancellerDelegate> {

	float _sampleRate;
	id<CSAudioPreprocessorDelegate> _delegate;
	CSAudioSampleRateConverter* _upsampler;
	CSVoiceTriggerAwareZeroFilter* _zeroFilter;
	CSBeepCanceller* _beepCanceller;
	CSAudioZeroCounter* _zeroCounter;

}

@property (assign,nonatomic) float sampleRate;                                             //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,retain) CSAudioSampleRateConverter * upsampler;                       //@synthesize upsampler=_upsampler - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerAwareZeroFilter * zeroFilter;                   //@synthesize zeroFilter=_zeroFilter - In the implementation block
@property (nonatomic,retain) CSBeepCanceller * beepCanceller;                              //@synthesize beepCanceller=_beepCanceller - In the implementation block
@property (nonatomic,retain) CSAudioZeroCounter * zeroCounter;                             //@synthesize zeroCounter=_zeroCounter - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioPreprocessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSAudioPreprocessorDelegate>)delegate;
-(void)setDelegate:(id<CSAudioPreprocessorDelegate>)arg1 ;
-(void)setZeroFilter:(CSVoiceTriggerAwareZeroFilter *)arg1 ;
-(CSVoiceTriggerAwareZeroFilter *)zeroFilter;
-(void)flush;
-(void)setSampleRate:(float)arg1 ;
-(float)sampleRate;
-(id)initWithSampleRate:(float)arg1 ;
-(void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(BOOL)arg2 voiceTriggerInfo:(id)arg3 ;
-(BOOL)_isNarrowBand:(float)arg1 ;
-(CSAudioSampleRateConverter *)upsampler;
-(void)setUpsampler:(CSAudioSampleRateConverter *)arg1 ;
-(CSBeepCanceller *)beepCanceller;
-(void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2 ;
-(void)_reportMetrics;
-(void)willBeep;
-(void)zeroFilter:(id)arg1 zeroFilteredBufferAvailable:(id)arg2 atHostTime:(unsigned long long)arg3 ;
-(void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(void)setBeepCanceller:(CSBeepCanceller *)arg1 ;
-(CSAudioZeroCounter *)zeroCounter;
-(void)setZeroCounter:(CSAudioZeroCounter *)arg1 ;
@end

