/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@interface CHHapticParameterCurveControlPoint : NSObject {

	float _value;
	double _time;

}

@property (assign) double relativeTime;              //@synthesize time=_time - In the implementation block
@property (assign) float value;                      //@synthesize value=_value - In the implementation block
-(id)init;
-(float)value;
-(void)setValue:(float)arg1 ;
-(void)setRelativeTime:(double)arg1 ;
-(double)relativeTime;
-(id)initWithRelativeTime:(double)arg1 value:(float)arg2 ;
@end

