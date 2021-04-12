/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)repeatCount;
-(double)stiffness;
-(void)setSpeed:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(double)initialVelocity;
-(double)mass;
-(id)init;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setInitialVelocity:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(double)speed;
-(void)setTimingFunction:(id)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(id)timingFunction;
-(double)delay;
-(void)_updateDuration;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CASpringAnimation *)springAnimation;
-(double)interpolatedProgressForProgress:(double)arg1 ;
-(id)_initWithSpringAnimation:(id)arg1 completionEpsilon:(double)arg2 ;
-(void)setCompletionEpsilon:(double)arg1 ;
-(double)completionEpsilon;
@end

