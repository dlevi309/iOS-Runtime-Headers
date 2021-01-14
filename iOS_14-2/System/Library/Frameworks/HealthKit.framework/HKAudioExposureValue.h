/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKAudioExposureValue : NSObject {

	double _value;
	double _duration;

}

@property (nonatomic,readonly) double value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)initWithValue:(double)arg1 duration:(double)arg2 ;
-(double)duration;
-(double)value;
@end

