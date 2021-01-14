/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVHapticPlayerParameterCurveControlPoint : NSObject <NSSecureCoding> {

	float _value;
	double _time;

}

@property (assign) double time;              //@synthesize time=_time - In the implementation block
@property (assign) float value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(float)arg1 ;
-(id)initWithTime:(double)arg1 value:(float)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(float)value;
@end

