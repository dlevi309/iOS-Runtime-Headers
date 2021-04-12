/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

@class NSDictionary;


@protocol SSRSpeakerRecognizer <NSObject>
@property (nonatomic,readonly) NSDictionary * lastScoreCard; 
@required
-(id)initWithContext:(id)arg1 delegate:(id)arg2;
-(void)endAudio;
-(void)resetWithContext:(id)arg1;
-(void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
-(NSDictionary *)lastScoreCard;

@end

