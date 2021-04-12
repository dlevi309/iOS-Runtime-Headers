/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@interface AVTMorpherWeightThresholdDescriptor : NSObject {

	BOOL _animateAbove;
	BOOL _isAnimatingUp;
	BOOL _animateBelow;
	BOOL _isAnimatingDown;
	float _thresholdWeight;
	float _animationDuration;

}

@property (assign,nonatomic) float thresholdWeight;                //@synthesize thresholdWeight=_thresholdWeight - In the implementation block
@property (assign,nonatomic) float animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) BOOL animateAbove;                    //@synthesize animateAbove=_animateAbove - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingUp;                   //@synthesize isAnimatingUp=_isAnimatingUp - In the implementation block
@property (assign,nonatomic) BOOL animateBelow;                    //@synthesize animateBelow=_animateBelow - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingDown;                 //@synthesize isAnimatingDown=_isAnimatingDown - In the implementation block
-(float)animationDuration;
-(void)setAnimationDuration:(float)arg1 ;
-(float)thresholdWeight;
-(void)setThresholdWeight:(float)arg1 ;
-(BOOL)animateAbove;
-(void)setAnimateAbove:(BOOL)arg1 ;
-(BOOL)isAnimatingUp;
-(void)setIsAnimatingUp:(BOOL)arg1 ;
-(BOOL)animateBelow;
-(void)setAnimateBelow:(BOOL)arg1 ;
-(BOOL)isAnimatingDown;
-(void)setIsAnimatingDown:(BOOL)arg1 ;
@end

