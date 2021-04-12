/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


#import <TeaUI/TeaUI-Structs.h>
@class CAMediaTimingFunction, TUAnimationPointFunction, TUAnimationSizeFunction;

@interface TUAnimationRectFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _speed;
	TUAnimationPointFunction* _originFunction;
	TUAnimationSizeFunction* _sizeFunction;
	CGRect _startValue;
	CGRect _endValue;

}

@property (nonatomic,retain) TUAnimationPointFunction * originFunction;              //@synthesize originFunction=_originFunction - In the implementation block
@property (nonatomic,retain) TUAnimationSizeFunction * sizeFunction;                 //@synthesize sizeFunction=_sizeFunction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                 //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGRect startValue;                                      //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGRect endValue;                                        //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                           //@synthesize speed=_speed - In the implementation block
-(void)setSizeFunction:(TUAnimationSizeFunction *)arg1 ;
-(TUAnimationSizeFunction *)sizeFunction;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(void)setStartValue:(CGRect)arg1 ;
-(void)setEndValue:(CGRect)arg1 ;
-(CGRect)startValue;
-(CGRect)endValue;
-(CGRect)solveForTime:(double)arg1 ;
-(void)_reloadFunctions;
-(id)initWithTimingFunction:(id)arg1 startRect:(CGRect)arg2 endRect:(CGRect)arg3 speed:(double)arg4 ;
-(TUAnimationPointFunction *)originFunction;
-(void)setOriginFunction:(TUAnimationPointFunction *)arg1 ;
@end

