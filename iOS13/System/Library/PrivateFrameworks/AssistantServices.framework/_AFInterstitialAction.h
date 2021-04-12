/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)duration;
-(long long)phase;
-(id)initWithDuration:(double)arg1 ;
-(NSString *)displayKey;
-(NSString *)speakableKey;
-(id)initWithPhase:(long long)arg1 displayKey:(id)arg2 speakableKey:(id)arg3 ;
@end

