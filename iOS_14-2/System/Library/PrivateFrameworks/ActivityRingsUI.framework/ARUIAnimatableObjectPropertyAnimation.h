/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)update:(double)arg1 ;
-(id)completionHandler;
-(id)_endValue;
-(void)_updateWithProgress:(float)arg1 ;
-(id)_startValue;
-(id)_currentValue;
-(double)duration;
-(BOOL)isFinishedAnimating;
-(void)_setStartValue:(id)arg1 ;
-(void)_setEndValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
-(void)callAndReleaseCompletionHandler;
@end

