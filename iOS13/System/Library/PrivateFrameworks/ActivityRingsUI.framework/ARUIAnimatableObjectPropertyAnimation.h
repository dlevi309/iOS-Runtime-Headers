/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@interface ARUIAnimatableObjectPropertyAnimation : NSObject {

	/*^block*/id _animationTimingFunction;
	double _currentAnimationTime;
	double _duration;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (setter=_setStartValue:,nonatomic,retain) id _startValue; 
@property (setter=_setEndValue:,nonatomic,retain) id _endValue; 
@property (setter=_setCurrentValue:,nonatomic,retain) id _currentValue; 
+(/*^block*/id)timingFunctionForMediaTimingFunction:(id)arg1 ;
+(/*^block*/id)linearTimingFunction;
+(id)animationWithDuration:(double)arg1 timingFunction:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)duration;
-(id)completionHandler;
-(id)_startValue;
-(id)_endValue;
-(id)_currentValue;
-(void)update:(double)arg1 ;
-(void)_updateWithProgress:(float)arg1 ;
-(void)_setStartValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(BOOL)isFinishedAnimating;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
-(void)callAndReleaseCompletionHandler;
-(void)_setEndValue:(id)arg1 ;
@end

