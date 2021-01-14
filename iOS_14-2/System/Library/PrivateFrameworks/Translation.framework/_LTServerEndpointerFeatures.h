/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _LTServerEndpointerFeatures : NSObject <NSSecureCoding> {

	long long _wordCount;
	long long _trailingSilenceDuration;
	double _eosLikelihood;
	NSArray* _pauseCounts;
	double _silencePosterior;
	long long _processedAudioDurationInMilliseconds;

}

@property (assign,nonatomic) long long wordCount;                                         //@synthesize wordCount=_wordCount - In the implementation block
@property (assign,nonatomic) long long trailingSilenceDuration;                           //@synthesize trailingSilenceDuration=_trailingSilenceDuration - In the implementation block
@property (assign,nonatomic) double eosLikelihood;                                        //@synthesize eosLikelihood=_eosLikelihood - In the implementation block
@property (nonatomic,copy) NSArray * pauseCounts;                                         //@synthesize pauseCounts=_pauseCounts - In the implementation block
@property (assign,nonatomic) double silencePosterior;                                     //@synthesize silencePosterior=_silencePosterior - In the implementation block
@property (assign,nonatomic) long long processedAudioDurationInMilliseconds;              //@synthesize processedAudioDurationInMilliseconds=_processedAudioDurationInMilliseconds - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)GetDefaultEndpointerFeaturesForEndpointer:(id)arg1 ;
-(id)initWithResponse:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)pauseCounts;
-(long long)wordCount;
-(void)setWordCount:(long long)arg1 ;
-(double)silencePosterior;
-(void)setSilencePosterior:(double)arg1 ;
-(void)setProcessedAudioDurationInMilliseconds:(long long)arg1 ;
-(long long)processedAudioDurationInMilliseconds;
-(double)eosLikelihood;
-(void)setEosLikelihood:(double)arg1 ;
-(void)setPauseCounts:(NSArray *)arg1 ;
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
@end

