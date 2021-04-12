/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@class NSString;

@interface CHHapticDynamicParameter : NSObject {

	NSString* _param;
	float _value;
	double _time;

}

@property (readonly) NSString * parameterID;              //@synthesize param=_param - In the implementation block
@property (assign) float value;                           //@synthesize value=_value - In the implementation block
@property (assign) double relativeTime;                   //@synthesize time=_time - In the implementation block
-(id)init;
-(id)initWithParameterID:(id)arg1 value:(float)arg2 relativeTime:(double)arg3 ;
-(void)setValue:(float)arg1 ;
-(NSString *)parameterID;
-(void)setRelativeTime:(double)arg1 ;
-(double)relativeTime;
-(float)value;
@end

