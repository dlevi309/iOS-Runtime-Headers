/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


#import <TeaUI/TeaUI-Structs.h>
@class CAMediaTimingFunction, TUAnimationFloatFunction;

@interface TUAnimationAffineTransformFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _speed;
	TUAnimationFloatFunction* _aFunction;
	TUAnimationFloatFunction* _bFunction;
	TUAnimationFloatFunction* _cFunction;
	TUAnimationFloatFunction* _dFunction;
	TUAnimationFloatFunction* _txFunction;
	TUAnimationFloatFunction* _tyFunction;
	CGAffineTransform _startValue;
	CGAffineTransform _endValue;

}

@property (nonatomic,retain) TUAnimationFloatFunction * aFunction;                //@synthesize aFunction=_aFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * bFunction;                //@synthesize bFunction=_bFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * cFunction;                //@synthesize cFunction=_cFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * dFunction;                //@synthesize dFunction=_dFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * txFunction;               //@synthesize txFunction=_txFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * tyFunction;               //@synthesize tyFunction=_tyFunction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGAffineTransform startValue;                        //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGAffineTransform endValue;                          //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(void)setStartValue:(CGAffineTransform)arg1 ;
-(void)setEndValue:(CGAffineTransform)arg1 ;
-(CGAffineTransform)startValue;
-(CGAffineTransform)endValue;
-(CGAffineTransform)solveForTime:(double)arg1 ;
-(void)_reloadFunctions;
-(TUAnimationFloatFunction *)aFunction;
-(TUAnimationFloatFunction *)bFunction;
-(TUAnimationFloatFunction *)cFunction;
-(TUAnimationFloatFunction *)dFunction;
-(TUAnimationFloatFunction *)txFunction;
-(TUAnimationFloatFunction *)tyFunction;
-(void)setAFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setBFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setCFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setDFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setTxFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setTyFunction:(TUAnimationFloatFunction *)arg1 ;
-(id)initWithTimingFunction:(id)arg1 startTransform:(CGAffineTransform)arg2 endTransform:(CGAffineTransform)arg3 speed:(double)arg4 ;
@end

