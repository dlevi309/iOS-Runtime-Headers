/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@interface _EARDefaultServerEndpointFeatures : NSObject {

	float _endOfSentenceLikelihood;
	float _silencePosterior;
	long long _wordCount;
	long long _trailingSilenceDuration;

}

@property (assign,nonatomic) long long wordCount;                            //@synthesize wordCount=_wordCount - In the implementation block
@property (assign,nonatomic) long long trailingSilenceDuration;              //@synthesize trailingSilenceDuration=_trailingSilenceDuration - In the implementation block
@property (assign,nonatomic) float endOfSentenceLikelihood;                  //@synthesize endOfSentenceLikelihood=_endOfSentenceLikelihood - In the implementation block
@property (assign,nonatomic) float silencePosterior;                         //@synthesize silencePosterior=_silencePosterior - In the implementation block
-(long long)wordCount;
-(void)setWordCount:(long long)arg1 ;
-(float)endOfSentenceLikelihood;
-(float)silencePosterior;
-(void)setSilencePosterior:(float)arg1 ;
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
-(void)setEndOfSentenceLikelihood:(float)arg1 ;
-(id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(float)arg3 silencePosterior:(float)arg4 ;
@end

