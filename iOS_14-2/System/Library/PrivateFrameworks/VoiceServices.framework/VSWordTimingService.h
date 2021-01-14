/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@class NSDictionary;

@interface VSWordTimingService : NSObject {

	NSDictionary* _wordTimings;

}

@property (nonatomic,retain) NSDictionary * wordTimings;              //@synthesize wordTimings=_wordTimings - In the implementation block
-(NSDictionary *)wordTimings;
-(id)timingPlistForLanguage:(id)arg1 ;
-(id)timingInfosFrom:(id)arg1 withText:(id)arg2 ;
-(id)estimatedTTSWordTimingForText:(id)arg1 withLanguage:(id)arg2 withGender:(long long)arg3 ;
-(void)setWordTimings:(NSDictionary *)arg1 ;
@end

