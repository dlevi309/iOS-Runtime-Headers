/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)floatValue;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(long long)curve;
-(void)setCurve:(long long)arg1 ;
-(double)fraction;
-(void)setFraction:(double)arg1 ;
-(void)setFloatValue:(double)arg1 ;
-(id)initWithFloatValue:(double)arg1 fraction:(double)arg2 ;
@end

