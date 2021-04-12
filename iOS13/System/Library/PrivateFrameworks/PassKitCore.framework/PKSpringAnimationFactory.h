/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class CAMediaTimingFunction;

@interface PKSpringAnimationFactory : NSObject {

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
+(double)defaultDuration;
+(id)springAnimationWithKeyPath:(id)arg1 ;
+(id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2 ;
+(id)defaultTimingFunction;
-(id)init;
-(void)dealloc;
-(double)duration;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(double)mass;
-(void)setMass:(double)arg1 ;
-(double)stiffness;
-(void)setStiffness:(double)arg1 ;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(id)_timingFunctionForAnimation;
-(CAMediaTimingFunction *)timing;
-(void)setTiming:(CAMediaTimingFunction *)arg1 ;
-(id)springAnimationWithKeyPath:(id)arg1 ;
-(id)initWithVelocity:(double)arg1 ;
-(id)initWithVelocity:(double)arg1 timing:(id)arg2 ;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5 ;
-(id)_springAnimationWithKeyPath:(id)arg1 ;
-(void)_updateDurationIfNecessary;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 ;
@end

