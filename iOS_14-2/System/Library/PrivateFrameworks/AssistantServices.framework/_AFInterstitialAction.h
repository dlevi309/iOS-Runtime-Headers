/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSString;

@interface _AFInterstitialAction : NSObject {

	long long _phase;
	NSString* _displayKey;
	NSString* _speakableKey;
	double _duration;

}

@property (nonatomic,readonly) long long phase;                           //@synthesize phase=_phase - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayKey;                //@synthesize displayKey=_displayKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * speakableKey;              //@synthesize speakableKey=_speakableKey - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
-(id)initWithDuration:(double)arg1 ;
-(NSString *)speakableKey;
-(NSString *)displayKey;
-(id)initWithPhase:(long long)arg1 displayKey:(id)arg2 speakableKey:(id)arg3 ;
-(long long)phase;
-(double)duration;
@end

