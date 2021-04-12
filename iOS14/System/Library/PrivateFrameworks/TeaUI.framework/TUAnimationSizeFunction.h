/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


#import <TeaUI/TeaUI-Structs.h>
@class CAMediaTimingFunction, TUAnimationFloatFunction;

@interface TUAnimationSizeFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _speed;
	TUAnimationFloatFunction* _widthFunction;
	TUAnimationFloatFunction* _heightFunction;
	CGSize _startValue;
	CGSize _endValue;

}

@property (nonatomic,retain) TUAnimationFloatFunction * widthFunction;               //@synthesize widthFunction=_widthFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * heightFunction;              //@synthesize heightFunction=_heightFunction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                 //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGSize startValue;                                      //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGSize endValue;                                        //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                           //@synthesize speed=_speed - In the implementation block
-(void)setSpeed:(double)arg1 ;
-(void)setEndValue:(CGSize)arg1 ;
-(double)speed;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(CGSize)solveForTime:(double)arg1 ;
-(CGSize)endValue;
-(void)setStartValue:(CGSize)arg1 ;
-(CGSize)startValue;
-(void)_reloadFunctions;
-(TUAnimationFloatFunction *)widthFunction;
-(TUAnimationFloatFunction *)heightFunction;
-(void)setWidthFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setHeightFunction:(TUAnimationFloatFunction *)arg1 ;
-(id)initWithTimingFunction:(id)arg1 startRect:(CGSize)arg2 endRect:(CGSize)arg3 speed:(double)arg4 ;
@end

