/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class CAMediaTimingFunction;

@interface NTKFloatCurveElement : NSObject {

	double _floatValue;
	double _fraction;
	long long _curve;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic) double floatValue;                                   //@synthesize floatValue=_floatValue - In the implementation block
@property (assign,nonatomic) double fraction;                                     //@synthesize fraction=_fraction - In the implementation block
@property (assign,nonatomic) long long curve;                                     //@synthesize curve=_curve - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
-(long long)curve;
-(double)floatValue;
-(void)setFloatValue:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setFraction:(double)arg1 ;
-(void)setCurve:(long long)arg1 ;
-(double)fraction;
-(id)initWithFloatValue:(double)arg1 fraction:(double)arg2 ;
@end

