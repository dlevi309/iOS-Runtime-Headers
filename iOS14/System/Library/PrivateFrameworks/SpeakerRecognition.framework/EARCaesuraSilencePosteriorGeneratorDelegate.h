/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@protocol EARCaesuraSilencePosteriorGeneratorDelegate <NSObject>
@optional
-(void)silenceDurationEstimateAvailable:(float*)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3;

@required
-(void)clientSilenceFeaturesAvailable:(id)arg1;

@end

