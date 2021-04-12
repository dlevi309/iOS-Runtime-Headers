/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@interface AVHapticPlayerParameterCurveControlPoint : NSObject {

	float _value;
	double _time;

}

@property (assign) double time;              //@synthesize time=_time - In the implementation block
@property (assign) float value;              //@synthesize value=_value - In the implementation block
-(float)value;
-(void)setValue:(float)arg1 ;
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)initWithTime:(double)arg1 value:(float)arg2 ;
@end

