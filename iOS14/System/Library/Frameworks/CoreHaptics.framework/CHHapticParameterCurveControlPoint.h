/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@interface CHHapticParameterCurveControlPoint : NSObject {

	float _value;
	double _time;

}

@property (assign) double relativeTime;              //@synthesize time=_time - In the implementation block
@property (assign) float value;                      //@synthesize value=_value - In the implementation block
-(id)init;
-(void)setValue:(float)arg1 ;
-(id)initWithRelativeTime:(double)arg1 value:(float)arg2 ;
-(void)setRelativeTime:(double)arg1 ;
-(double)relativeTime;
-(float)value;
@end

