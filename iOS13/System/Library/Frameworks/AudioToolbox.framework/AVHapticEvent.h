/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVHapticPlayerParameterCurve;

@interface AVHapticEvent : NSObject <NSSecureCoding> {

	double _time;
	double _duration;
	BOOL _isParameter;
	unsigned long long _eventCategory;
	SCD_Union_AV20 _u;
	AVHapticPlayerFixedParameter _fixedParams[8];
	AVHapticPlayerParameterCurve* _paramCurve;
	long long _fixedParamCount;
	float _value;

}

@property (readonly) double time;                                                //@synthesize time=_time - In the implementation block
@property (readonly) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (readonly) BOOL isParameter;                                           //@synthesize isParameter=_isParameter - In the implementation block
@property (readonly) unsigned long long eventCategory;                           //@synthesize eventCategory=_eventCategory - In the implementation block
@property (readonly) unsigned long long eventType; 
@property (readonly) unsigned long long paramType; 
@property (readonly) float value;                                                //@synthesize value=_value - In the implementation block
@property (readonly) AVHapticPlayerFixedParameter* fixedParams; 
@property (readonly) AVHapticPlayerParameterCurve * parameterCurve; 
@property (readonly) long long fixedParamCount;                                  //@synthesize fixedParamCount=_fixedParamCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 ;
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3 ;
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 ;
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 duration:(double)arg5 ;
+(id)eventWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3 ;
+(id)eventWithParameterCurve:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)value;
-(double)duration;
-(double)time;
-(unsigned long long)eventType;
-(AVHapticPlayerFixedParameter*)fixedParams;
-(long long)fixedParamCount;
-(unsigned long long)paramType;
-(AVHapticPlayerParameterCurve *)parameterCurve;
-(unsigned long long)eventCategory;
-(BOOL)isParameter;
-(id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3 ;
-(id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 duration:(double)arg5 ;
-(id)initWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3 ;
-(id)initWithParameterCurve:(id)arg1 ;
@end

