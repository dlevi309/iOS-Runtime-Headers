/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)flush;
-(id<CSAudioPreprocessorDelegate>)delegate;
-(void)setDelegate:(id<CSAudioPreprocessorDelegate>)arg1 ;
-(void)setSampleRate:(float)arg1 ;
-(void)setZeroFilter:(CSVoiceTriggerAwareZeroFilter *)arg1 ;
-(CSVoiceTriggerAwareZeroFilter *)zeroFilter;
-(float)sampleRate;
-(void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(BOOL)arg2 voiceTriggerInfo:(id)arg3 ;
-(BOOL)_isNarrowBand:(float)arg1 ;
-(CSAudioSampleRateConverter *)upsampler;
-(void)setUpsampler:(CSAudioSampleRateConverter *)arg1 ;
-(CSBeepCanceller *)beepCanceller;
-(void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2 ;
-(void)_reportMetrics;
-(BOOL)_isHeadphoneDeviceWithRecordRoute:(id)arg1 playbackRoute:(id)arg2 ;
-(void)zeroFilter:(id)arg1 zeroFilteredBufferAvailable:(id)arg2 atHostTime:(unsigned long long)arg3 ;
-(void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)initWithSampleRate:(float)arg1 ;
-(void)willBeepWithRecordRoute:(id)arg1 playbackRoute:(id)arg2 ;
-(void)setBeepCanceller:(CSBeepCanceller *)arg1 ;
-(CSAudioZeroCounter *)zeroCounter;
-(void)setZeroCounter:(CSAudioZeroCounter *)arg1 ;
@end

