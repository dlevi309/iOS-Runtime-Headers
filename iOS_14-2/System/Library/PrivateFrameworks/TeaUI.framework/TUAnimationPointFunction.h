/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


#import <TeaUI/TeaUI-Structs.h>
@class CAMediaTimingFunction, TUAnimationFloatFunction;

@interface TUAnimationPointFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _speed;
	TUAnimationFloatFunction* _xFunction;
	TUAnimationFloatFunction* _yFunction;
	CGPoint _startValue;
	CGPoint _endValue;

}

@property (nonatomic,retain) TUAnimationFloatFunction * xFunction;                //@synthesize xFunction=_xFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * yFunction;                //@synthesize yFunction=_yFunction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGPoint startValue;                                  //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGPoint endValue;                                    //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
-(void)setSpeed:(double)arg1 ;
-(void)setEndValue:(CGPoint)arg1 ;
-(double)speed;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(CGPoint)solveForTime:(double)arg1 ;
-(CGPoint)endValue;
-(void)setStartValue:(CGPoint)arg1 ;
-(CGPoint)startValue;
-(void)_reloadFunctions;
-(id)initWithTimingFunction:(id)arg1 startRect:(CGPoint)arg2 endRect:(CGPoint)arg3 speed:(double)arg4 ;
-(TUAnimationFloatFunction *)xFunction;
-(TUAnimationFloatFunction *)yFunction;
-(void)setXFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setYFunction:(TUAnimationFloatFunction *)arg1 ;
@end

