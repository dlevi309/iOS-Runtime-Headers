/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol VTKeywordAnalyzer <NSObject>
@required
-(id)initWithAsset:(id)arg1;
-(void)endAudio;
-(void)setStartSampleCount:(unsigned long long)arg1;
-(void)resetWithLanguage:(id)arg1 withSamplingRate:(long long)arg2 withAudioSource:(id)arg3;
-(void)processFloatAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
-(void)processAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
-(id)getDetailedResults;
-(id)getAnalyzerType;

@end

