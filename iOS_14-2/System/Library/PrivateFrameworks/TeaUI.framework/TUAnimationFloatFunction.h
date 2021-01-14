/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@class CAMediaTimingFunction;

@interface TUAnimationFloatFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _startValue;
	double _endValue;
	double _speed;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) double startValue;                                   //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) double endValue;                                     //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
-(void)setSpeed:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(id)init;
-(double)speed;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(double)solveForTime:(double)arg1 ;
-(double)endValue;
-(void)setStartValue:(double)arg1 ;
-(double)startValue;
-(id)initWithTimingFunction:(id)arg1 startValue:(double)arg2 endValue:(double)arg3 speed:(double)arg4 ;
@end

