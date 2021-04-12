/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 frameInterval:(double)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(void)animateWithParameters:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 animations:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(id)fencingAnimation;
-(long long)curve;
-(id)initWithDefaultParameters;
-(void)setDuration:(double)arg1 ;
-(id<_UIBasicAnimationFactory>)animationFactory;
-(id)init;
-(void)setDelay:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(BOOL)skipFencing;
-(BOOL)shouldAnimate;
-(void)setAnimationFactory:(id<_UIBasicAnimationFactory>)arg1 ;
-(id)initWithEmptyParameters;
-(void)setSkipFencing:(BOOL)arg1 ;
-(double)delay;
-(BSAnimationSettings *)bsAnimationSettings;
-(double)duration;
-(double)startTime;
-(void)setCurve:(long long)arg1 ;
@end

