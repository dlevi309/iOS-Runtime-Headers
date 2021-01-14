/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@interface EARClientSilenceFeatures : NSObject {

	double _silenceFramesCountMs;
	double _silenceProbability;
	double _silenceDurationMs;
	double _silencePosterior;
	double _processedAudioMs;

}

@property (assign,nonatomic) double silenceFramesCountMs;              //@synthesize silenceFramesCountMs=_silenceFramesCountMs - In the implementation block
@property (assign,nonatomic) double silenceProbability;                //@synthesize silenceProbability=_silenceProbability - In the implementation block
@property (assign,nonatomic) double silenceDurationMs;                 //@synthesize silenceDurationMs=_silenceDurationMs - In the implementation block
@property (assign,nonatomic) double silencePosterior;                  //@synthesize silencePosterior=_silencePosterior - In the implementation block
@property (assign,nonatomic) double processedAudioMs;                  //@synthesize processedAudioMs=_processedAudioMs - In the implementation block
-(id)dictionary;
-(double)silencePosterior;
-(void)setSilencePosterior:(double)arg1 ;
-(double)silenceProbability;
-(void)setSilenceProbability:(double)arg1 ;
-(double)processedAudioMs;
-(double)silenceFramesCountMs;
-(double)silenceDurationMs;
-(id)initWithSilenceFramesCountMs:(double)arg1 silenceProbability:(double)arg2 silenceDurationMs:(double)arg3 silencePosterior:(double)arg4 processedAudioMs:(double)arg5 ;
-(void)setSilenceFramesCountMs:(double)arg1 ;
-(void)setSilenceDurationMs:(double)arg1 ;
-(void)setProcessedAudioMs:(double)arg1 ;
@end
