/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKAudioExposureValue : NSObject {

	double _value;
	double _duration;

}

@property (nonatomic,readonly) double value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double duration;              //@synthesize duration=_duration - In the implementation block
-(double)value;
-(double)duration;
-(id)initWithValue:(double)arg1 duration:(double)arg2 ;
@end

