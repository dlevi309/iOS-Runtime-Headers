/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDContentAnimation.h>

@class NSArray, CAMediaTimingFunction;

@interface TSDContentAnimationGroup : TSDContentAnimation {

	NSArray* _animations;
	CAMediaTimingFunction* _timingFunction;
	double _duration;

}

@property (nonatomic,copy) NSArray * animations;                                  //@synthesize animations=_animations - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
-(void)dealloc;
-(double)duration;
-(NSArray *)animations;
-(void)setAnimations:(NSArray *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(BOOL)i_canProduceAnimation;
-(id)i_endLocation;
-(id)i_animationWithTransformBlock:(/*^block*/id)arg1 ;
@end

