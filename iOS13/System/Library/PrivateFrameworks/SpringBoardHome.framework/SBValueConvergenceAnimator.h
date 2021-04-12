/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@interface SBValueConvergenceAnimator : NSObject {

	double _previousForce;
	double _diff;
	BOOL _finishesOnValueConvergence;
	double _currentValue;
	double _targetValue;
	/*^block*/id _convergenceFunction;
	/*^block*/id _applier;
	/*^block*/id _completion;
	long long _frameInterval;
	double _startTime;
	double _lastFireTime;

}

@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double lastFireTime;                          //@synthesize lastFireTime=_lastFireTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
@property (assign,nonatomic) double currentValue;                          //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) double targetValue;                           //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) BOOL finishesOnValueConvergence;              //@synthesize finishesOnValueConvergence=_finishesOnValueConvergence - In the implementation block
@property (nonatomic,copy) id convergenceFunction;                         //@synthesize convergenceFunction=_convergenceFunction - In the implementation block
@property (nonatomic,copy) id applier;                                     //@synthesize applier=_applier - In the implementation block
@property (nonatomic,copy) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) long long frameInterval;                      //@synthesize frameInterval=_frameInterval - In the implementation block
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(BOOL)isRunning;
-(void)_reset;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(long long)frameInterval;
-(void)setFrameInterval:(long long)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)targetValue;
-(void)setTargetValue:(double)arg1 ;
-(double)elapsedTime;
-(double)currentValue;
-(void)setCurrentValue:(double)arg1 ;
-(void)setConvergenceFunctionWithConstant:(long long)arg1 ;
-(void)_invokeApplier;
-(void)_invokeCompletionWithFinished:(BOOL)arg1 ;
-(void)_convergeValue;
-(BOOL)finishesOnValueConvergence;
-(void)setFinishesOnValueConvergence:(BOOL)arg1 ;
-(id)convergenceFunction;
-(void)setConvergenceFunction:(id)arg1 ;
-(id)applier;
-(void)setApplier:(id)arg1 ;
-(double)lastFireTime;
-(void)setLastFireTime:(double)arg1 ;
@end

