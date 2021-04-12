/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIBasicAnimationFactory;
@class BSAnimationSettings;

@interface UIStatusBarAnimationParameters : NSObject {

	double _duration;
	double _delay;
	long long _curve;
	id<_UIBasicAnimationFactory> _animationFactory;
	BOOL _skipFencing;
	double _startTime;

}

@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                               //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) long long curve;                                            //@synthesize curve=_curve - In the implementation block
@property (nonatomic,retain) id<_UIBasicAnimationFactory> animationFactory;              //@synthesize animationFactory=_animationFactory - In the implementation block
@property (assign,nonatomic) BOOL skipFencing;                                           //@synthesize skipFencing=_skipFencing - In the implementation block
@property (assign,nonatomic) double startTime;                                           //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) BSAnimationSettings * bsAnimationSettings; 
+(void)animateWithParameters:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(id)fencingAnimation;
+(void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 animations:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 frameInterval:(double)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(long long)curve;
-(void)setCurve:(long long)arg1 ;
-(id<_UIBasicAnimationFactory>)animationFactory;
-(id)initWithDefaultParameters;
-(BSAnimationSettings *)bsAnimationSettings;
-(BOOL)skipFencing;
-(void)setSkipFencing:(BOOL)arg1 ;
-(id)initWithEmptyParameters;
-(BOOL)shouldAnimate;
-(void)setAnimationFactory:(id<_UIBasicAnimationFactory>)arg1 ;
@end

