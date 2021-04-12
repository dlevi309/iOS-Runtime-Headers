/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@interface AVTMorpherWeightThresholdState : NSObject {

	BOOL _isAnimating;
	BOOL _isFadingOutAnimation;
	float _currentValue;
	float _target;
	double _t0;

}

@property (assign,nonatomic) BOOL isAnimating;                       //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) BOOL isFadingOutAnimation;              //@synthesize isFadingOutAnimation=_isFadingOutAnimation - In the implementation block
@property (assign,nonatomic) double t0;                              //@synthesize t0=_t0 - In the implementation block
@property (assign,nonatomic) float currentValue;                     //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) float target;                           //@synthesize target=_target - In the implementation block
-(void)setTarget:(float)arg1 ;
-(float)target;
-(BOOL)isAnimating;
-(float)currentValue;
-(void)setCurrentValue:(float)arg1 ;
-(void)setIsAnimating:(BOOL)arg1 ;
-(BOOL)isFadingOutAnimation;
-(void)setIsFadingOutAnimation:(BOOL)arg1 ;
-(double)t0;
-(void)setT0:(double)arg1 ;
@end

