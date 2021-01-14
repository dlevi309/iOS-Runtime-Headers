/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


@class CAMediaTimingFunction;

@interface _SUICCheckGlyphSpringAnimationFactory : NSObject {

	double _duration;
	BOOL _needsDurationUpdate;
	double _mass;
	double _stiffness;
	double _damping;
	double _velocity;
	CAMediaTimingFunction* _timing;

}

@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double mass;                                 //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                            //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                              //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double velocity;                             //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timing;              //@synthesize timing=_timing - In the implementation block
+(id)springAnimationWithKeyPath:(id)arg1 ;
+(double)defaultDuration;
+(id)defaultTimingFunction;
+(id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2 ;
-(void)setVelocity:(double)arg1 ;
-(double)stiffness;
-(CAMediaTimingFunction *)timing;
-(void)setStiffness:(double)arg1 ;
-(double)velocity;
-(double)mass;
-(id)init;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(id)_timingFunctionForAnimation;
-(id)springAnimationWithKeyPath:(id)arg1 ;
-(void)setTiming:(CAMediaTimingFunction *)arg1 ;
-(void)setMass:(double)arg1 ;
-(id)initWithVelocity:(double)arg1 ;
-(double)duration;
-(id)initWithVelocity:(double)arg1 timing:(id)arg2 ;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5 ;
-(id)_springAnimationWithKeyPath:(id)arg1 ;
-(void)_updateDurationIfNecessary;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 ;
-(void)dealloc;
@end

