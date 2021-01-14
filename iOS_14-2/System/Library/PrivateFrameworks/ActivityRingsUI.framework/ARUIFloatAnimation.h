/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIRingGroupAnimation.h>

@protocol ARUIRingGroupAnimationDelegate;
@class CAMediaTimingFunction, NSString;

@interface ARUIFloatAnimation : NSObject <ARUIRingGroupAnimation> {

	double _percent;
	/*^block*/id _applier;
	BOOL _completed;
	float _startValue;
	float _currentValue;
	float _endValue;
	id<ARUIRingGroupAnimationDelegate> _delegate;
	double _duration;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic,__weak) id<ARUIRingGroupAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float startValue;                                              //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly) float currentValue;                                            //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,readonly) float endValue;                                                //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,readonly) CAMediaTimingFunction * timingFunction;                        //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationWithDuration:(double)arg1 startValue:(float)arg2 endValue:(float)arg3 timingFunction:(id)arg4 applier:(/*^block*/id)arg5 ;
-(void)update:(double)arg1 ;
-(id<ARUIRingGroupAnimationDelegate>)delegate;
-(void)completeAnimation;
-(CAMediaTimingFunction *)timingFunction;
-(void)setDelegate:(id<ARUIRingGroupAnimationDelegate>)arg1 ;
-(float)endValue;
-(float)currentValue;
-(float)startValue;
-(double)duration;
-(BOOL)isAnimating;
-(void)dealloc;
-(id)initWithDuration:(double)arg1 startValue:(float)arg2 endValue:(float)arg3 timingFunction:(id)arg4 applier:(/*^block*/id)arg5 ;
@end

