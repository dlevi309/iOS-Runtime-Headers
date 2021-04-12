/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUAnimationSettings.h>

@class CASpringAnimation;

@interface HUSpringAnimationSettings : HUAnimationSettings {

	double _completionEpsilon;
	CASpringAnimation* _springAnimation;

}

@property (nonatomic,readonly) CASpringAnimation * springAnimation;              //@synthesize springAnimation=_springAnimation - In the implementation block
@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double stiffness; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double initialVelocity; 
@property (assign,nonatomic) double completionEpsilon;                           //@synthesize completionEpsilon=_completionEpsilon - In the implementation block
+(id)criticallyDampedSpringSettings;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(double)duration;
-(double)mass;
-(void)setMass:(double)arg1 ;
-(double)stiffness;
-(void)setStiffness:(double)arg1 ;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(double)initialVelocity;
-(void)setInitialVelocity:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)timingFunction;
-(void)setTimingFunction:(id)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setRepeatCount:(float)arg1 ;
-(float)repeatCount;
-(void)_updateDuration;
-(double)interpolatedProgressForProgress:(double)arg1 ;
-(id)_initWithSpringAnimation:(id)arg1 completionEpsilon:(double)arg2 ;
-(void)setCompletionEpsilon:(double)arg1 ;
-(CASpringAnimation *)springAnimation;
-(double)completionEpsilon;
@end

