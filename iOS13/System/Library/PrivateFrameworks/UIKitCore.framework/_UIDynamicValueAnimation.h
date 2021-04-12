/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDynamicAnimation.h>

@class NSMutableArray, NSArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation {

	/*^block*/id _applier;
	/*^block*/id _viewApplier;
	double _value;
	double _velocity;
	double _unitSize;
	double _friction;
	double _decelerationFactor;
	double _decelerationLnFactor;
	double _multiplier;
	NSMutableArray* _activeValues;
	void* _stepFunction;

}

@property (assign,nonatomic) double value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double velocity;                   //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) double friction;                   //@synthesize friction=_friction - In the implementation block
@property (nonatomic,copy) NSArray * activeValues;              //@synthesize activeValues=_activeValues - In the implementation block
+(id)_dynamicValueAnimationMatchingCASpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(float)arg3 velocity:(float)arg4 fromValue:(double)arg5 toValue:(double)arg6 ;
-(id)init;
-(void)dealloc;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)_multiplier;
-(void)_setMultiplier:(double)arg1 ;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(BOOL)_animateForInterval:(double)arg1 ;
-(id)initWithValue:(double)arg1 velocity:(double)arg2 unitSize:(double)arg3 ;
-(void)_stopAnimation;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(void)_setDecelerationFactor:(double)arg1 ;
-(void)addActiveValue:(id)arg1 ;
-(void)_updateStepFunction;
-(void)runWithValueApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4 ;
-(void)runWithValueApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(double)friction;
-(double)settlingDuration;
-(void)removeActiveValue:(id)arg1 ;
-(void)setActiveValues:(NSArray *)arg1 ;
-(void)setFriction:(double)arg1 ;
-(void)_setVelocity:(double)arg1 ;
-(NSArray *)activeValues;
@end

