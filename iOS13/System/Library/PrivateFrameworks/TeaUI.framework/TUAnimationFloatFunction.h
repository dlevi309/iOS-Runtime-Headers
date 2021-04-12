/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(double)startValue;
-(double)endValue;
-(double)solveForTime:(double)arg1 ;
-(id)initWithTimingFunction:(id)arg1 startValue:(double)arg2 endValue:(double)arg3 speed:(double)arg4 ;
@end

